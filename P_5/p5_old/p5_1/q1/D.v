`include "defines.v"
module D(
	input [31:0] pc_i,
    input clk,
    input reset,
    input Dstall,
    input Dclear,
    input [31:0] instr_i,
    input [31:0] pcadd4_i,
	output reg [31:0] pc_o,
    output reg [31:0] instr_o,
    output reg [31:0] pcadd4_o
);
    always @(posedge clk) begin
        if (reset == 1) begin
            instr_o <= 0;
            pcadd4_o <= 0;
			pc_o <= 0;
        end else begin
            if (Dstall == 1) begin
                instr_o <= instr_o;
                pcadd4_o <= pcadd4_o;
				pc_o <= pc_o;
            end else if (Dclear == 1) begin
                instr_o <= 0;
                pcadd4_o <= 0;
				pc_o <= 0;
            end else begin
                instr_o <= instr_i;
                pcadd4_o <= pcadd4_i;
				pc_o <= pc_i;
            end
        end
    end
endmodule