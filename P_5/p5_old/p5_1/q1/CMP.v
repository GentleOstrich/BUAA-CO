`include "defines.v"
module CMP(
    input [31:0] A,
    input [31:0] B,
    output equal,
	output rslz
);
    assign equal = (A == B);
	assign rslz = (A[31] == 1'b1) ? 1'b1 : 1'b0;
endmodule