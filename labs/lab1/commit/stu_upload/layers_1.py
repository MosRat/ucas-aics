import numpy as np

try:
    from module import Parameter, Module, Sequential
except ImportError:
    Parameter, Module, Sequential = (object,) * 3  # type:ignore


class Linear(Module):
    def __init__(self, num_input: int, num_output: int):
        super().__init__()
        self.num_input = num_input
        self.num_output = num_output
        self.weight = Parameter(np.empty((self.num_input, self.num_output)))
        self.bias = Parameter(np.empty((1, self.num_output)))
        self.input: np.ndarray | None = None

    def init_param(self, std=0.01):
        self.weight.data = np.random.normal(
            loc=0.0, scale=std, size=(self.num_input, self.num_output)
        )
        self.bias.data = np.zeros([1, self.num_output])

    def forward(self, x: np.ndarray) -> np.ndarray:
        self.input = x
        return x @ self.weight.data + self.bias.data

    def backward(self, top: np.ndarray) -> np.ndarray:
        if self.input is None:
            raise ValueError("Cant call backward without forward!")
        self.weight.grad = self.input.transpose() @ top
        self.bias.grad = top.sum(axis=0)

        bottom_diff = top @ self.weight.data.transpose()

        return bottom_diff


class Relu(Module):
    def __init__(self):
        super().__init__()
        self.x_mask: np.ndarray | None = None

    def forward(self, x: np.ndarray) -> np.ndarray:
        self.x_mask = x < 0
        x[self.x_mask] = 0
        return x

    def backward(self, top: np.ndarray) -> np.ndarray:
        if self.x_mask is None:
            raise ValueError("Cant call backward without forward!")
        top[self.x_mask] = 0
        return top


def sigmoid(x: np.ndarray) -> np.ndarray:
    return 1 / (1 + np.exp(-x))


class Sigmoid(Module):
    def __init__(self):
        super().__init__()
        self.sigma: np.ndarray | None = None

    def forward(self, x: np.ndarray) -> np.ndarray:
        self.sigma = sigmoid(x)
        return self.sigma

    def backward(self, top: np.ndarray) -> np.ndarray:
        if self.sigma is None:
            raise ValueError("Cant call backward without forward!")
        return self.sigma * (1 - self.sigma)


class Softmax(Module):
    def __init__(self, dim: int = -1):
        super().__init__()
        self.dim = dim
        self.output: np.ndarray | None = None

    def forward(self, x: np.ndarray) -> np.ndarray:
        x_max = np.max(x, axis=self.dim, keepdims=True)
        exp_x = np.exp(x - x_max)

        self.output = exp_x / np.sum(exp_x, axis=self.dim, keepdims=True)
        return self.output

    def backward(self, top: np.ndarray) -> np.ndarray:
        if self.output is None:
            raise ValueError("Cant call backward without forward!")

        sum_a_top = np.sum(self.output * top, axis=self.dim, keepdims=True)

        bottom_diff = self.output * (top - sum_a_top)

        return bottom_diff


class CrossEntropyLoss:
    def __init__(self):
        self.probs = None
        self.targets = None

    def forward(self, logits: np.ndarray, targets: np.ndarray) -> float:
        targets = targets.squeeze()

        self.targets = targets
        N = logits.shape[0]

        shifted_logits = logits - np.max(logits, axis=1, keepdims=True)
        exp_logits = np.exp(shifted_logits)

        self.probs = exp_logits / np.sum(exp_logits, axis=1, keepdims=True)

        log_probs = shifted_logits - np.log(np.sum(exp_logits, axis=1, keepdims=True))

        correct_log_probs = log_probs[np.arange(N), targets]

        loss = -np.mean(correct_log_probs)

        return loss

    def backward(self, _: np.ndarray | None = None) -> np.ndarray:

        if self.probs is None or self.targets is None:
            raise ValueError("Cant call backward without forward!")

        N = self.probs.shape[0]

        bottom_diff = self.probs.copy()

        bottom_diff[np.arange(N), self.targets] -= 1.0

        bottom_diff = bottom_diff / N

        return bottom_diff


class Conv2d(Module):
    def __init__(
        self,
        in_channels: int,
        out_channels: int,
        kernel_size: int,
        stride: int = 1,
        padding: int = 0,
    ):
        super().__init__()
        self.in_channels = in_channels
        self.out_channels = out_channels
        self.kernel_size = kernel_size
        self.stride = stride
        self.padding = padding

        # 权重形状: (C_out, C_in, kH, kW)
        self.weight = Parameter(
            np.empty((out_channels, in_channels, kernel_size, kernel_size))
        )
        # 偏置形状: (C_out, 1, 1)，利用广播机制加到每个特征图上
        self.bias = Parameter(np.empty((out_channels, 1, 1)))

        self.x = None
        self.x_pad = None

    def init_param(self, std=0.01):
        # 针对卷积层的 He/Kaiming 初始化变体
        fan_in = self.in_channels * self.kernel_size * self.kernel_size
        std = np.sqrt(2.0 / fan_in) if std == 0.01 else std
        self.weight.data = np.random.normal(0.0, std, size=self.weight.shape)
        self.bias.data = np.zeros(self.bias.shape)

    def forward(self, x: np.ndarray) -> np.ndarray:
        self.x = x
        N, C, H, W = x.shape
        KH = KW = self.kernel_size

        # 计算输出维度
        H_out = (H + 2 * self.padding - KH) // self.stride + 1
        W_out = (W + 2 * self.padding - KW) // self.stride + 1

        # 对输入进行 Zero-Padding
        self.x_pad = np.pad(
            x,
            (
                (0, 0),
                (0, 0),
                (self.padding, self.padding),
                (self.padding, self.padding),
            ),
            "constant",
        )
        out = np.zeros((N, self.out_channels, H_out, W_out))

        # 滑动窗口计算
        for i in range(H_out):
            for j in range(W_out):
                h_start, w_start = i * self.stride, j * self.stride
                # 截取当前窗口: (N, C, KH, KW)
                x_slice = self.x_pad[
                    :, :, h_start : h_start + KH, w_start : w_start + KW
                ]
                # 用 tensordot 直接完成 C, KH, KW 三个维度的点积相加
                out[:, :, i, j] = np.tensordot(
                    x_slice, self.weight.data, axes=([1, 2, 3], [1, 2, 3])
                )

        return out + self.bias.data

    def backward(self, top: np.ndarray) -> np.ndarray:
        if self.x is None:
            raise ValueError("Cant call backward without forward!")

        N, C, H, W = self.x.shape
        KH = KW = self.kernel_size
        H_out, W_out = top.shape[2], top.shape[3]

        dx_pad = np.zeros_like(self.x_pad)
        self.weight.grad = np.zeros_like(self.weight.data)

        # 偏置的梯度是把 N, H, W 维度全加起来
        self.bias.grad = top.sum(axis=(0, 2, 3)).reshape(self.out_channels, 1, 1)

        for i in range(H_out):
            for j in range(W_out):
                h_start, w_start = i * self.stride, j * self.stride
                x_slice = self.x_pad[
                    :, :, h_start : h_start + KH, w_start : w_start + KW
                ]  # type:ignore
                top_slice = top[:, :, i, j]  # 形状: (N, C_out)

                # 1. 计算对权重的梯度 dW
                self.weight.grad += np.tensordot(top_slice, x_slice, axes=([0], [0]))
                # 2. 计算对输入的梯度 dx
                dx_pad[:, :, h_start : h_start + KH, w_start : w_start + KW] += (
                    np.tensordot(top_slice, self.weight.data, axes=([1], [0]))
                )

        # 裁掉 padding 的部分，返回真实输入的梯度
        if self.padding > 0:
            p = self.padding
            dx = dx_pad[:, :, p:-p, p:-p]
        else:
            dx = dx_pad

        return dx

class Flatten(Module):
    def __init__(self):
        super().__init__()
        self.shape = None

    def forward(self, x: np.ndarray) -> np.ndarray:
        self.shape = x.shape
        N, C, H, W = x.shape
        # NCHW -> NHWC -> Flatten (HWC 顺序)
        return x.transpose(0, 2, 3, 1).reshape(N, -1)

    def backward(self, top: np.ndarray) -> np.ndarray:
        N, F = top.shape
        C, H, W = self.shape[1:]
        # Flatten -> NHWC -> NCHW
        x_reshaped = top.reshape(N, H, W, C)
        return x_reshaped.transpose(0, 3, 1, 2)

class MLP(Module):
    def __init__(
        self, input_dim: int, hidden_dim1: int, hidden_dim2: int, num_classes: int
    ):
        super().__init__()

        self.net = Sequential(
            Conv2d(
                in_channels=1, out_channels=8, kernel_size=3, stride=2, padding=1
            ),
            Relu(),
            Conv2d(
                in_channels=8, out_channels=16, kernel_size=3, stride=2, padding=1
            ),
            Relu(),
            Flatten(),
            # 28 / 4 = 7
            # 16 * 7 * 7 = 784
            Linear(input_dim, hidden_dim1),
            Relu(),
            Linear(hidden_dim1, hidden_dim1 * 2),
            Relu(),
            Linear(hidden_dim1 * 2, hidden_dim1),
            Relu(),
            Linear(hidden_dim1, hidden_dim2),
            Relu(),
            Linear(hidden_dim2, hidden_dim2),
            Relu(),
            Linear(hidden_dim2, hidden_dim2 // 2),
            Relu(),
            Linear(hidden_dim2 // 2, num_classes),
        )

    def init_param(self, std=0.01):
        for module in self.modules():
            if isinstance(module, Linear):
                module.init_param(std)
            if isinstance(module,Conv2d):
                module.init_param()

    def forward(self, x: np.ndarray) -> np.ndarray:
        x = x.reshape(-1, 1, 28, 28)
        return self.net.forward(x)

    def backward(self, top: np.ndarray) -> np.ndarray:
        return self.net.backward(top)



FullyConnectedLayer, ReLULayer, SoftmaxLossLayer = (None,) * 3


if __name__ == "__main__":
    batch_size = 4
    input_features = 10
    classes = 3

    X = np.random.randn(batch_size, input_features)
    y = np.random.randint(0, classes, size=(batch_size,))

    model = MLP(input_dim=10, hidden_dim1=16, hidden_dim2=8, num_classes=3)
    model.init_param()  # 别忘了初始化权重
    criterion = CrossEntropyLoss()

    logits = model.forward(X)
    loss = criterion.forward(logits, y)
    print(f"Forward Loss: {loss:.4f}")

    grad_from_loss = criterion.backward()

    model.backward(grad_from_loss)

    print("\nGradients checked:")
    for name, param in model.named_parameters():
        if param.requires_grad:
            print(f"{name}.grad shape: {param.grad.shape}")
