`include "defines.v"

module EXT (
    input [15:0] imm16,
    input [2:0] EXTop,
    output [31:0] ext32
);

    assign ext32 = (EXTop == `EXT_signed) ? {{16{imm16[15]}}, imm16} :
                   (EXTop == `EXT_lui)    ? {imm16, 16'b0} : {{16{1'b0}}, imm16};

endmodule