`include "defines.v"
module EXT(
    input [15:0] imm16,
    input [1:0] extop,
    output reg [31:0] ext32
); 
    always @(*) begin
        case(extop)
            `ZeroExt : ext32 = {{16{1'b0}}, imm16};
            `SignExt : ext32 = {{16{imm16[15]}}, imm16};
            `High16  : ext32 = {imm16, {16{1'b0}}};
            default : ext32 = 0;
        endcase
    end
endmodule