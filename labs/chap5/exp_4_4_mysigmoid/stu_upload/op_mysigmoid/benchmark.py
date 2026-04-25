import torch
import torch.utils.benchmark as benchmark
import my_sigmoid as my_sigmoid

torch.set_num_threads(1)


def impl_a(x):
    return my_sigmoid.mysigmoid_cpu(x)


def impl_b(x):
    return torch.sigmoid(x)


x = torch.randn(1, 3, 512, 512)

# 先确认结果一致
assert torch.allclose(impl_a(x), impl_b(x))

t0 = benchmark.Timer(
    stmt="impl_a(x)",
    globals={"impl_a": impl_a, "x": x},
    label="same op",
    sub_label="my_sigmoid",
    description="my_sigmoid",
)

t1 = benchmark.Timer(
    stmt="impl_b(x)",
    globals={"impl_b": impl_b, "x": x},
    label="same op",
    sub_label="torch",
    description="torch",
)

m0 = t0.blocked_autorange(min_run_time=1)
m1 = t1.blocked_autorange(min_run_time=1)

compare = benchmark.Compare([m0, m1])
compare.trim_significant_figures()
compare.print()
