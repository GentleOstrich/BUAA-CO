`include "defines.v"
module M(
	input [31:0] pc_i,
    input clk,
    input reset,

    input [31:0] AO_i,
    input [31:0] RD2_i,
    input [4:0] a2_i,
    input [4:0] a3_i, 
    input RegWE_i,
    input [1:0] Tnew_i,
    input [31:0] pc8_i,
    input MemWE_i,
    input [1:0] wd_sel_i,
	input [1:0] WBHop_i,
	
	output reg [31:0] pc_o,
    output reg [31:0] AO_o, // 转发
    output reg [31:0] RD2_o,
    output reg [4:0] a2_o,
    output reg [4:0] a3_o, // 转发
    output reg RegWE_o, // 转发
    output reg [1:0] Tnew_o, // 转发
    output reg [31:0] pc8_o,
    output reg MemWE_o,
    output reg [1:0] wd_sel_o,
	output reg [1:0] WBHop_o
);

    always @(posedge clk) begin
        if (reset == 1) begin
            AO_o <= 0;
            RD2_o <= 0;
            a3_o <= 0;
            RegWE_o <= 0;
            Tnew_o <= 0;
            pc8_o <= 0;
            MemWE_o <= 0;
            wd_sel_o <= 0;
			pc_o <= 0;
            a2_o <= 0;
			WBHop_o <=0 ;
        end else begin
            AO_o <= AO_i;
            RD2_o <= RD2_i;
            a3_o <= a3_i;
            RegWE_o <= RegWE_i;
            Tnew_o <= Tnew_i - 2'd1;
            pc8_o <= pc8_i;
            MemWE_o <= MemWE_i;
            wd_sel_o <= wd_sel_i;
			pc_o <= pc_i;
            a2_o <= a2_i;
			WBHop_o <= WBHop_i;
		end

    end


endmodule