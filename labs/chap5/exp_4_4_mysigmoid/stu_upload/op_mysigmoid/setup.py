from setuptools import setup
from torch.utils import cpp_extension
import os


lib_name = "my_sigmoid"
source_files = ["mysigmoid.cpp"]
cpu_count = os.cpu_count()
nproc = cpu_count if cpu_count is not None else 1
os.environ["MAX_JOBS"] = str(min(len(source_files), nproc))


setup(
    # TODO: 给出编译后的链接库名称
    name=lib_name,
    version="0.1.0",
    ext_modules=[
        cpp_extension.CppExtension(
            # TODO：以正确的格式给出编译文件即编译函数
            lib_name,
            source_files,
            extra_compile_args={
                "cxx": ["-O3", "-std=c++17"],
            },
        )
    ],
    # 执行编译命令设置
    cmdclass={"build_ext": cpp_extension.BuildExtension.with_options(use_ninja=True)},
)

print("generate .so PASS!\n")
