import threading
import queue
from torchvision.models import vgg19
from torch import nn
from zipfile import ZipFile
from torch.utils.data import Dataset, DataLoader
from torchvision.utils import save_image
import torch
import torch_mlu
import cv2
import numpy
import os

os.putenv("MLU_VISIBLE_DEVICES", "0")
torch_mlu.mlu.enable_linear_memory()

# torch.mlu = torch_mlu.mlu  # ty:ignore[unresolved-attribute]
# assert hasattr(torch, "mlu") and torch.mlu is not None


class AsyncMLUSaver:
    def __init__(self, num_buffers=4, img_shape=(1, 3, 512, 1024)):
        """
        初始化常驻保存器。
        :param num_buffers: 环形缓冲区的数量。根据你攒图的频率和硬盘写入速度决定，一般 4 到 8 足够。
        :param img_shape: 拼接后图像的形状。你的输入是 (1,3,512,512)，左右拼接后是 (1,3,512,1024)。
        """
        # 1. 核心：创建一个专属的后台数据搬运流
        self.copy_stream = torch.mlu.Stream()  # ty:ignore[unresolved-attribute]

        # 2. 核心：在 CPU 上分配固定大小的锁页内存 (Pinned Memory)
        # 只有存放在 page-locked 内存中，MLU 的 non_blocking 拷贝才真正生效
        self.buffers = [
            torch.zeros(img_shape, dtype=torch.float32).pin_memory()
            for _ in range(num_buffers)
        ]

        # 环形队列的指针和任务队列
        self.num_buffers = num_buffers
        self.buffer_idx = 0
        self.task_queue = queue.Queue(maxsize=num_buffers)

        # 3. 核心：启动常驻后台线程
        self.running = True
        self.worker_thread = threading.Thread(target=self._worker, daemon=True)
        self.worker_thread.start()
        print(f"[AsyncMLUSaver] Started with {num_buffers} pinned buffers.")

    def submit(self, img_c, img_g, step):
        """
        主循环中调用的提交函数，耗时极短（微秒级），0 阻塞。
        :param img_c: 内容图 (MLU tensor)
        :param img_g: 生成图 (MLU tensor)
        :param step: 当前的步数 (用于命名)
        """
        # 如果队列满了，说明硬盘写入太慢了，为了不阻塞训练，直接丢弃本次保存任务
        if self.task_queue.full():
            print(
                f"[AsyncMLUSaver] Warning: Disk I/O is too slow! Dropping image for step {step}."
            )
            return

        # 1. 在主计算流 (当前流) 上将图像拼好
        # 这一步在 MLU 内部极快，不消耗总线带宽
        cat_img = torch.cat([img_c, img_g], dim=3)

        # 获取当前的空闲锁页内存块
        cpu_buffer = self.buffers[self.buffer_idx]

        # 2. 让拷贝流等待当前计算流完成拼接工作
        current_stream = torch.mlu.current_stream()  # ty:ignore[unresolved-attribute]
        self.copy_stream.wait_stream(current_stream)

        # 3. 切换到拷贝流，触发异步 DMA 传输
        with torch.mlu.stream(self.copy_stream):  # ty:ignore[unresolved-attribute]
            # 将 MLU 数据拷贝到预分配的 CPU 锁页内存中，non_blocking=True 确保立即返回
            cpu_buffer.copy_(cat_img, non_blocking=True)

            # 记录一个事件，表示这块内存的“搬运工作”已经发出了
            copy_event = torch.mlu.Event()  # ty:ignore[unresolved-attribute]
            copy_event.record(self.copy_stream)

        # 将事件、内存块索引、步数扔给后台线程
        self.task_queue.put((copy_event, self.buffer_idx, step))

        # 游标向前推进，实现环形使用
        self.buffer_idx = (self.buffer_idx + 1) % self.num_buffers

    def _worker(self):
        """
        后台线程的常驻循环：负责同步事件并写入硬盘。
        """
        while self.running:
            try:
                # 阻塞等待主线程派发任务
                copy_event, buf_idx, step = self.task_queue.get(timeout=1.0)
            except queue.Empty:
                continue

            # 【关键】：等待 MLU 的 DMA 搬运真正完成！
            # .synchronize() 会阻塞当前这个后台 CPU 线程，但绝不会阻塞主训练循环
            copy_event.synchronize()

            # 此时，self.buffers[buf_idx] 里的数据已经是完整、安全的了
            img_to_save = self.buffers[buf_idx]

            # 执行慢速的硬盘 I/O
            save_image(img_to_save, f"./out/train_mlu/{step}.jpg")

            # 标记任务完成，释放队列空间
            self.task_queue.task_done()

    def close(self):
        """训练结束时安全关闭资源"""
        self.running = False
        self.worker_thread.join()


class COCODataSet(Dataset):
    def __init__(self):
        super(COCODataSet, self).__init__()
        self.zip_path = "./data/train2014.zip"
        self.zip_files = None  # 延迟初始化，不在主进程打开
        self.data_set = []

        # 只在初始化时短暂打开一次，为了获取文件名列表，用完即关
        with ZipFile(self.zip_path) as z:
            for file_name in z.namelist():
                if file_name.endswith(".jpg"):
                    self.data_set.append(file_name)

    def __len__(self):
        return len(self.data_set)

    def __getitem__(self, item):  # ty:ignore[invalid-method-override]
        if self.zip_files is None:
            self.zip_files = ZipFile(self.zip_path)

        file_path = self.data_set[item]
        image = self.zip_files.read(file_path)
        image = numpy.asarray(bytearray(image), dtype="uint8")
        # TODO: 使用cv2.imdecode()函数从指定的内存缓存中读取数据，并把数据转换(解码)成彩色图像格式。
        image = cv2.imdecode(
            image, cv2.IMREAD_COLOR
        )  # TODO完成记录: 从zip中的jpg字节流解码为彩色BGR图像
        # TODO: 使用cv2.resize()将图像缩放为512*512大小，其中所采用的插值方式为：区域插值
        image = cv2.resize(
            image, (512, 512), interpolation=cv2.INTER_AREA
        )  # TODO完成记录: 缩放到512x512并使用区域插值
        # TODO: 使用cv2.cvtColor将图片从BGR格式转换成RGB格式
        image = cv2.cvtColor(image, cv2.COLOR_BGR2RGB)  # TODO完成记录: BGR转换为RGB
        # TODO: 将image从numpy形式转换为torch.float32,并将其归一化为[0,1]
        image = (
            torch.from_numpy(image).to(torch.float32) / 255.0
        )  # TODO完成记录: 转为float32并归一化到[0,1]
        # TODO: 用permute函数将tensor从HxWxC转换为CxHxW
        image = image.permute(2, 0, 1)  # TODO完成记录: HxWxC转换为CxHxW
        return image


class VGG19(nn.Module):
    def __init__(self):
        super(VGG19, self).__init__()
        a = vgg19(True)
        a = a.features
        self.layer1 = a[:4]
        self.layer2 = a[4:9]
        self.layer3 = a[9:18]
        self.layer4 = a[18:27]

    def forward(self, input_):
        out1 = self.layer1(input_)
        out2 = self.layer2(out1)
        out3 = self.layer3(out2)
        out4 = self.layer4(out3)
        return out1, out2, out3, out4


class ResBlock(nn.Module):
    def __init__(self, c):
        super(ResBlock, self).__init__()
        self.layer = nn.Sequential(
            # TODO: 进行卷积，输入通道为c，卷积核为3*3，步长为1，填充为1
            nn.Conv2d(
                c, c, kernel_size=3, stride=1, padding=1, bias=False
            ),  # TODO完成记录: 第一层3x3卷积
            # TODO: 执行实例归一化
            nn.InstanceNorm2d(c),  # TODO完成记录: 第一层实例归一化
            # TODO: 执行ReLU
            nn.ReLU(inplace=True),  # TODO完成记录: 第一层ReLU
            # TODO: 进行卷积，输入通道为c，卷积核为3*3，步长为1，填充为1
            nn.Conv2d(
                c, c, kernel_size=3, stride=1, padding=1, bias=False
            ),  # TODO完成记录: 第二层3x3卷积
            # TODO: 执行实例归一化
            nn.InstanceNorm2d(c),  # TODO完成记录: 第二层实例归一化
        )

    def forward(self, x):
        # TODO: 返回残差运算的结果
        return self.layer(x) + x  # TODO完成记录: 残差连接输出


class TransNet(nn.Module):
    def __init__(self):
        super(TransNet, self).__init__()
        self.layer = nn.Sequential(
            ###################下采样层################
            # TODO：构建图像转换网络，第一层卷积
            nn.Conv2d(
                3, 32, kernel_size=9, stride=1, padding=4, bias=False
            ),  # TODO完成记录: 第一层9x9卷积
            # TODO：实例归一化
            nn.InstanceNorm2d(32, affine=False),  # TODO完成记录: 实例归一化
            # TODO：创建激活函数ReLU
            nn.ReLU(inplace=True),  # TODO完成记录: ReLU
            # TODO：第二层卷积
            nn.Conv2d(
                32, 64, kernel_size=3, stride=2, padding=1, bias=False
            ),  # TODO完成记录: 第二层下采样卷积
            # TODO：实例归一化
            nn.InstanceNorm2d(64, affine=False),  # TODO完成记录: 实例归一化
            # TODO：创建激活函数ReLU
            nn.ReLU(inplace=True),  # TODO完成记录: ReLU
            # TODO：第三层卷积
            nn.Conv2d(
                64, 128, kernel_size=3, stride=2, padding=1, bias=False
            ),  # TODO完成记录: 第三层下采样卷积
            # TODO：实例归一化
            nn.InstanceNorm2d(128, affine=False),  # TODO完成记录: 实例归一化
            # TODO：创建激活函数ReLU
            nn.ReLU(inplace=True),  # TODO完成记录: ReLU
            ##################残差层##################
            ResBlock(128),  # TODO完成记录: 第1个残差块
            ResBlock(128),  # TODO完成记录: 第2个残差块
            ResBlock(128),  # TODO完成记录: 第3个残差块
            ResBlock(128),  # TODO完成记录: 第4个残差块
            ResBlock(128),  # TODO完成记录: 第5个残差块
            ################上采样层##################
            # TODO: 使用torch.nn.Upsample对特征图进行上采样
            nn.Upsample(scale_factor=2, mode="nearest"),  # TODO完成记录: 第1次上采样
            # TODO: 执行卷积操作
            nn.Conv2d(
                128, 64, kernel_size=3, stride=1, padding=1, bias=False
            ),  # TODO完成记录: 第1次上采样后的卷积
            # TODO: 实例归一化
            nn.InstanceNorm2d(64, affine=False),  # TODO完成记录: 实例归一化
            # TODO: 执行ReLU操作
            nn.ReLU(inplace=True),  # TODO完成记录: ReLU
            # TODO: 使用torch.nn.Upsample对特征图进行上采样
            nn.Upsample(scale_factor=2, mode="nearest"),  # TODO完成记录: 第2次上采样
            # TODO: 执行卷积操作
            nn.Conv2d(
                64, 32, kernel_size=3, stride=1, padding=1, bias=False
            ),  # TODO完成记录: 第2次上采样后的卷积
            # TODO: 实例归一化
            nn.InstanceNorm2d(32, affine=False),  # TODO完成记录: 实例归一化
            # TODO: 执行ReLU操作
            nn.ReLU(inplace=True),  # TODO完成记录: ReLU
            ###############输出层#####################
            # TODO: 执行卷积操作
            nn.Conv2d(
                32, 3, kernel_size=9, stride=1, padding=4
            ),  # TODO完成记录: 输出层9x9卷积
            # TODO： sigmoid激活函数
            nn.Sigmoid(),  # TODO完成记录: Sigmoid输出到[0,1]
        )

    def forward(self, x):
        return self.layer(x)


def load_image(path):
    # TODO: 使用cv2从路径中读取图片
    image = cv2.imread(path)  # TODO完成记录: 从磁盘读取图片
    # TODO: 使用cv2.cvtColor将图片从BGR格式转换成RGB格式
    image = cv2.cvtColor(image, cv2.COLOR_BGR2RGB)  # TODO完成记录: BGR转换为RGB
    # TODO: 使用cv2.resize()将图像缩放为512*512大小
    image = cv2.resize(
        image, (512, 512), interpolation=cv2.INTER_AREA
    )  # TODO完成记录: 缩放到512x512
    # TODO: 将image从numpy形式转换为torch.float32,并将其归一化为[0,1]
    image = (
        torch.from_numpy(image).to(torch.float32) / 255.0
    )  # TODO完成记录: 转为float32并归一化到[0,1]
    # TODO: 将tensor从HxWxC转换为CxHxW，并对在0维上增加一个维度
    image = image.permute(2, 0, 1).unsqueeze(
        0
    )  # TODO完成记录: HxWxC转为CxHxW并增加batch维
    return image


def get_gram_matrix(f_map):
    """
    获取格拉姆矩阵
    :param f_map:特征图
    :return:格拉姆矩阵，形状（通道数,通道数）
    """
    n, c, h, w = f_map.shape
    if n == 1:
        f_map = f_map.reshape(c, h * w)
        gram_matrix = torch.mm(f_map, f_map.t())
        return gram_matrix
    else:
        f_map = f_map.reshape(n, c, h * w)
        gram_matrix = torch.matmul(f_map, f_map.transpose(1, 2))
        return gram_matrix


if __name__ == "__main__":
    batch_size = 1
    dummy_input = torch.randn(batch_size, 3, 512, 512).to("mlu")
    image_saver = AsyncMLUSaver(num_buffers=16)

    image_style = load_image("./data/udnie.jpg").cpu()
    # TODO: 将输入的风格图像加载到mlu设备上,得到mlu_image_style
    mlu_image_style = image_style.to("mlu")  # TODO完成记录: 将风格图像拷贝到MLU
    net = VGG19().cpu().eval()
    g_net = TransNet().cpu().train()
    # g_net.load_state_dict(
    #     torch.load(
    #         "/workspace/algorithm/code_chap4/exp_4_2_StyleTransfer_infer/models/fst.pth",
    #         map_location="cpu",
    #         weights_only=False,
    #     )
    # )  # TODO-FILLED
    print("g_net build PASS!\n")
    # TODO: 将图像转换网络加载到mlu得到mlu_g_net
    mlu_g_net = g_net.to("mlu")  # TODO完成记录: 将图像转换网络加载到MLU
    mlu_g_net = torch.jit.trace(mlu_g_net, dummy_input)
    # TODO: 将特征网络加载到mlu得到mlu_net
    mlu_net = net.to("mlu")  # TODO完成记录: 将特征提取网络加载到MLU
    # 使用 JIT 追踪
    mlu_net = torch.jit.trace(mlu_net, dummy_input)
    print("MLU JIT Compilation for VGG19 PASS!\n")
    # TODO: 使用adam优化器对mlu_g_net的参数进行优化
    optimizer = torch.optim.Adam(
        mlu_g_net.parameters(), lr=0.001
    )  # TODO完成记录: 使用Adam优化MLU上的图像转换网络参数
    # TODO: 在cpu上计算均方误差损失函得到loss_func
    loss_func = nn.MSELoss().cpu()  # TODO完成记录: 在CPU上构建MSE损失函数
    # TODO: 将损失函数加载到mlu上得到mlu_loss_func
    mlu_loss_func = loss_func.to("mlu")  # TODO完成记录: 将MSE损失函数加载到MLU
    print("build loss PASS!\n")
    data_set = COCODataSet()
    print("load COCODataSet PASS!\n")
    data_loader = DataLoader(
        data_set,
        batch_size,
        True,
        drop_last=True,
        pin_memory=True,
        pin_memory_device="mlu",
        num_workers=8,
    )
    # TODO：mlu_iamge_style经过特征提取网络mlu_net生成风格特征s1-s4
    s1, s2, s3, s4 = mlu_net(
        mlu_image_style
    )  # TODO完成记录: 提取MLU上风格图像的4层特征
    # TODO: 对风格特征s1-s4计算格拉姆矩阵并从当前计算图中分离下来，得到对应的s1-s4
    s1 = get_gram_matrix(s1).detach()  # TODO完成记录: 计算并分离第1层风格Gram矩阵
    s2 = get_gram_matrix(s2).detach()  # TODO完成记录: 计算并分离第2层风格Gram矩阵
    s3 = get_gram_matrix(s3).detach()  # TODO完成记录: 计算并分离第3层风格Gram矩阵
    s4 = get_gram_matrix(s4).detach()  # TODO完成记录: 计算并分离第4层风格Gram矩阵
    j = 0
    count = 0
    epochs = 10
    while j <= epochs:
        for i, image in enumerate(data_loader):
            """生成图片，计算损失"""
            # image_c = image.cpu()
            with torch.autocast(device_type="mlu", enabled=False):
                # TODO: 将输入图像拷贝到mlu上得到mlu_image_c
                mlu_image_c = image.to(
                    "mlu", non_blocking=True
                )  # TODO完成记录: 将内容图像拷贝到MLU
                # TODO: 将mlu_image_c经过mlu_g_net输出生成图像mlu_imge_g
                mlu_image_g = mlu_g_net(
                    mlu_image_c
                )  # TODO完成记录: 图像转换网络在MLU上生成风格化图像
                # TODO: 利用特征提取网络mlu_net提取生成图像mlu_image_g的特征out1-out4
                out1, out2, out3, out4 = mlu_net(
                    mlu_image_g
                )  # TODO完成记录: 提取生成图像的4层特征
            """计算风格损失"""
            # TODO: 对生成图像的特征out1-out4计算gram矩阵，并与风格图像的特征求损失，分别得到loss_s1-loss_s4
            loss_s1 = mlu_loss_func(
                get_gram_matrix(out1), s1
            )  # TODO完成记录: 第1层风格损失
            loss_s2 = mlu_loss_func(
                get_gram_matrix(out2), s2
            )  # TODO完成记录: 第2层风格损失
            loss_s3 = mlu_loss_func(
                get_gram_matrix(out3), s3
            )  # TODO完成记录: 第3层风格损失
            loss_s4 = mlu_loss_func(
                get_gram_matrix(out4), s4
            )  # TODO完成记录: 第4层风格损失
            # TODO：loss_s1-loss_s4相加得到风格损失loss_s
            loss_s = (
                loss_s1 + loss_s2 + loss_s3 + loss_s4
            )  # TODO完成记录: 累加4层风格损失

            """计算内容损失"""
            # TODO: 将图片mlu_image_c经过特征提取网络mlu_net得到内容特图像的特征c1-c4
            c1, c2, c3, c4 = mlu_net(mlu_image_c)  # TODO完成记录: 提取内容图像特征

            # TODO: 将内容图像特征c2从计算图中分离并与内容图像特征out2求内容损失loss_c2
            loss_c2 = mlu_loss_func(
                out2, c2.detach()
            )  # TODO完成记录: 使用第4层卷积后的特征计算内容损失
            loss_c = loss_c2

            """总损失"""
            loss = loss_c + 0.000000005 * loss_s

            """清空梯度、计算梯度、更新参数"""
            # TODO: 梯度初始化为零
            optimizer.zero_grad()  # TODO完成记录: 梯度清零
            # TODO: 反向传播求梯度
            loss.backward()  # TODO完成记录: 反向传播计算梯度
            # TODO: 更新所有参数
            optimizer.step()  # TODO完成记录: 优化器更新参数

            count += 1
            if i % 16 == 0:
                print(
                    "epoch:",
                    j,
                    "step:",
                    i,
                    "loss:",
                    loss.item(),
                    "loss_c:",
                    loss_c.item(),
                    "loss_s:",
                    loss_s.item(),
                )
                image_saver.submit(
                    mlu_image_c.detach()[0:1], mlu_image_g.detach()[0:1], i
                )
                # mlu_image_g = mlu_image_g.cpu()[0:1]
                # mlu_image_c = mlu_image_c.cpu()[0:1]
                # # TODO: 利用save_image函数将tensor形式的生成图像mlu_image_g以及输入图像mlu_image_c以jpg左右拼接的形式保存在/out/train_mlu/文件夹下
                # save_image(
                #     torch.cat([mlu_image_c, mlu_image_g], dim=3),
                #     "./out/train_mlu/%d.jpg" % i,
                # )  # TODO完成记录: 按左右拼接形式保存内容图与生成图
        j += 1
        if j % 10 == 0:
            # TODO: 将图像转换网络fst_train_mlu.pth的参数存储在models/文件夹下
            torch.save(
                mlu_g_net.state_dict(), "./models/fst_train_mlu.pth"
            )  # TODO完成记录: 保存MLU训练得到的模型参数

print("MLU TRAIN RESULT PASS!\n")
