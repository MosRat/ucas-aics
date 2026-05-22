# 定义模块名称和对应的测试文件
MODULES = inner_product_4x16 matrix_vector_mult_4x4x16 matrix_mult_4x4x4x16
TEST_FILES = tb_inner_product.cpp tb_matrix_vector.cpp tb_matrix_mult.cpp

# 源文件路径
SRC_DIR = ../src
OBJ_DIR = obj_dir

# Verilator 配置
# 用户环境中的 Verilator 安装在 /opt/Verilator。
# 先把 /opt/Verilator/bin 放到 PATH 里，这样 verilator wrapper 和其内部调用的 verilator_bin 都能找到。
PATH := /opt/Verilator/bin:$(PATH)
VERILATOR = verilator
OBJCACHE :=
export OBJCACHE

# --cc：生成 C++ 仿真模型
# --exe：把后面的 C++ testbench 一起编进可执行程序
# --build：生成后立刻调用 make 编译
# -Wall：打开常见警告
# --trace：允许生成 VCD 波形，供 GTKWave 查看
# --language 1800-2017：按 SystemVerilog 2017 解析，支持本作业用到的数组端口
# -I$(SRC_DIR)：把 ../src 加入 Verilog include/module 搜索路径
VERILATOR_FLAGS = --cc --exe --build -Wall --trace --language 1800-2017 -I$(SRC_DIR)
CXXFLAGS = -std=c++14

# 默认目标：编译所有模块
all: $(MODULES)

# 内积运算器
inner_product_4x16:
	@echo "=== 创建编译目录: $(OBJ_DIR)/$@ ==="
	mkdir -p $(OBJ_DIR)/$@
	@echo "=== 编译内积运算器 ==="
	$(VERILATOR) $(VERILATOR_FLAGS) --Mdir $(OBJ_DIR)/$@ \
		$(SRC_DIR)/$@.v \
		tb_inner_product.cpp \
		--top-module $@ \
		-CFLAGS "$(CXXFLAGS)"

# 矩阵乘向量
matrix_vector_mult_4x4x16:
	@echo "=== 创建编译目录: $(OBJ_DIR)/$@ ==="
	mkdir -p $(OBJ_DIR)/$@
	@echo "=== 编译矩阵乘向量 ==="
	$(VERILATOR) $(VERILATOR_FLAGS) --Mdir $(OBJ_DIR)/$@ \
		$(SRC_DIR)/$@.v \
		$(SRC_DIR)/inner_product_4x16.v \
		tb_matrix_vector.cpp \
		--top-module $@ \
		-CFLAGS "$(CXXFLAGS)"

# 矩阵乘法
matrix_mult_4x4x4x16:
	@echo "=== 创建编译目录: $(OBJ_DIR)/$@ ==="
	mkdir -p $(OBJ_DIR)/$@
	@echo "=== 编译矩阵乘法 ==="
	$(VERILATOR) $(VERILATOR_FLAGS) --Mdir $(OBJ_DIR)/$@ \
		$(SRC_DIR)/$@.v \
		$(SRC_DIR)/matrix_vector_mult_4x4x16.v \
		$(SRC_DIR)/inner_product_4x16.v \
		tb_matrix_mult.cpp \
		--top-module $@ \
		-CFLAGS "$(CXXFLAGS)"

# 清理编译产物
clean:
	@echo "=== 清理编译产物 ==="
	rm -rf $(OBJ_DIR)
	rm -f *.vcd

# 伪目标
.PHONY: all clean $(MODULES)
