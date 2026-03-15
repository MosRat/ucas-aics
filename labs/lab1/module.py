import numpy as np
from collections import OrderedDict


class Parameter:
    def __init__(self, data, requires_grad=True):
        if not isinstance(data, np.ndarray):
            data = np.array(data, dtype=np.float32)
        self.data = data
        self.requires_grad = requires_grad
        self.grad = np.zeros_like(self.data) if requires_grad else None

    @property
    def shape(self):
        return self.data.shape

    def zero_grad(self):
        if self.grad is not None:
            self.grad[...] = 0

    def __repr__(self):
        return f"Parameter(shape={self.data.shape}, requires_grad={self.requires_grad})"


class Module:
    _parameters: OrderedDict[str, Parameter | None]
    _buffers: OrderedDict[str, np.ndarray | None]
    _modules: OrderedDict[str, "Module | None"]
    training: bool
    
    def __init__(self):
        self._parameters = OrderedDict()
        self._buffers = OrderedDict()
        self._modules = OrderedDict()
        self.training = True

    def __setattr__(self, name, value):
        if name in {"_parameters", "_buffers", "_modules", "training"}:
            object.__setattr__(self, name, value)
            return

        params = self.__dict__.get("_parameters")
        mods = self.__dict__.get("_modules")
        bufs = self.__dict__.get("_buffers")

        if isinstance(value, Parameter):
            if params is None:
                raise AttributeError("cannot assign parameter before Module.__init__()")
            params[name] = value
            if mods is not None and name in mods:
                del mods[name]
            if bufs is not None and name in bufs:
                del bufs[name]
        elif isinstance(value, Module):
            if mods is None:
                raise AttributeError("cannot assign module before Module.__init__()")
            mods[name] = value
            if params is not None and name in params:
                del params[name]
            if bufs is not None and name in bufs:
                del bufs[name]
        else:
            if params is not None and name in params:
                del params[name]
            if mods is not None and name in mods:
                del mods[name]
            object.__setattr__(self, name, value)
            return

        object.__setattr__(self, name, value)

    def register_parameter(self, name, param):
        if param is not None and not isinstance(param, Parameter):
            raise TypeError("param must be a Parameter or None")
        self._parameters[name] = param
        object.__setattr__(self, name, param)

    def register_buffer(self, name, tensor):
        if tensor is not None and not isinstance(tensor, np.ndarray):
            tensor = np.array(tensor, dtype=np.float32)
        self._buffers[name] = tensor
        object.__setattr__(self, name, tensor)

    def add_module(self, name, module):
        if module is not None and not isinstance(module, Module):
            raise TypeError("module must be a Module or None")
        self._modules[name] = module
        object.__setattr__(self, name, module)

    def children(self):
        for _, module in self._modules.items():
            if module is not None:
                yield module

    def modules(self):
        yield self
        for module in self.children():
            yield from module.modules()

    def named_parameters(self, prefix=""):
        for name, param in self._parameters.items():
            if param is not None:
                full_name = f"{prefix}.{name}" if prefix else name
                yield full_name, param

        for module_name, module in self._modules.items():
            if module is not None:
                sub_prefix = f"{prefix}.{module_name}" if prefix else module_name
                yield from module.named_parameters(sub_prefix)

    def parameters(self):
        for _, param in self.named_parameters():
            yield param

    def named_buffers(self, prefix=""):
        for name, buf in self._buffers.items():
            if buf is not None:
                full_name = f"{prefix}.{name}" if prefix else name
                yield full_name, buf

        for module_name, module in self._modules.items():
            if module is not None:
                sub_prefix = f"{prefix}.{module_name}" if prefix else module_name
                yield from module.named_buffers(sub_prefix)

    def buffers(self):
        for _, buf in self.named_buffers():
            yield buf

    def state_dict(self, prefix=""):
        state = OrderedDict()

        for name, param in self._parameters.items():
            if param is not None:
                key = f"{prefix}{name}"
                state[key] = param.data.copy()

        for name, buf in self._buffers.items():
            if buf is not None:
                key = f"{prefix}{name}"
                state[key] = buf.copy()

        for module_name, module in self._modules.items():
            if module is not None:
                state.update(module.state_dict(prefix=f"{prefix}{module_name}."))
        return state

    def load_state_dict(self, state_dict, strict=True):
        missing_keys = []
        unexpected_keys = []

        current_keys = set(self.state_dict().keys())
        load_keys = set(state_dict.keys())

        if strict:
            missing_keys = sorted(list(current_keys - load_keys))
            unexpected_keys = sorted(list(load_keys - current_keys))

        for name, param in self.named_parameters():
            if name in state_dict:
                value = state_dict[name]
                if param.data.shape != value.shape:
                    raise ValueError(
                        f"Shape mismatch for {name}: expected {param.data.shape}, got {value.shape}"
                    )
                param.data[...] = value

        for name, buf in self.named_buffers():
            if name in state_dict:
                value = state_dict[name]
                if buf.shape != value.shape:
                    raise ValueError(
                        f"Shape mismatch for {name}: expected {buf.shape}, got {value.shape}"
                    )
                buf[...] = value

        if strict and (missing_keys or unexpected_keys):
            raise KeyError(
                f"Missing keys: {missing_keys}, Unexpected keys: {unexpected_keys}"
            )

        return {"missing_keys": missing_keys, "unexpected_keys": unexpected_keys}

    def train(self, mode=True):
        self.training = mode
        for module in self.children():
            module.train(mode)
        return self

    def eval(self):
        return self.train(False)

    def zero_grad(self):
        for p in self.parameters():
            p.zero_grad()

    def forward(self, *args, **kwargs):
        raise NotImplementedError("Subclasses must implement forward()")

    def __call__(self, *args, **kwargs):
        return self.forward(*args, **kwargs)

    def __repr__(self):
        child_lines = []
        for name, module in self._modules.items():
            mod_str = repr(module).replace("\n", "\n  ")
            child_lines.append(f"({name}): {mod_str}")

        if child_lines:
            joined = "\n  ".join(child_lines)
            return f"{self.__class__.__name__}(\n  {joined}\n)"
        return f"{self.__class__.__name__}()"


class Sequential(Module):
    def __init__(self, *args):
        super().__init__()
        for idx, module in enumerate(args):
            if not isinstance(module, Module):
                raise TypeError(
                    f"Sequential only accepts Module instances, got {type(module)}"
                )
            self.add_module(str(idx), module)

    def forward(self, x: np.ndarray) -> np.ndarray:
        for module in self.children():
            x = module.forward(x)
        return x

    def backward(self, top: np.ndarray) -> np.ndarray:
        for module in reversed(list(self.children())):
            top = module.backward(top)
        return top