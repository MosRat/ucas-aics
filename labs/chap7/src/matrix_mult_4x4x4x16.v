// 4x4 matrix-matrix multiplier.
//
// 计算规则：
//     results = activations * weights
//
// 其中 activations 和 weights 都是 4x4 矩阵。
// 硬件实现思路很朴素：把 activations 的每一行拿出来，送进一个 matrix_vector 模块，
// 就能得到结果矩阵对应的一整行。
module matrix_mult_4x4x4x16 (
    input wire clk,                                  // 全局时钟
    input wire reset,                                // 全局同步复位
    input wire enable,                               // 全局使能信号
    input wire signed [15:0] activations [0:3][0:3], // 左矩阵 A，4 行 4 列
    input wire signed [15:0] weights [0:3][0:3],     // 右矩阵 B，4 行 4 列
    output wire signed [31:0] results [0:3][0:3]     // 输出矩阵 C，4 行 4 列
);

    // 每个 matrix_vector_mult_4x4x16 实例负责计算结果矩阵的一行。
    // activations[i] 代表第 i 行（一个 4 元向量）。
    matrix_vector_mult_4x4x16 mxv0 (
        .clk(clk),
        .reset(reset),
        .enable(enable),
        .activations(activations[0]),
        .weights(weights),
        .results(results[0])
    );

    matrix_vector_mult_4x4x16 mxv1 (
        .clk(clk),
        .reset(reset),
        .enable(enable),
        .activations(activations[1]),
        .weights(weights),
        .results(results[1])
    );

    matrix_vector_mult_4x4x16 mxv2 (
        .clk(clk),
        .reset(reset),
        .enable(enable),
        .activations(activations[2]),
        .weights(weights),
        .results(results[2])
    );

    matrix_vector_mult_4x4x16 mxv3 (
        .clk(clk),
        .reset(reset),
        .enable(enable),
        .activations(activations[3]),
        .weights(weights),
        .results(results[3])
    );

endmodule
