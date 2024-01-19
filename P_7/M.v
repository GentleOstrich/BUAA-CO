`include "defines.v"

module M (
    input clk,
    input reset,
    input WE,

    input [31:0] inst_i,
    input [31:0] pc_i,
    input [31:0] ALU_i,
    input [31:0] rt_i,
    input [31:0] MDU_i,
    input [31:0] ext32_i,
    output reg [31:0] inst_o,
    output reg [31:0] pc_o,
    output reg [31:0] ALU_o,
    output reg [31:0] rt_o,
    output reg [31:0] MDU_o,
    output reg [31:0] ext32_o,

    // P7新增
    input req,
    input [4:0] ExcCodeIn_i,
    input BDIn_i,
    input DMOv_i,
    output reg [4:0] ExcCodeIn_o,
    output reg BDIn_o,
    output reg DMOv_o
);

    always @(posedge clk) begin
        if (reset || req) begin
            inst_o <= 0;
            pc_o <= req ? `handlePC : 0;
            ALU_o <= 0;
            rt_o <= 0;
            MDU_o <= 0;
            ext32_o <= 0;
            ExcCodeIn_o <= 0;
            BDIn_o <= 0;
            DMOv_o <= 0;
        end else if(WE) begin
            inst_o <= inst_i;
            pc_o <= pc_i;
            ALU_o <= ALU_i;
            rt_o <= rt_i;
            MDU_o <= MDU_i;
            ext32_o <= ext32_i;
            ExcCodeIn_o <= ExcCodeIn_i;
            BDIn_o <= BDIn_i;
            DMOv_o <= DMOv_i;
        end
    end

endmodule