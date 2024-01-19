`include "defines.v"

module ALU (
    input [3:0] ALUop,
    input [31:0] A,
    input [31:0] B,
    output [31:0] ALUout,

    // P7新增
    input ALUAriOv,
    input ALUDMOv,
    output AriOv,
    output DMOv
);

    wire [31:0] temp = $signed(A) < $signed(B) ? 32'b1 : 32'b0;

    assign ALUout = (ALUop == `ALU_add ) ? A + B  : (ALUop== `ALU_sub  ) ? A - B   :
                    (ALUop == `ALU_and ) ? A & B  : (ALUop == `ALU_or  ) ? A | B   :
                    (ALUop == `ALU_slt ) ? temp   : (ALUop == `ALU_sltu) ? A < B  : 0;

    wire [32:0] tA = {A[31], A}, tB = {B[31], B};

    wire [32:0] tadd = tA + tB, tsub = tA - tB;
    
    assign AriOv = ALUAriOv && (((ALUop == `ALU_add) && (tadd[32] != tadd[31])) || ((ALUop == `ALU_sub) && (tsub[32] != tsub[31])));
    
    assign DMOv = ALUDMOv && (((ALUop == `ALU_add) && (tadd[32] != tadd[31])) || ((ALUop == `ALU_sub) && (tsub[32] != tsub[31])));

endmodule