# 第三章 深度学习应用实验
## 实验二
- 实验2.1请进入exp_2_1_mnist_mlp目录，请参考目录内readme.txt补全代码并提交。

- 实验2.2请进入exp_2_2_mnist_mlp_dlp目录，请参考目录内readme.txt补全代码并提交。

## 实验三
- 实验3.1请进入exp_3_1_vgg目录，请参考目录内readme.txt补全代码并提交。

- 实验3.2请进入exp_3_2_vgg_dlp目录，请参考目录内readme.txt补全代码并提交。

- 实验3.3请进入exp_3_3_style_transfer目录，请参考目录内readme.txt补全代码并提交。

## 提交打包
- 根目录提供了一个打包脚本，可将 `exp_6_2_1_infercpu/stu_upload` 打包为提交用 zip。
- 压缩包内直接是 `__init__.py`、`layers_1.py`、`layers_2.py`、`vgg_cpu.py` 这几个文件，不会再额外包一层 `stu_upload/` 文件夹。

- 使用方法：

```bash
uv run python main.py
```

- 运行后会在根目录生成 `exp_6_2_1_infercpu_stu_upload.zip`。
