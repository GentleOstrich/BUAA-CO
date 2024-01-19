`timescale 1ns / 1ps
`define signExt 2'b00
`define zeroExt 2'b01
`define loadHigh 2'b10
`define extAndSll 2'b11

module ext(
    input [15:0] imm,
    input [1:0] EOp,
    output [31:0] ext
    );
    
    assign ext = (EOp == `signExt) ? {{16{imm[15]}}, imm} :
                    (EOp == `zeroExt) ? {{16{1'b0}}, imm} :
                    (EOp == `loadHigh) ? {imm, {16{1'b0}}} :
                    (EOp == `extAndSll) ? {{{16{imm[15]}}, imm} << 2} : 0; 
endmodule
