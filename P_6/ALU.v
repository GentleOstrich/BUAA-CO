`include "defines.v"

module ALU(
    input [3:0] ALUop,
    input [31:0] A,
    input [31:0] B,
    output reg [31:0] AO
);
    always @(*) begin
        case(ALUop) 
			`ADDop: AO = A + B;
            `SUBop: AO = A - B;
            `ORop: AO = A | B; 
            `ANDop: AO = A & B;
            `SLTop: AO = ($signed(A) < $signed(B)) ? $signed(1) : $signed(0);
            `SLTUop: AO = ({1'b0, A} < {1'b0,B}) ? 32'd1 : 32'd0;
            default: AO = 0;
        endcase
    end
endmodule
