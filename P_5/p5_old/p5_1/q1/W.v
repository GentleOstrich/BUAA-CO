`include "defines.v"
module W(
	input [31:0] pc_i,
    input clk,
    input reset,
    input [1:0]  Tnew_i,
    input [31:0] mrd_i,
    input [31:0] ao_i,
    input [31:0] pcadd4_i,
    input RegWE_i,
    input [1:0] wd_sel_i,
    input [4:0] a3_i,
	
	output reg [31:0] pc_o,
    output reg [1:0] Tnew_o,
    output reg RegWE_o, //转发
    output reg [31:0] wd_o,
    output reg [4:0] a3_o // 转发
);
    always @(posedge clk) begin
        if (reset == 1) begin
            RegWE_o <= 0;
            wd_o <= 0;
            a3_o <= 0;
			pc_o <= 0;
			Tnew_o <= 0;
        end else begin
            RegWE_o <= RegWE_i;
            a3_o <= a3_i;
			pc_o <= pc_i;
			Tnew_o <= Tnew_i-1;
            case(wd_sel_i) 
                2'b00: wd_o <= mrd_i;
                2'b01: wd_o <= ao_i;
                2'b10: wd_o <= pcadd4_i;
            endcase
        end
    end


endmodule