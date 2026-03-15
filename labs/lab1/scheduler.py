import math
from optim import Optimizer


class CosineAnnealingLR:
    """
    余弦退火学习率调度器
    """

    def __init__(self, optimizer: Optimizer, T_max: int, eta_min: float = 0.0):
        if not isinstance(optimizer, Optimizer):
            raise TypeError("optimizer msut be Optimizer subclass")

        self.optimizer = optimizer
        self.T_max = T_max
        self.eta_min = eta_min

        self.base_lr = optimizer.lr
        self.current_step = 0

    def get_lr(self) -> float:
        if self.current_step == 0:
            return self.base_lr

        step = min(self.current_step, self.T_max)

        return self.eta_min + 0.5 * (self.base_lr - self.eta_min) * (
            1 + math.cos(math.pi * step / self.T_max)
        )

    def step(self):
        self.current_step += 1
        new_lr = self.get_lr()
        self.optimizer.lr = new_lr
