`timescale 1ns / 1ps
`define add 3'b000
`define sub 3'b001
`define and 3'b010
`define or  3'b011
`define lr  3'b100
`define sr  3'b101
module alu(
    input [31:0] A,
    input [31:0] B,
    input [2:0] ALUOp,
    output reg [31:0] C
    );
    
    always @(*) begin : proc_
        case (ALUOp)
            `add : begin
                C <= A + B;
            end
            `sub : begin
                C <= A - B;
            end
            `and : begin
                C <= A & B;
            end
            `or : begin
                C <= A | B;
            end
            `lr : begin
                C <= A >> B;
            end
            `sr : begin
                C <= $signed(A) >>> B;
            end
            default : /* default */;
        endcase
    end
    

endmodule
