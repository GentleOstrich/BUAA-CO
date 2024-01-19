module dp(
    input         Clk,
    input         Reset,
    input         RegDst,
    input         ALUsrc,
    input         MemtoReg,
    input         RegWrite,
    input         MemWrite,
    input         JR,
    input         JALR,
    input  [1:0]  WBH,
    input  [1:0]  ExtOp,
    input  [3:0]  ALUOp,
    input  [31:0] NPC, 
    input         JAL,
	input         BSOAL,
	input         JAS,
    output [5:0]  Op,
    output [5:0]  Funct,
    output [25:0] Des,
    output [15:0] Offset,
    output        Equal,
	output        OddOne,
    output [31:0] PC
);

    //split
    wire [31:0]  instr;
    wire [31:26] instr31_26;
    wire [25:21] instr25_21;
    wire [20:16] instr20_16;
    wire [15:11] instr15_11;
    wire [10:6]  instr10_6;
    wire [5:0]   instr5_0;
    wire [15:0]  instr15_0;
    wire [25:0]  instr25_0;
    wire [4:0]  mux1; 
    wire [31:0] mux2; 
    wire [31:0] mux3; 
	wire [31:0] mux4; 
    //grf
	wire jas;
    wire [31:0] rd1;
    wire [31:0] rd2;
    //alu
    wire [31:0] c;
    wire equal;
	wire oddone;
    //dm
    wire [31:0] dout;
	wire [31:0] din;
	assign din = (JAS == 1'b1) ? pc + 32'd4 : rd2;
    //ext
    wire [31:0] ext32;
    //ifu
    wire [31:0] pc;
    
    //选择写回哪个寄存器
    assign mux1 = (BSOAL == 1'b1)                 ?      5'd31 :
				  (JAL == 1'b1)                   ?      5'd31 : 
                  (JAL == 1'b0 && RegDst == 1'b1) ? instr15_11 : 
                  (JAL == 1'b0 && RegDst == 1'b0) ? instr20_16 : -1;
    //选择第二个运算数
    assign mux2 = (ALUsrc == 1'b1) ? ext32 : rd2;
    //选择写回的数据，link时在此处添加
    assign mux3 = (MemtoReg == 1'b1)                                   ? dout : 
                  (MemtoReg == 1'b0 && JAL == 1'b1)                    ? pc + 32'd4 :
				  (MemtoReg == 1'b0 && BSOAL == 1'b1)                  ? pc + 32'd4 :
                  (MemtoReg == 1'b0 && JAL == 1'b0 && JALR == 1'b1)    ? pc + 32'd4 :
                  (MemtoReg == 1'b0 && JAL == 1'b0 && JALR == 1'b0)    ? c : -1;
    //选择下一个pc
    assign mux4 = (JR == 1'b1)   ? c : 
                  (JALR == 1'b1) ? c : NPC;


    assign Op    = instr31_26;
    assign Funct = instr5_0;
    assign Equal = equal;
	assign OddOne = oddone;
    assign Des = instr25_0;
    assign Offset = instr15_0;
    assign PC = pc;
	assign jas = JAS;

    alu ALU(
    .A(rd1),
    .B(mux2),
    .Shamt(instr10_6),
    .ALUOp(ALUOp),
    .Equal(equal),
	.OddOne(oddone),
    .C(c)
    );

    split SPLIT(
    .Instr(instr),
    .Instr31_26(instr31_26),
    .Instr25_21(instr25_21),
    .Instr20_16(instr20_16),
    .Instr15_11(instr15_11),
    .Instr10_6(instr10_6),
    .Instr5_0(instr5_0),
    .Instr15_0(instr15_0),
    .Instr25_0(instr25_0)
    );

    ext EXT(
    .ExtOp(ExtOp),
    .Imm16(instr15_0),
    .Ext32(ext32)
    );

    dm DM(
    .PC(pc),
    .Clk(Clk),
    .Reset(Reset),
    .MemWrite(MemWrite),
    .WBH(WBH),
    .A(c),
    .Din(din),
    .Dout(dout)
    );

    grf GRF(
    .PC(pc),
    .A1(instr25_21),
    .A2(instr20_16),
    .A3(mux1),
    .WD(mux3),
    .WE(RegWrite),
    .Clk(Clk),
    .Reset(Reset),
    .RD1(rd1),
    .RD2(rd2),
	.JAS(jas)
    );

    ifu IFU(
    .Reset(Reset),
    .Clk(Clk),
    .NPC(mux4),
    .PC(pc),
    .Instr(instr)
    );
	
endmodule