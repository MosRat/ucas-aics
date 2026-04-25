import numpy as np
from typing import Iterable


class Optimizer:
    def __init__(self, parameters: Iterable, lr: float):
        # 只保存需要求梯度的参数
        self.parameters = [p for p in parameters if p.requires_grad]
        self.lr = lr

    def zero_grad(self):

        for p in self.parameters:
            p.zero_grad()

    def step(self):

        raise NotImplementedError


class SGD(Optimizer):
    def __init__(
        self,
        parameters: Iterable,
        lr: float = 0.01,
        momentum: float = 0.0,
        weight_decay: float = 0.0,
    ):
        super().__init__(parameters, lr)
        self.momentum: float = momentum
        self.weight_decay: float = weight_decay

        self.state:dict[int,np.ndarray] = {}
        if self.momentum != 0:
            for p in self.parameters:
                self.state[id(p)] = np.zeros_like(p.data)

    def step(self):
        for p in self.parameters:
            if p.grad is None:
                continue

            d_p = p.grad.copy()

            if self.weight_decay != 0:
                d_p += self.weight_decay * p.data

            if self.momentum != 0:
                buf = self.state[id(p)]
                buf = self.momentum * buf + d_p
                self.state[id(p)] = buf
                d_p = buf

            p.data -= self.lr * d_p
