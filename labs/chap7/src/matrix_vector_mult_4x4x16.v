// 4x4 matrix-vector multiplier.
//
// 本模块计算一个 1x4 行向量 activations 乘以一个 4x4 矩阵 weights：
//
//     results[j] = activations[0] * weights[0][j]
//                + activations[1] * weights[1][j]
//                + activations[2] * weights[2][j]
//                + activations[3] * weights[3][j]
//
// 也就是说，每个输出 results[j] 都是 activations 和 weights 的第 j 列做内积。
module matrix_vector_mult_4x4x16 (
    input wire clk,                                  // 所有子模块共用同一个时钟
    input wire reset,                                // 所有子模块共用同步复位
    input wire enable,                               // 所有子模块共用计算使能
    input wire signed [15:0] activations [0:3],      // 1x4 输入行向量
    input wire signed [15:0] weights [0:3][0:3],     // 4x4 权重矩阵，weights[row][column]
    output wire signed [31:0] results [0:3]          // 1x4 输出行向量
);

    // inner_product_4x16 的 weights 端口需要一个 4 元向量。
    // 但矩阵按 weights[row][column] 存储，所以第 j 个输出要取第 j 列：
    //     weights[0][j], weights[1][j], weights[2][j], weights[3][j]
    //
    // 下面 4 个 weight_col* 是“列向量连线”。
    // assign 是连续赋值，表示这些 wire 始终等于右侧表达式，不需要时钟。
    wire signed [15:0] weight_col0 [0:3];
    wire signed [15:0] weight_col1 [0:3];
    wire signed [15:0] weight_col2 [0:3];
    wire signed [15:0] weight_col3 [0:3];

    assign weight_col0[0] = weights[0][0];
    assign weight_col0[1] = weights[1][0];
    assign weight_col0[2] = weights[2][0];
    assign weight_col0[3] = weights[3][0];

    assign weight_col1[0] = weights[0][1];
    assign weight_col1[1] = weights[1][1];
    assign weight_col1[2] = weights[2][1];
    assign weight_col1[3] = weights[3][1];

    assign weight_col2[0] = weights[0][2];
    assign weight_col2[1] = weights[1][2];
    assign weight_col2[2] = weights[2][2];
    assign weight_col2[3] = weights[3][2];

    assign weight_col3[0] = weights[0][3];
    assign weight_col3[1] = weights[1][3];
    assign weight_col3[2] = weights[2][3];
    assign weight_col3[3] = weights[3][3];

    // 模块实例化语法：
    //     module_name instance_name ( .port_name(signal_name), ... );
    //
    // .clk(clk) 的意思是：把当前模块里的 clk 信号连接到子模块的 clk 端口。
    // 这里实例化 4 个内积单元，分别计算输出向量的 4 个元素。
    inner_product_4x16 ipu0 (
        .clk(clk),
        .reset(reset),
        .enable(enable),
        .activations(activations), // 所有输出都使用同一个输入向量
        .weights(weight_col0),     // 第 0 列权重
        .result(results[0])        // results[0] = activations dot weights column 0
    );

    inner_product_4x16 ipu1 (
        .clk(clk),
        .reset(reset),
        .enable(enable),
        .activations(activations),
        .weights(weight_col1),
        .result(results[1])
    );

    inner_product_4x16 ipu2 (
        .clk(clk),
        .reset(reset),
        .enable(enable),
        .activations(activations),
        .weights(weight_col2),
        .result(results[2])
    );

    inner_product_4x16 ipu3 (
        .clk(clk),
        .reset(reset),
        .enable(enable),
        .activations(activations),
        .weights(weight_col3),
        .result(results[3])
    );

endmodule
