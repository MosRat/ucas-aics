import struct
import numpy as np
from pathlib import Path

DATASET_DIR = Path("dataset")
if not DATASET_DIR.exists():
    DATASET_DIR = Path("../mnist_data")
TRAIN_IMG_PATH = DATASET_DIR / "train-images.idx3-ubyte"
TRAIN_LABEL_PATH = DATASET_DIR / "train-labels.idx1-ubyte"
TEST_IMG_PATH = DATASET_DIR / "t10k-images.idx3-ubyte"
TEST_LABEL_PATH = DATASET_DIR / "t10k-labels.idx1-ubyte"


def _load_single(file_dir: Path, is_images=True) -> np.ndarray:
    bin_file = open(file_dir, "rb")
    bin_data = bin_file.read()
    bin_file.close()
    if is_images:  # 读取图像数据
        fmt_header = ">iiii"
        offset = struct.calcsize(fmt_header)
        _, num_images, num_rows, num_cols = struct.unpack_from(fmt_header, bin_data, 0)
    else:  # 读取标记数据
        fmt_header = ">ii"
        offset = struct.calcsize(fmt_header)
        _, num_images = struct.unpack_from(fmt_header, bin_data, 0)
        num_rows, num_cols = 1, 1
    mat_data = np.frombuffer(bin_data, dtype=np.uint8, offset=offset)
    mat_data = mat_data.reshape(num_images, num_rows * num_cols)
    return mat_data


def load_dataset() -> tuple[np.ndarray, np.ndarray, np.ndarray, np.ndarray]:
    return (
        _load_single(TRAIN_IMG_PATH),
        _load_single(TRAIN_LABEL_PATH, is_images=False),
        _load_single(TEST_IMG_PATH),
        _load_single(TEST_LABEL_PATH, is_images=False),
    )


class DataLoader:
    def __init__(
        self,
        x: np.ndarray,
        y: np.ndarray,
        batch_size: int = 64,
        shuffle: bool = True,
        is_train: bool = False,
    ):
        self.x = x
        self.y = y
        self.batch_size = batch_size
        self.shuffle = shuffle
        self.is_train = is_train  # 新增：极其重要，测试集绝对不能做数据增强
        self.num_samples = x.shape[0]
        self.indices = np.arange(self.num_samples)

        # MNIST 官方数据集的全局均值和标准差
        self.mean = 0.1307
        self.std = 0.3081

    def __iter__(self):
        if self.shuffle:
            np.random.shuffle(self.indices)
        self.current_idx = 0
        return self

    def _numpy_augmentation(self, batch_x):
        """轻量级纯 NumPy 数据增强：随机平移和加噪"""
        batch_size = batch_x.shape[0]
        aug_x = np.zeros_like(batch_x)

        for i in range(batch_size):
            img = batch_x[i]

            # 1. 随机平移 (Shift): 模拟手写位置偏差 (-2 到 2 个像素)
            shift_x, shift_y = np.random.randint(-2, 3, size=2)
            # 使用 np.roll 进行快速像素平移
            img = np.roll(img, shift_y, axis=0)
            img = np.roll(img, shift_x, axis=1)

            # 2. 随机高斯噪声 (Gaussian Noise): 增强模型对笔画边缘的鲁棒性
            if np.random.rand() > 0.5:
                noise = np.random.normal(0, 0.05, img.shape)
                img = np.clip(img + noise, 0.0, 1.0)

            aug_x[i] = img

        return aug_x

    def __next__(self):
        if self.current_idx >= self.num_samples:
            raise StopIteration

        batch_indices = self.indices[
            self.current_idx : self.current_idx + self.batch_size
        ]

        # 1. 取出数据并归一化到 [0, 1]
        batch_x = self.x[batch_indices].astype(np.float32) / 255.0

        # 确保数据具备二维空间结构 (batch_size, 28, 28) 以便进行图像变换
        if batch_x.ndim == 2:
            batch_x = batch_x.reshape(-1, 28, 28)

        # 2. 数据增强阶段（仅在训练时开启）
        if self.is_train:
            batch_x = self._numpy_augmentation(batch_x)

        # 3. Z-score 标准化 (Standardization)
        # 消除亮度偏移，让激活函数 (ReLU) 和梯度下降工作在最佳区间
        batch_x = (batch_x - self.mean) / self.std

        # 4. 展平 (Flatten)：将 (batch_size, 28, 28) 压扁为 (batch_size, 784)
        # 这是因为 Linear 层只能接受一维的特征向量
        batch_x = batch_x.reshape(batch_x.shape[0], -1)

        batch_y = self.y[batch_indices].astype(np.int64)

        self.current_idx += self.batch_size

        return batch_x, batch_y.flatten()