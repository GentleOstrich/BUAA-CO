module alu(
    input  [31:0] A,
    input  [31:0] B,
    input  [4:0]  Shamt,
    input  [3:0]  ALUOp,
    output        Equal,
    output [31:0] C
    );


    parameter ADDop = 4'b0000;
    parameter SUBop = 4'b0001;
    parameter ORop  = 4'b0010;
    parameter SLLop = 4'b0011;


    assign Equal = (A == B);
    assign C = (ALUOp == ADDop) ? A + B :
               (ALUOp == SUBop) ? A - B :
               (ALUOp == ORop)  ? A | B :
               (ALUOp == SLLop) ? B << Shamt : -1;
endmodule