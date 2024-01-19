`include "defines.v"

module W (
    input clk,
    input reset,
    input EN,

    input [31:0] inst_i,
    input [31:0] pc_i,
    input [31:0] ALU_i,

    input [31:0] DM_i,

    input [31:0] MDU_i,
    input [31:0] ext32_i,
    output reg [31:0] inst_o,
    output reg [31:0] pc_o,
    output reg [31:0] ALU_o,
    output reg [31:0] DM_o,
    output reg [31:0] MDU_o,
    output reg [31:0] ext32_o,

    // P7新增
    input req,
    input [31:0] CP0_i,
    output reg [31:0] CP0_o
);

    always @(posedge clk) begin
        if (reset || req) begin
            inst_o <= 0;
            pc_o <= req ? `handlePC : 0;
            ALU_o <= 0;
            DM_o <= 0;
            MDU_o <= 0;
            ext32_o <= 0;
            CP0_o <= 0;
        end else if(EN) begin
            inst_o <= inst_i;
            pc_o <= pc_i;
            ALU_o <= ALU_i;
            DM_o <= DM_i;
            MDU_o <= MDU_i;
            ext32_o <= ext32_i;
            CP0_o <= CP0_i;
        end
    end

endmodule