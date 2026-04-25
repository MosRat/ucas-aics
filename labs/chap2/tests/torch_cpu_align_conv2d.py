import os
import sys

sys.path.append(os.path.abspath(os.path.join(os.path.dirname(__file__), "..")))

import torch
import torch.nn as nn
import numpy as np

# 假设之前的类都在当前作用域下
from module import Sequential
from layers_1 import Conv2d, Flatten, Linear, CrossEntropyLoss


def test_cnn_alignment():
    # 1. 固定随机种子，保证每次生成的数据相同
    np.random.seed(42)
    torch.manual_seed(42)

    # 2. 定义微型 CNN 的测试维度
    batch_size = 2
    in_channels = 1
    H, W = 6, 6
    out_channels = 2
    kernel_size = 3
    stride = 2
    padding = 1
    num_classes = 3

    # 计算 Conv2d 后的空间尺寸: (6 + 2*1 - 3)//2 + 1 = 3
    # Flatten 后的维度: 2(通道) * 3(高) * 3(宽) = 18
    flatten_dim = out_channels * 3 * 3

    # 3. 生成随机的输入张量和标签
    X_np = np.random.randn(batch_size, in_channels, H, W).astype(np.float32)
    y_np = np.random.randint(0, num_classes, size=(batch_size,))

    X_tensor = torch.tensor(X_np, requires_grad=True)
    y_tensor = torch.tensor(y_np, dtype=torch.long)

    # 4. 构建相同的网络结构
    # NumPy 版本
    np_net = Sequential(
        Conv2d(in_channels, out_channels, kernel_size, stride, padding),
        Flatten(),
        Linear(flatten_dim, num_classes),
    )
    np_criterion = CrossEntropyLoss()

    # PyTorch 版本
    pt_net = nn.Sequential(
        nn.Conv2d(in_channels, out_channels, kernel_size, stride, padding),
        nn.Flatten(),
        nn.Linear(flatten_dim, num_classes),
    )
    pt_criterion = nn.CrossEntropyLoss()

    # 5. 强制同步初始化权重 (核心步骤)
    with torch.no_grad():
        # 同步 Layer 0 (Conv2d)
        # 卷积核形状一致，直接拷贝
        np_net._modules["0"].weight.data = pt_net[0].weight.numpy().copy()
        # PyTorch 偏置是 (2,)，转为 (2, 1, 1)
        np_net._modules["0"].bias.data = (
            pt_net[0].bias.numpy().reshape(out_channels, 1, 1).copy()
        )

        # 同步 Layer 2 (Linear)
        # 全连接权重需要转置
        np_net._modules["2"].weight.data = pt_net[2].weight.numpy().T.copy()
        np_net._modules["2"].bias.data = pt_net[2].bias.numpy().reshape(1, -1).copy()

    # ==========================================
    # 6. 对比前向传播
    # ==========================================
    pt_logits = pt_net(X_tensor)
    pt_loss = pt_criterion(pt_logits, y_tensor)

    np_logits = np_net.forward(X_np)
    np_loss = np_criterion.forward(np_logits, y_np)

    print("--- 前向传播对比 ---")
    print(
        f"Logits 对齐: {np.allclose(pt_logits.detach().numpy(), np_logits, atol=1e-5)}"
    )
    print(f"Loss   对齐: {np.allclose(pt_loss.item(), np_loss, atol=1e-5)}")
    print(f"NumPy Loss: {np_loss:.6f} | PyTorch Loss: {pt_loss.item():.6f}\n")

    # ==========================================
    # 7. 对比反向传播梯度
    # ==========================================
    pt_loss.backward()

    grad_from_loss = np_criterion.backward()
    np_net.backward(grad_from_loss)

    print("--- 反向传播梯度对比 ---")

    # 检查 Linear 层
    pt_grad_w2 = pt_net[2].weight.grad.numpy().T
    pt_grad_b2 = pt_net[2].bias.grad.numpy().reshape(1, -1)
    np_grad_w2 = np_net._modules["2"].weight.grad
    np_grad_b2 = np_net._modules["2"].bias.grad
    print(f"Linear Weight 梯度对齐: {np.allclose(pt_grad_w2, np_grad_w2, atol=1e-5)}")
    print(f"Linear Bias   梯度对齐: {np.allclose(pt_grad_b2, np_grad_b2, atol=1e-5)}")

    # 检查 Conv2d 层
    pt_grad_w0 = pt_net[0].weight.grad.numpy()
    pt_grad_b0 = pt_net[0].bias.grad.numpy().reshape(out_channels, 1, 1)
    np_grad_w0 = np_net._modules["0"].weight.grad
    np_grad_b0 = np_net._modules["0"].bias.grad
    print(f"Conv2d Weight 梯度对齐: {np.allclose(pt_grad_w0, np_grad_w0, atol=1e-5)}")
    print(f"Conv2d Bias   梯度对齐: {np.allclose(pt_grad_b0, np_grad_b0, atol=1e-5)}")


if __name__ == "__main__":
    test_cnn_alignment()
