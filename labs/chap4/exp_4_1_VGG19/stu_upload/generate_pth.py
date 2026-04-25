import os
import scipy.io
import torch
import torch.nn as nn
from collections import OrderedDict

os.putenv("MLU_VISIBLE_DEVICES", "")
cfgs = [
    64,
    "R",
    64,
    "R",
    "M",
    128,
    "R",
    128,
    "R",
    "M",
    256,
    "R",
    256,
    "R",
    256,
    "R",
    256,
    "R",
    "M",
    512,
    "R",
    512,
    "R",
    512,
    "R",
    512,
    "R",
    "M",
    512,
    "R",
    512,
    "R",
    512,
    "R",
    512,
    "R",
    "M",
]
conv_channels = [
    64,
    64,
    128,
    128,
    256,
    256,
    256,
    256,
    512,
    512,
    512,
    512,
    512,
    512,
    512,
    512,
]

IMAGE_PATH = "data/strawberries.jpg"
VGG_PATH = "data/imagenet-vgg-verydeep-19.mat"
BASE_DIR = os.path.dirname(os.path.abspath(__file__))
PROJECT_DIR = os.path.dirname(BASE_DIR)


def vgg19():
    layers = [
        "conv1_1",
        "relu1_1",
        "conv1_2",
        "relu1_2",
        "pool1",
        "conv2_1",
        "relu2_1",
        "conv2_2",
        "relu2_2",
        "pool2",
        "conv3_1",
        "relu3_1",
        "conv3_2",
        "relu3_2",
        "conv3_3",
        "relu3_3",
        "conv3_4",
        "relu3_4",
        "pool3",
        "conv4_1",
        "relu4_1",
        "conv4_2",
        "relu4_2",
        "conv4_3",
        "relu4_3",
        "conv4_4",
        "relu4_4",
        "pool4",
        "conv5_1",
        "relu5_1",
        "conv5_2",
        "relu5_2",
        "conv5_3",
        "relu5_3",
        "conv5_4",
        "relu5_4",
        "pool5",
        "flatten",
        "fc6",
        "relu6",
        "fc7",
        "relu7",
        "fc8",
        "softmax",
    ]
    layer_container = nn.Sequential()
    in_channels = 3
    num_classes = 1000
    conv_idx = 0
    for i, layer_name in enumerate(layers):
        if layer_name.startswith("conv"):
            # 填充：卷积层，按 VGG19 的卷积核/通道数构建
            out_channels = conv_channels[conv_idx]
            layer_container.add_module(
                layer_name,
                nn.Conv2d(
                    in_channels=in_channels,
                    out_channels=out_channels,
                    kernel_size=3,
                    padding=1,
                ),
            )
            in_channels = out_channels
            conv_idx += 1
        elif layer_name.startswith("relu"):
            # 填充：ReLU 激活层
            layer_container.add_module(layer_name, nn.ReLU(inplace=True))
        elif layer_name.startswith("pool"):
            # 填充：MaxPool 下采样层
            layer_container.add_module(
                layer_name, nn.MaxPool2d(kernel_size=2, stride=2)
            )
        elif layer_name == "flatten":
            # 填充：Flatten 展平层
            layer_container.add_module(layer_name, nn.Flatten())
        elif layer_name == "fc6":
            # 填充：第 1 个全连接层
            layer_container.add_module(layer_name, nn.Linear(25088, 4096))
        elif layer_name == "fc7":
            # 填充：第 2 个全连接层
            layer_container.add_module(layer_name, nn.Linear(4096, 4096))
        elif layer_name == "fc8":
            # 填充：分类全连接层
            layer_container.add_module(layer_name, nn.Linear(4096, num_classes))
        elif layer_name == "softmax":
            # 填充：Softmax 输出层
            layer_container.add_module(layer_name, nn.Softmax(dim=1))
    return layer_container


if __name__ == "__main__":
    # 填充：使用 scipy 读取 `.mat` 格式的 VGG19 参数
    datas = scipy.io.loadmat(os.path.join(PROJECT_DIR, VGG_PATH))

    model = vgg19()
    new_state_dict = OrderedDict()
    for i, param_name in enumerate(model.state_dict()):
        name = param_name.split(".")
        if name[-1] == "weight":
            new_state_dict[param_name] = torch.from_numpy(datas[str(i)]).float()
        else:
            new_state_dict[param_name] = torch.from_numpy(datas[str(i)][0]).float()
    # 填充：加载网络参数到 model
    model.load_state_dict(new_state_dict)
    print("*** Start Saving pth ***")
    # 填充：保存模型参数到 `models/vgg19.pth`
    os.makedirs(os.path.join(PROJECT_DIR, "models"), exist_ok=True)
    torch.save(model.state_dict(), os.path.join(PROJECT_DIR, "models", "vgg19.pth"))
    print("Saving pth  PASS.")
