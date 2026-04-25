from torchvision.models import vgg19
from torch import nn
from zipfile import ZipFile
from torch.utils.data import Dataset, DataLoader
from torchvision.utils import save_image
import torch
import cv2
import numpy
import time
import torch_mlu


class COCODataSet(Dataset):
    def __init__(self):
        super(COCODataSet, self).__init__()
        self.zip_files = ZipFile("./data/train2014_small.zip")
        self.data_set = []
        for file_name in self.zip_files.namelist():
            if file_name.endswith(".jpg"):
                self.data_set.append(file_name)

    def __len__(self):
        return len(self.data_set)

    def __getitem__(self, item):  # ty:ignore[invalid-method-override]
        file_path = self.data_set[item]
        image = self.zip_files.read(file_path)
        image = numpy.asarray(bytearray(image), dtype="uint8")
        # TODO: 使用cv2.imdecode()函数从指定的内存缓存中读取数据，并把数据转换(解码)成彩色图像格式。
        image = cv2.imdecode(image, cv2.IMREAD_COLOR)  # TODO-FILLED
        # TODO: 使用cv2.resize()将图像缩放为512*512大小，其中所采用的插值方式为：区域插值
        image = cv2.resize(
            image, (512, 512), interpolation=cv2.INTER_AREA
        )  # TODO-FILLED
        # TODO: 使用cv2.cvtColor将图片从BGR格式转换成RGB格式
        image = cv2.cvtColor(image, cv2.COLOR_BGR2RGB)  # TODO-FILLED
        # TODO: 将image从numpy形式转换为torch.float32,并将其归一化为[0,1]
        image = torch.from_numpy(image).to(torch.float32) / 255.0  # TODO-FILLED
        # TODO: 用permute函数将tensor从HxWxC转换为CxHxW
        image = image.permute(2, 0, 1)  # TODO-FILLED
        return image


class ResBlock(nn.Module):
    def __init__(self, c):
        super(ResBlock, self).__init__()
        self.layer = nn.Sequential(
            # TODO: 进行卷积，输入通道为c，卷积核为3*3，步长为1，填充为1
            nn.Conv2d(
                c, c, kernel_size=3, stride=1, padding=1, bias=False
            ),  # TODO-FILLED
            # TODO: 执行实例归一化
            nn.InstanceNorm2d(c),  # TODO-FILLED
            # TODO: 执行ReLU
            nn.ReLU(inplace=True),  # TODO-FILLED
            # TODO: 进行卷积，输入通道为c，卷积核为3*3，步长为1，填充为1
            nn.Conv2d(
                c, c, kernel_size=3, stride=1, padding=1, bias=False
            ),  # TODO-FILLED
            # TODO: 执行实例归一化
            nn.InstanceNorm2d(c),  # TODO-FILLED
        )

    def forward(self, x):
        # TODO: 返回残差运算的结果
        return self.layer(x) + x  # TODO-FILLED


class TransNet(nn.Module):
    def __init__(self):
        super(TransNet, self).__init__()
        self.layer = nn.Sequential(
            ###################下采样层################
            # TODO：构建图像转换网络，第一层卷积
            nn.Conv2d(
                3, 32, kernel_size=9, stride=1, padding=4, bias=False
            ),  # TODO-FILLED
            # TODO：实例归一化
            nn.InstanceNorm2d(32, affine=False),  # TODO-FILLED
            # TODO：创建激活函数ReLU
            nn.ReLU(inplace=True),  # TODO-FILLED
            # TODO：第二层卷积
            nn.Conv2d(
                32, 64, kernel_size=3, stride=2, padding=1, bias=False
            ),  # TODO-FILLED
            # TODO：实例归一化
            nn.InstanceNorm2d(64, affine=False),  # TODO-FILLED
            # TODO：创建激活函数ReLU
            nn.ReLU(inplace=True),  # TODO-FILLED
            # TODO：第三层卷积
            nn.Conv2d(
                64, 128, kernel_size=3, stride=2, padding=1, bias=False
            ),  # TODO-FILLED
            # TODO：实例归一化
            nn.InstanceNorm2d(128, affine=False),  # TODO-FILLED
            # TODO：创建激活函数ReLU
            nn.ReLU(inplace=True),  # TODO-FILLED
            ##################残差层##################
            ResBlock(128),  # TODO-FILLED
            ResBlock(128),  # TODO-FILLED
            ResBlock(128),  # TODO-FILLED
            ResBlock(128),  # TODO-FILLED
            ResBlock(128),  # TODO-FILLED
            ################上采样层##################
            # TODO: 使用torch.nn.Upsample对特征图进行上采样
            nn.Upsample(scale_factor=2, mode="nearest"),  # TODO-FILLED
            # TODO: 执行卷积操作
            nn.Conv2d(
                128, 64, kernel_size=3, stride=1, padding=1, bias=False
            ),  # TODO-FILLED
            # TODO: 实例归一化
            nn.InstanceNorm2d(64, affine=False),  # TODO-FILLED
            # TODO: 执行ReLU操作
            nn.ReLU(inplace=True),  # TODO-FILLED
            # TODO: 使用torch.nn.Upsample对特征图进行上采样
            nn.Upsample(scale_factor=2, mode="nearest"),  # TODO-FILLED
            # TODO: 执行卷积操作
            nn.Conv2d(
                64, 32, kernel_size=3, stride=1, padding=1, bias=False
            ),  # TODO-FILLED
            # TODO: 实例归一化
            nn.InstanceNorm2d(32, affine=False),  # TODO-FILLED
            # TODO: 执行ReLU操作
            nn.ReLU(inplace=True),  # TODO-FILLED
            ###############输出层#####################
            # TODO: 执行卷积操作
            nn.Conv2d(32, 3, kernel_size=9, stride=1, padding=4),  # TODO-FILLED
            # TODO： sigmoid激活函数
            nn.Sigmoid(),  # TODO-FILLED
        )

    def forward(self, x):
        # x = nn.functional.pad(x, [10, 10, 10, 10])
        # return self.layer(x)[:,:,10:-10,10:-10]
        return self.layer(x)


import torch
import torch.utils.benchmark as benchmark  

torch.backends.mlu.matmul.allow_tf32 = True  # type:ignore

if __name__ == "__main__":
    # 1. 模型与数据准备
    print("正在加载模型和生成测试数据...")
    g_net = TransNet()
    # g_net.load_state_dict(torch.load("./models/fst.pth", map_location="cpu", weights_only=False))

    # 放到 MLU 并设置为 eval 模式
    net = g_net.eval().float().to("mlu")
    example_input = torch.rand((1, 3, 512, 512), dtype=torch.float).to("mlu")

    # 2. 准备各种后端的模型
    print(
        "正在编译和追踪各个版本的模型 (这一步可能需要较长时间，特别是 max-autotune)..."
    )

    # A. 纯原生的 PyTorch Eager 模式
    net_eager = net

    # B. TorchScript (JIT Trace)
    net_traced = torch.jit.trace(net, example_input)

    # C. Torch Compile (默认模式：轻量级优化)
    net_compile_default = torch.compile(net)

    # D. Torch Compile (激进模式：极致调优，编译时间长)
    # 注意：max-autotune 的效果极其依赖底层硬件对 Inductor 的适配深度
    net_compile_max = torch.compile(net, mode="max-autotune")

    # 3. 定义官方 Benchmark 包装器
    def run_benchmark(model, input_tensor, description):
        # ⚠️ 关键点：torch.utils.benchmark 默认只知道怎么去同步 CUDA (torch.cuda.synchronize)。
        # 对于 MLU，我们必须在执行语句中手动包装 MLU 同步，以确保测量的是真实的硬件耗时。
        def run_and_sync():
            with torch.no_grad():
                model(input_tensor)
            torch.mlu.synchronize()  # type:ignore

        # 触发一次推理，强制完成 torch.compile 的 JIT 编译过程，避免编译时间被算入 benchmark
        print(f"正在预热 {description} ...")
        run_and_sync()

        timer = benchmark.Timer(
            stmt="run_and_sync()",
            globals={"run_and_sync": run_and_sync},
            label="TransNet Inference",
            sub_label="Device: MLU, Res: 512x512",
            description=description,
            num_threads=1,  # 推理通常测试单线程派发性能
        )

        # min_run_time 设置为 2.0 秒，让其自动判断需要跑多少次才能得到稳定的均值
        return timer.blocked_autorange(min_run_time=2.0)

    # 4. 开始收集测试结果
    print("\n========== 开始基准测试 (Benchmark) ==========")
    results = []

    results.append(run_benchmark(net_eager, example_input, "1. Eager (Baseline)"))
    results.append(run_benchmark(net_traced, example_input, "2. JIT Trace"))
    results.append(
        run_benchmark(net_compile_default, example_input, "3. Compile (Default)")
    )
    results.append(
        run_benchmark(net_compile_max, example_input, "4. Compile (Max-Autotune)")
    )

    # 5. 使用 PyTorch 官方的对比工具打印美观的表格
    print("\n========== 性能对比报告 ==========")
    compare = benchmark.Compare(results)
    compare.print()
