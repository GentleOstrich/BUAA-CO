module mips(
    input clk,
    input reset
);

    wire RegDst;
    wire ALUsrc;
    wire MemtoReg;
    wire RegWrite;
    wire JR;
    wire [31:0] NPC;
    wire JAL;
	wire BNEZALC;
    wire [1:0] WBH;
    wire [1:0] ExtOp;
    wire [3:0] ALUOp;
    wire [5:0] Op;
    wire [5:0] Funct;
    wire [25:0] Des;
    wire [15:0] Offset;
    wire Equal;
    wire [31:0] PC;
    wire JALR;
	wire JAS;
	wire LEZ;

    dp dp_inst(
    .Clk(clk),
    .Reset(reset),
    .RegDst(RegDst),
    .ALUsrc(ALUsrc),
    .MemtoReg(MemtoReg),
    .RegWrite(RegWrite | JAL),
    .MemWrite(MemWrite),
    .JR(JR),
	.BNEZALC(BNEZALC),
    .JALR(JALR),
    .WBH(WBH),
    .ExtOp(ExtOp),
    .ALUOp(ALUOp),
    .NPC(NPC),
    .JAL(JAL),
    .Op(Op),
    .Funct(Funct),
    .Des(Des),
    .Offset(Offset),
    .Equal(Equal),
	.Nez(Nez),
    .PC(PC),
	.JAS(JAS),
	.LEZ(LEZ)
    );

    ctrl ctrl_inst(
    .Op(Op),
    .Funct(Funct),
    .RegDst(RegDst),
    .ALUsrc(ALUsrc),
    .MemtoReg(MemtoReg),
    .RegWrite(RegWrite),
    .MemWrite(MemWrite),
    .JR(JR),
    .JALR(JALR),
    .ExtOp(ExtOp),
    .WBH(WBH),
    .ALUOp(ALUOp),
	.JAS(JAS)
    );

    npc npc_inst(
    .Op(Op),
    .Funct(Funct),
    .Des(Des),
    .Offset(Offset),
    .Equal(Equal),
	.Nez(Nez),
    .PC(PC),
    .JAL(JAL),
	.BNEZALC(BNEZALC),
    .NPC(NPC),
	.LEZ(LEZ)
    );

endmodule