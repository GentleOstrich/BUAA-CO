`include "defines.v"

module E (
    input clk,
    input reset,
    input EN,

    // P5新增
    input stall,
    
    input [31:0] inst_i,
    input [31:0] pc_i,
    input [31:0] ext32_i,
    input [31:0] rs_i,
    input [31:0] rt_i,
    output reg [31:0] inst_o,
    output reg [31:0] pc_o,
    output reg [31:0] ext32_o,
    output reg [31:0] rs_o,
    output reg [31:0] rt_o,

    // P7新增
    input req,
    input [4:0] ExcCodeIn_i,
    input BDIn_i,
    output reg [4:0] ExcCodeIn_o,
    output reg BDIn_o
);

    always @(posedge clk) begin
        if (reset || stall || req) begin
            inst_o <= 0;
            pc_o <= stall ? pc_i : (req ? `handlePC : 0);
            ext32_o <= 0;
            rs_o <= 0;
            rt_o <= 0;
            ExcCodeIn_o <= 0;
            BDIn_o <= stall ? BDIn_i : 0;
        end else if(EN) begin
            inst_o <= inst_i;
            pc_o <= pc_i;
            ext32_o <= ext32_i;
            rs_o <= rs_i;
            rt_o <= rt_i;
            ExcCodeIn_o <= ExcCodeIn_i;
            BDIn_o <= BDIn_i;
        end
    end

endmodule