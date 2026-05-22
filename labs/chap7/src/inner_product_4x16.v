// 4x16-bit inner product unit.
//
// Verilog/SystemVerilog 语法速记：
// - module ... endmodule：定义一个硬件模块，相当于一个可复用的电路块。
// - input/output：模块端口方向。input 是外部输入，output 是模块输出。
// - wire：连线类型，通常由组合逻辑或其他模块驱动。
// - reg：寄存器类型，可在 always 时序块里保存值；这里的 result 会被触发器保存。
// - signed [15:0]：16 位有符号数，[15] 是符号位，[0] 是最低位。
// - activations [0:3]：unpacked array，表示 4 个 16 位元素。
module inner_product_4x16 (
    input wire clk,                             // 时钟信号；posedge clk 表示上升沿触发
    input wire reset,                           // 同步复位；为 1 时在下一个时钟上升沿清零
    input wire enable,                          // 计算使能；为 1 时锁存输入并更新结果
    input wire signed [15:0] activations [0:3], // 4 个输入激活值，每个 16 位有符号
    input wire signed [15:0] weights [0:3],     // 4 个权重值，每个 16 位有符号
    output reg signed [31:0] result             // 内积结果；16x16 乘法再求和，用 32 位保存
);
    // 输入寄存器。
    // 这里先把外部输入保存到寄存器中，再用寄存器值参与组合乘加。
    // 这样做的硬件含义是：输入在时钟边沿被采样，后续组合逻辑看到的是稳定值。
    reg signed [15:0] activations_reg [0:3];
    reg signed [15:0] weights_reg [0:3];
    
    // 组合逻辑部分。
    // wire 不能在 always 时序块中赋值；这里用连续赋值 assign 的简写形式：
    //     wire name = expression;
    // dot_product 会随 activations_reg/weights_reg 的变化自动重新计算。
    wire signed [31:0] dot_product = 
        (activations_reg[0] * weights_reg[0]) +
        (activations_reg[1] * weights_reg[1]) +
        (activations_reg[2] * weights_reg[2]) +
        (activations_reg[3] * weights_reg[3]);
    
    // 寄存器更新逻辑。
    // always @(posedge clk)：描述时序逻辑，综合后通常是触发器。
    // <= 是非阻塞赋值，时序逻辑里常用它，含义是所有左值在同一个时钟边沿一起更新。
    integer i;
    always @(posedge clk) begin
        if (reset) begin
            // for 循环在硬件描述中表示“生成重复赋值逻辑”，不是运行时的软件循环。
            // 这里把 4 个寄存器元素全部清零。
            for (i = 0; i < 4; i = i + 1) begin
                activations_reg[i] <= 16'd0;
                weights_reg[i] <= 16'd0;
            end
            result <= 32'd0;
        end else if (enable) begin
            // enable 有效时采样新的输入。
            for (i = 0; i < 4; i = i + 1) begin
                activations_reg[i] <= activations[i];
                weights_reg[i] <= weights[i];
            end
            // 注意：因为上面是非阻塞赋值，result 本拍拿到的是“旧寄存器值”的 dot_product。
            // 测试平台保持 enable 多个时钟周期，所以第二个有效时钟边沿会得到新输入的内积结果。
            result <= dot_product;
        end
    end
endmodule
