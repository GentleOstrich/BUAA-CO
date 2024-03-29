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
        endcase
    end
endmodule
