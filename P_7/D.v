`include "defines.v"

module D(
    input clk,
    input reset,

    input EN,
    input [31:0] inst_i,
    input [31:0] pc_i,
    output reg [31:0] inst_o,
    output reg [31:0] pc_o,

    // P5新增
    input stall,

    // P7新增
    input req,
    input [4:0] ExcCodeIn_i,
    output reg [4:0] ExcCodeIn_o,
    input BDIn_i,
    output reg BDIn_o
);

    always @(posedge clk) begin
        if (reset | req) begin
            inst_o <= 0;
            pc_o <= req ? `handlePC : 0;
            ExcCodeIn_o <= 0;
            BDIn_o <= 0;
        end else if(EN) begin
            inst_o <= inst_i;
            pc_o <= pc_i;
            ExcCodeIn_o <= ExcCodeIn_i;
            BDIn_o <= BDIn_i;
        end
    end

endmodule