`include "defines.v"

module CMP (
    input [31:0] rs,
    input [31:0] rt,
    input [2:0]  op,
    output sig
);
    wire equal = (rs == rt);

    assign sig = (op == `CMP_beq && equal) || (op == `CMP_bne && !equal);

endmodule