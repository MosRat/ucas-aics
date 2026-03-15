import os
import sys

sys.path.append(os.path.abspath(os.path.join(os.path.dirname(__file__), "..")))
from layers_1 import MLP, CrossEntropyLoss
import torch
import torch.nn as nn
import numpy as np

# 假设你之前写的 Parameter, Module, Linear, Relu, Softmax,
# CrossEntropyLoss, Sequential, MLP 都在当前命名空间中

def test_alignment():
    # 1. 设置随机种子并生成测试数据
    np.random.seed(42)
    torch.manual_seed(42)

    batch_size = 4
    input_dim = 10
    hidden_dim1 = 16
    hidden_dim2 = 8
    num_classes = 3

    X_np = np.random.randn(batch_size, input_dim).astype(np.float32)
    y_np = np.random.randint(0, num_classes, size=(batch_size,))

    # 转换为 PyTorch 张量
    X_tensor = torch.tensor(X_np, requires_grad=True)
    y_tensor = torch.tensor(y_np, dtype=torch.long)

    # 2. 实例化两个模型
    # NumPy 模型
    np_model = MLP(input_dim, hidden_dim1, hidden_dim2, num_classes)
    np_criterion = CrossEntropyLoss()

    # PyTorch 模型
    pt_model = nn.Sequential(
        nn.Linear(input_dim, hidden_dim1),
        nn.ReLU(),
        nn.Linear(hidden_dim1, hidden_dim2),
        nn.ReLU(),
        nn.Linear(hidden_dim2, num_classes),
    )
    pt_criterion = nn.CrossEntropyLoss()

    # 3. 强制同步初始权重 (极其重要！)
    # 我们把 PyTorch 随机初始化的权重直接硬拷贝给 NumPy 模型
    with torch.no_grad():
        # Layer 0: Linear(10, 16)
        np_model.net._modules["0"].weight.data = pt_model[0].weight.numpy().T.copy()
        np_model.net._modules["0"].bias.data = (
            pt_model[0].bias.numpy().reshape(1, -1).copy()
        )

        # Layer 2: Linear(16, 8)
        np_model.net._modules["2"].weight.data = pt_model[2].weight.numpy().T.copy()
        np_model.net._modules["2"].bias.data = (
            pt_model[2].bias.numpy().reshape(1, -1).copy()
        )

        # Layer 4: Linear(8, 3)
        np_model.net._modules["4"].weight.data = pt_model[4].weight.numpy().T.copy()
        np_model.net._modules["4"].bias.data = (
            pt_model[4].bias.numpy().reshape(1, -1).copy()
        )

    # ==========================================
    # 4. 对比前向传播 (Forward Pass)
    # ==========================================
    pt_logits = pt_model(X_tensor)
    pt_loss = pt_criterion(pt_logits, y_tensor)

    np_logits = np_model.forward(X_np)
    np_loss = np_criterion.forward(np_logits, y_np)

    print("--- 前向传播对比 ---")
    print(
        f"Logits 对齐: {np.allclose(pt_logits.detach().numpy(), np_logits, atol=1e-5)}"
    )
    print(f"Loss   对齐: {np.allclose(pt_loss.item(), np_loss, atol=1e-5)}")
    print(f"NumPy Loss: {np_loss:.6f} | PyTorch Loss: {pt_loss.item():.6f}\n")

    # ==========================================
    # 5. 对比反向传播 (Backward Pass)
    # ==========================================
    pt_loss.backward()

    grad_from_loss = np_criterion.backward()
    np_model.backward(grad_from_loss)

    print("--- 反向传播梯度对比 ---")

    # 检查 Layer 4 梯度
    pt_grad_w4 = pt_model[4].weight.grad.numpy().T
    pt_grad_b4 = pt_model[4].bias.grad.numpy().reshape(1, -1)
    np_grad_w4 = np_model.net._modules["4"].weight.grad
    np_grad_b4 = np_model.net._modules["4"].bias.grad
    print(f"Layer 4 Weight 梯度对齐: {np.allclose(pt_grad_w4, np_grad_w4, atol=1e-5)}")
    print(f"Layer 4 Bias   梯度对齐: {np.allclose(pt_grad_b4, np_grad_b4, atol=1e-5)}")

    # 检查 Layer 2 梯度
    pt_grad_w2 = pt_model[2].weight.grad.numpy().T
    pt_grad_b2 = pt_model[2].bias.grad.numpy().reshape(1, -1)
    np_grad_w2 = np_model.net._modules["2"].weight.grad
    np_grad_b2 = np_model.net._modules["2"].bias.grad
    print(f"Layer 2 Weight 梯度对齐: {np.allclose(pt_grad_w2, np_grad_w2, atol=1e-5)}")
    print(f"Layer 2 Bias   梯度对齐: {np.allclose(pt_grad_b2, np_grad_b2, atol=1e-5)}")

    # 检查 Layer 0 梯度
    pt_grad_w0 = pt_model[0].weight.grad.numpy().T
    pt_grad_b0 = pt_model[0].bias.grad.numpy().reshape(1, -1)
    np_grad_w0 = np_model.net._modules["0"].weight.grad
    np_grad_b0 = np_model.net._modules["0"].bias.grad
    print(f"Layer 0 Weight 梯度对齐: {np.allclose(pt_grad_w0, np_grad_w0, atol=1e-5)}")
    print(f"Layer 0 Bias   梯度对齐: {np.allclose(pt_grad_b0, np_grad_b0, atol=1e-5)}")


if __name__ == "__main__":
    test_alignment()
