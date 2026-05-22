from turtle import forward
import torch
import torch.nn as nn
import torch.jit as jit

from typing import Any

# TODO: 请补充自定义算子库的名称
# setup.py 将 C++/BANG 扩展编译为 libmlu_custom_ext，导入后可直接调用 pybind 接口。
from libmlu_custom_ext import * # NOSONAR


class sigmoid_function(torch.autograd.Function):
    """
    sigmoid for autograd
    """

    @staticmethod
    def forward(ctx, x):
        # TODO: 请补充自定义算子的python接口函数名
        # active_sigmoid_mlu 是 C++ 侧通过 PYBIND11_MODULE 导出的前向接口。
        y = active_sigmoid_mlu(x)
        ctx.save_for_backward(*[x, y])
        return y

    @staticmethod
    def backward(ctx: Any, d_r: Any) -> Any:
        d_r = d_r.contiguous()
        x, y = ctx.saved_tensors
        dx = y * (1 - y) * d_r
        return dx


@jit.ignore
def sigmoid(x: torch.Tensor) -> torch.Tensor:
    """
    sigmoid for forward
    """
    return sigmoid_function.apply(x)
