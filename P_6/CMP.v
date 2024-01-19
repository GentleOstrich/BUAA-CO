`include "defines.v"
module CMP(
    input [31:0] A,
    input [31:0] B,
    output reg nequal,
    output reg equal
);
    always @(*) begin
        equal = (A == B);
        nequal = (A != B);
    end
endmodule