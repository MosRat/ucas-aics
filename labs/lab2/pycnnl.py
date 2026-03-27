# ty: ignore
from typing import Any, List, Optional, Union

# Constants
OPT_LEN: int
CAST: int
CONVOLUTION: int
LRN: int
MLP: int
NORMALIZE: int
RELU: int
SOFTMAX: int
POOL: int
FLATTEN: int


# Iterator class
class SwigPyIterator:
    def value(self) -> Any: ...
    def incr(self, n: int = 1) -> Any: ...
    def decr(self, n: int = 1) -> Any: ...
    def distance(self, x: "SwigPyIterator") -> int: ...
    def equal(self, x: "SwigPyIterator") -> bool: ...
    def copy(self) -> "SwigPyIterator": ...
    def next(self) -> Any: ...
    def __next__(self) -> Any: ...
    def previous(self) -> Any: ...
    def advance(self, n: int) -> Any: ...
    def __eq__(self, x: object) -> bool: ...
    def __ne__(self, x: object) -> bool: ...
    def __iadd__(self, n: int) -> "SwigPyIterator": ...
    def __isub__(self, n: int) -> "SwigPyIterator": ...
    def __add__(self, n: int) -> "SwigPyIterator": ...
    def __sub__(self, x: Any) -> Any: ...


# Vector classes (generic patterns)
class FloatVector:
    def __init__(self, *args: Any) -> None: ...
    def push_back(self, x: float) -> None: ...
    def size(self) -> int: ...
    def __getitem__(self, i: int) -> float: ...
    def __setitem__(self, i: int, x: float) -> None: ...
    def clear(self) -> None: ...
    def empty(self) -> bool: ...

    # ... 其他容器方法类似


class IntVector: ...


class DoubleVector: ...


class FloatVector2: ...


class IntVector2: ...


class DoubleVector2: ...


# Data Structures
class Layer:
    layer: Any
    name: str
    type: int
    isParamLoaded: bool

    def __init__(
        self, layer: Any, name: str, type: int, is_param_loaded: bool
    ) -> None: ...


class CnnlNet:
    def __init__(self) -> None: ...
    def setInputShape(self, *args: Any) -> None: ...
    def setOutputShape(self, *args: Any) -> None: ...
    def createConvLayer(
        self,
        layer_name: str,
        input_shape: Any,
        out_channel: int,
        kernel_size: int,
        stride: int,
        dilation: int,
        pad: int,
    ) -> None: ...
    def createMlpLayer(
        self, layer_name: str, input_shape: Any, weight_shape: Any, output_shape: Any
    ) -> None: ...
    def createReLuLayer(self, layer_name: str) -> None: ...
    def createSoftmaxLayer(
        self, layer_name: str, input_shape: Any, axis: int
    ) -> None: ...
    def createPoolingLayer(
        self, layer_name: str, input_shape: Any, kernel_size: int, stride: int
    ) -> None: ...
    def setInputData(self, data: Any) -> None: ...
    def forward(self) -> None: ...
    def getOutputData(self) -> Any: ...
    def loadParams(self, layer_id: int, filter_data: Any, bias_data: Any) -> None: ...
    def size(self) -> int: ...
    def getLayerName(self, layer_id: int) -> str: ...
    def needToBeQuantized(self, layer_id: int) -> bool: ...


class QuantParam:
    position: int
    scale: float

    def __init__(self, *args: Any) -> None: ...


class QuantTool:
    def getQuantParam(self, input_data: Any, layer_name: str) -> QuantParam: ...


class Kernel:
    kh: int
    kw: int
    sh: int
    sw: int
    dh: int
    dw: int


class Shape2D:
    n: int
    c: int
    h: int
    w: int

    def size(self) -> int: ...


class Pad:
    pt: int
    pb: int
    pl: int
    pr: int


class DataType:
    input_dtype: int
    weight_dtype: int
    output_dtype: int
    layout: int


class ShapeParam:
    input: Any
    weight: Any
    output: Any
    bias: Any
    kernel: Any
    pad: Any
    datainfo: Any
    has_bias: bool
    group_count: int


class DataAddress:
    cpu_data: Any
    fp_data: Any
    host: Any
    device: Any
    mlu_size: int
    fp_size: int


class HostTimer:
    t0: float
    t1: float
    tv_nsec: int
    tv_sec: int
    tv_usec: int

    def start(self) -> None: ...
    def stop(self) -> None: ...


# Functions
def initDevice(dev: int, queue: Any, handle: Any) -> None: ...
def dataSize(dtype: int) -> int: ...
def convertCnnlDtypeToCnrt(dtype: int) -> int: ...
def getPosition(input: Any, num: int, datatype: int, position: Any) -> None: ...
def getPositionAndScale(
    input: Any, size: int, dtype: int, pos: Any, scale: Any
) -> None: ...
def castData(
    src_data: Any,
    src_dtype: int,
    dst_data: Any,
    dst_dtype: int,
    dequantify_data: Any,
    quant_mode: int,
    size: int,
    pos: float,
    scale: float,
    offset: float,
) -> None: ...
def parserParam(argc: int, argv: List[str], param: Any) -> Any: ...
def setTensorDesc(desc: Any, shape: Any, dtype: int, layout: int) -> None: ...
def mallocDataRandf(size: int, low: float, hight: float) -> Any: ...
def saveDataToFile(file: str, data: Any, count: int) -> None: ...
def saveHexDataToFile(file: str, data: Any, dtype: int, count: int) -> None: ...
def computeDiff1(cpu_result: Any, mlu_result: Any, count: int) -> float: ...
def computeDiff2(cpu_result: Any, mlu_result: Any, count: int) -> float: ...
