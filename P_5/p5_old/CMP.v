`include "defines.v"
module CMP(
    input [31:0] A,
    input [31:0] B,
    output equal,
	output rsletz
);
	// 判断分支的信号
    assign equal = (A == B);
	assign rsletz = (A[31] == 1'b1 && A != 0) ? 1 : 0;
endmodule