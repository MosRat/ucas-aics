// Pytorch扩展头文件的引用
#include <ATen/Parallel.h>
#include <ATen/TensorIterator.h>
#include <ATen/cpu/vec/vec.h>
#include <ATen/native/cpu/Loops.h>
#include <cmath>
#include <torch/extension.h>
#include <vector>
namespace vector_impl {
torch::Tensor mysigmoid_cpu(const torch::Tensor &dets) {
  // TODO: 将输入的tensor转化为浮点类型的vector
  auto input_tensor = dets.to(torch::kFloat32).contiguous();
  std::vector<float> input_data(input_tensor.data_ptr<float>(),
                                input_tensor.data_ptr<float>() +
                                    input_tensor.numel());
  int input_size = input_data.size();
  // TODO: 创建一个浮点类型的output_data，output_data为大小与输入相同的vector
  std::vector<float> output_data(input_size);
  // TODO: 对于输入向量的每个元素计算mysigmoid
  for (int i = 0; i < input_size; i++) {
    output_data[i] = 1.0f / (1.0f + std::exp(-input_data[i]));
  }
  // TODO: Create tensor options with dtype float32
  auto opts = torch::TensorOptions().dtype(torch::kFloat32);
  // TODO: Create a tensor from the output vector
  auto foo =
      torch::from_blob(output_data.data(), {int64_t(output_data.size())}, opts)
          .clone();
  // TODO: 将得到的tensor转换成所需的大小
  auto output = foo.view(dets.sizes());
  return output;
}
} // namespace vector_impl

namespace parallel_impl {
int64_t choose_grain_size(int64_t n) {
  if (n < 4096) {
    return n;
  }
  if (n < (1 << 20)) {
    return 4096;
  }
  return 8192;
}

torch::Tensor mysigmoid_cpu(const torch::Tensor &input) {
  TORCH_CHECK(input.device().is_cpu(),
              "mysigmoid_cpu only supports CPU tensor");

  auto x = input.to(torch::kFloat32).contiguous();
  auto output = torch::empty_like(x);

  const float *x_ptr = x.data_ptr<float>();
  float *out_ptr = output.data_ptr<float>();
  const int64_t n = x.numel();
  if (n == 0) {
    return output.reshape(input.sizes());
  }

  const int64_t grain_size = choose_grain_size(n);

  at::parallel_for(0, n, grain_size, [&](int64_t begin, int64_t end) {
    for (int64_t i = begin; i < end; ++i) {
      out_ptr[i] = 1.0f / (1.0f + std::exp(-x_ptr[i]));
    }
  });

  return output.reshape(input.sizes());
}
} // namespace parallel_impl

namespace aten_impl {
torch::Tensor mysigmoid_cpu(const torch::Tensor &input) {
  TORCH_CHECK(input.device().is_cpu(), "CPU only");

  auto x = input.to(torch::kFloat32);
  auto output = torch::empty_like(x);

  auto iter =
      at::TensorIteratorConfig().add_output(output).add_const_input(x).build();

  using Vec = at::vec::Vectorized<float>;

  at::native::cpu_kernel_vec(
      iter, [](float a) -> float { return 1.0f / (1.0f + expf(-a)); },
      [](Vec a) -> Vec {
        Vec one(1.0f);
        return (one + a.neg().exp()).reciprocal();
      });

  return output;
}
} // namespace aten_impl

namespace torch_impl {
torch::Tensor mysigmoid_cpu(const torch::Tensor &input) {
  TORCH_CHECK(input.device().is_cpu(), "CPU only");

  auto x = input.to(torch::kFloat32);
  auto output = (1.0f + x.neg().exp()).reciprocal();

  return output;
}
} // namespace torch_impl

using vector_impl::mysigmoid_cpu;
// using parallel_impl::mysigmoid_cpu;
// using aten_impl::mysigmoid_cpu;
// using torch_impl::mysigmoid_cpu;
// TODO: 算子绑定为Pytorch的模块
PYBIND11_MODULE(TORCH_EXTENSION_NAME, m) { // 绑定部分
  m.def("mysigmoid_cpu", &mysigmoid_cpu, "my sigmoid cpu");
}
