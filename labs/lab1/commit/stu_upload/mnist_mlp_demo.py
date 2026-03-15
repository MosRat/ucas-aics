import pycnnl
import time
import numpy as np
import struct
import os
from pathlib import Path

DATASET_DIR = Path("dataset")
if not DATASET_DIR.exists():
    DATASET_DIR = Path("../mnist_data")
if not DATASET_DIR.exists():
    DATASET_DIR = Path("../../mnist_data")
TRAIN_IMG_PATH = DATASET_DIR / "train-images-idx3-ubyte"
TRAIN_LABEL_PATH = DATASET_DIR / "train-labels-idx1-ubyte"
TEST_IMG_PATH = DATASET_DIR / "t10k-images-idx3-ubyte"
TEST_LABEL_PATH = DATASET_DIR / "t10k-labels-idx1-ubyte"


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


class MNIST_MLP(object):
    def __init__(self):
        # set up net

        self.net = pycnnl.CnnlNet()
        self.input_quant_params = []
        self.filter_quant_params = []

    def build_linear(self, name, batch_size, input_size, output_size):
        input_shapem1 = pycnnl.IntVector(4)
        input_shapem1[0] = batch_size
        input_shapem1[1] = 1
        input_shapem1[2] = 1
        input_shapem1[3] = input_size

        weight_shapem1 = pycnnl.IntVector(4)
        weight_shapem1[0] = 1
        weight_shapem1[1] = 1
        weight_shapem1[2] = input_size
        weight_shapem1[3] = output_size

        output_shapem1 = pycnnl.IntVector(4)
        output_shapem1[0] = batch_size
        output_shapem1[1] = 1
        output_shapem1[2] = 1
        output_shapem1[3] = output_size

        self.net.createMlpLayer(name, input_shapem1, weight_shapem1, output_shapem1)

    def build_softmax(self, name, batch_size, output_classes):
        input_shapem1 = pycnnl.IntVector(3)
        input_shapem1[0] = batch_size
        input_shapem1[1] = 1
        input_shapem1[2] = output_classes
        self.net.createSoftmaxLayer(name, input_shapem1, axis=1)

    def build_conv2d(
        self, name, batch_size, ic, oc, h, w, kernel_size=1, stride=1, dilation=1, pad=0
    ):
        input_shapem1 = pycnnl.IntVector(4)
        input_shapem1[0] = batch_size
        input_shapem1[1] = ic
        input_shapem1[2] = h
        input_shapem1[3] = w

        self.net.createConvLayer(
            name, input_shapem1, oc, kernel_size, stride, dilation, pad
        )

    def build_model(
        self, batch_size=10000, input_size=784, hidden1=256, hidden2=128, out_classes=10
    ):

        self.batch_size = batch_size
        self.out_classes = out_classes

        # creating layers
        w, h = (28, 28)
        assert w * h == input_size

        self.net.setInputShape(batch_size, 1, h, w)  # 设置输入参数

        self.build_conv2d(
            "conv0", batch_size, ic=1, oc=8, h=28, w=28, kernel_size=3, stride=2, pad=1
        )
        self.net.createReLuLayer("reluc0")

        self.build_conv2d(
            "conv1", batch_size, ic=8, oc=16, h=14, w=14, kernel_size=3, stride=2, pad=1
        )
        self.net.createReLuLayer("reluc1")

        # 连接？

        self.build_linear("fc0", batch_size, input_size, hidden1)

        # relu1
        self.net.createReLuLayer("relu0")

        # fc2
        self.build_linear("fc1", batch_size, hidden1, hidden1 * 2)

        # relu1
        self.net.createReLuLayer("relu1")

        # fc2
        self.build_linear("fc2", batch_size, hidden1 * 2, hidden1)

        # relu2
        self.net.createReLuLayer("relu2")

        # fc3
        self.build_linear("fc3", batch_size, hidden1, hidden2)

        self.net.createReLuLayer("relu3")

        self.build_linear("fc4", batch_size, hidden2, hidden2)

        self.net.createReLuLayer("relu4")

        self.build_linear("fc5", batch_size, hidden2, hidden2 // 2)

        self.net.createReLuLayer("relu5")

        self.build_linear("fc6", batch_size, hidden2 // 2, out_classes)

        # softmax
        self.build_softmax("softmax", batch_size, out_classes)

    def load_mnist(self, file_dir, is_images="True"):
        # Read binary data
        bin_file = open(file_dir, "rb")
        bin_data = bin_file.read()
        bin_file.close()
        # Analysis file header
        if is_images:
            # Read images
            fmt_header = ">iiii"
            magic, num_images, num_rows, num_cols = struct.unpack_from(
                fmt_header, bin_data, 0
            )
        else:
            # Read labels
            fmt_header = ">ii"
            magic, num_images = struct.unpack_from(fmt_header, bin_data, 0)
            num_rows, num_cols = 1, 1
        data_size = num_images * num_rows * num_cols
        mat_data = struct.unpack_from(
            ">" + str(data_size) + "B", bin_data, struct.calcsize(fmt_header)
        )
        mat_data = np.reshape(mat_data, [num_images, num_rows * num_cols])
        print(
            "Load images from %s, number: %d, data shape: %s"
            % (file_dir, num_images, str(mat_data.shape))
        )
        return mat_data

    def load_data(self, *args):
        print("Loading MNIST data from files...")
        train_images, train_labels, test_images, test_labels = load_dataset()
        self.train_data = np.append(train_images, train_labels, axis=1)
        self.test_data = np.append(
            (test_images.astype(np.float32) / 255.0 - 0.1307) / 0.3081,
            test_labels,
            axis=1,
        )

    def load_model(self, param_dir):
        print("Loading parameters from file " + param_dir)

        params = np.load(param_dir, allow_pickle=True, encoding="latin1").item()
        for i in [0, 2, 5, 7, 9, 11, 13, 15, 17]:
            weigh1 = params[f"mlp.net.{i}.weight"]
            bias1 = params[f"mlp.net.{i}.bias"]

            if i >= 5:
                i -= 1  # 差了 一层 flatten
                # pass
            else:
                weigh1 = weigh1.transpose(0, 2, 3, 1)
            print(f"Loading layer {i}: {weigh1.shape} {bias1.shape}")

            self.net.loadParams(
                i,
                weigh1.flatten().astype(np.float64),
                bias1.flatten().astype(np.float64),
            )
        # print(weigh1)

        # weigh2 = params['w2'].flatten().astype(np.float64)
        # bias2 = params['b2'].flatten().astype(np.float64)
        # _________________________________________________

        # weigh3 = params['w3'].flatten().astype(np.float64)
        # bias3 = params['b3'].flatten().astype(np.float64)
        # _________________________________________________

    def forward(self):
        return self.net.forward()

    def evaluate(self):
        pred_results = np.zeros([self.test_data.shape[0]])
        for idx in range(self.test_data.shape[0] // self.batch_size):
            # print("batch %d"%idx)
            batch_images = self.test_data[
                idx * self.batch_size : (idx + 1) * self.batch_size, :-1
            ]
            data = batch_images.flatten().tolist()
            self.net.setInputData(data)
            start = time.time()
            self.forward()
            end = time.time()
            print("inferencing time: %f" % (end - start))
            prob = self.net.getOutputData()
            prob = np.array(prob).reshape((self.batch_size, self.out_classes))
            pred_labels = np.argmax(prob, axis=1)
            pred_results[idx * self.batch_size : (idx + 1) * self.batch_size] = (
                pred_labels
            )
        if self.test_data.shape[0] % self.batch_size > 0:
            last_batch = self.test_data.shape[0] // self.batch_size * self.batch_size
            batch_images = self.test_data[-last_batch:, :-1]
            data = batch_images.flatten().tolist()
            self.net.setInputData(data)
            self.forward()
            prob = self.net.getOutputData()
            pred_labels = np.argmax(prob, axis=1)
            pred_results[-last_batch:] = pred_labels
        accuracy = np.mean(pred_results == self.test_data[:, -1])
        print("Accuracy in test set: %f" % accuracy)


HIDDEN1 = 256
HIDDEN2 = 128
OUT = 10


def run_mnist():
    batch_size = 10000
    h1, h2, c = HIDDEN1, HIDDEN2, OUT
    mlp = MNIST_MLP()
    mlp.build_model(batch_size=batch_size, hidden1=h1, hidden2=h2, out_classes=c)
    model_path = str(Path(__file__).parent / "weight.npy")
    test_data = "../../mnist_data/t10k-images-idx3-ubyte"
    test_label = "../../mnist_data/t10k-labels-idx1-ubyte"
    mlp.load_data(test_data, test_label)

    mlp.load_model(model_path)

    for i in range(10):
        mlp.evaluate()


if __name__ == "__main__":
    run_mnist()
