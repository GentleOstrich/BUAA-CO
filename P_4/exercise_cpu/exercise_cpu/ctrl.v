module ctrl(
    input  [5:0] Op,
    input  [5:0] Funct,
    output       RegDst,
    output       ALUsrc,
    output       MemtoReg,
    output       RegWrite,
    output       MemWrite,
    output       JR,
    output       JALR,
	output       JAS,
    output [1:0] ExtOp,
    output [1:0] WBH,
    output [3:0] ALUOp
);

    parameter Rsig    = 6'b00_0000;
    parameter ADDsig  = 6'b10_0000;
    parameter SUBsig  = 6'b10_0010;
    parameter ORIsig  = 6'b00_1101;
    parameter LWsig   = 6'b10_0011;
    parameter SWsig   = 6'b10_1011;
    parameter BEQsig  = 6'b00_0100;
    parameter LUIsig  = 6'b00_1111;
    parameter JRsig   = 6'b00_1000;
    parameter SLLsig  = 6'b00_0000;
    parameter LBsig   = 6'b10_0000;
    parameter LHsig   = 6'b10_0001;
    parameter SBsig   = 6'b10_1000;
    parameter SHsig   = 6'b10_1001;
    parameter JALRsig = 6'b00_1001;
	parameter ADDUsig = 6'b10_0001;
	parameter SUBUsig = 6'b10_0011;
	parameter ADDIsig = 6'b00_1000;
	parameter RLBsig  = 6'b11_1111;
	parameter LWRRsig = 6'b00_0111;
	parameter GRAYsig = 6'b11_0001;
	parameter SSZEsig = 6'b00_1111;
	parameter JASsig  = 6'b11_0110;
	parameter MEMSETsig = 6'b110100;
	parameter SRLVsig = 6'b00_0110;
	parameter SLTsig =  6'b10_1010;
	parameter SLTIsig = 6'b00_1010;
	
	
    wire r;
    wire add;
    wire sub;
    wire ori;
    wire lw;
    wire sw;
    wire lui;
    wire jr;
    wire sll;
    wire lb;
    wire lh;
    wire sb;
    wire sh;
    wire jalr;
	wire addu;
	wire subu;
	wire addi;
	wire rlb;
	wire lwrr;
	wire gray;
	wire ssze;
	wire jas;
	wire memset;
	wire srlv;
	wire slt;
	wire slti;
	
	
    assign r    = (Op == Rsig);
    assign add  = (Op == Rsig && Funct == ADDsig);
    assign sub  = (Op == Rsig && Funct == SUBsig);
    assign ori  = (Op == ORIsig);
    assign lw   = (Op == LWsig);
    assign sw   = (Op == SWsig);
    assign lui  = (Op == LUIsig);
    assign jr   = (Op == Rsig && Funct == JRsig);
    assign sll  = (Op == Rsig && Funct == SLLsig);
    assign lb   = (Op == LBsig);
    assign lh   = (Op == LHsig);
    assign sb   = (Op == SBsig);
    assign sh   = (Op == SHsig);
    assign jalr = (Op == Rsig && Funct == JALRsig);
	assign addu = (Op == Rsig && Funct == ADDUsig);
	assign subu = (Op == Rsig && Funct == SUBUsig);
	assign addi = (Op == ADDIsig);
	assign rlb =  (Op == RLBsig);
	assign lwrr = (Op == LWRRsig);
	assign gray = (Op == Rsig && Funct == GRAYsig);
	assign ssze = (Op == Rsig && Funct == SSZEsig);
	assign jas  = (Op == JASsig);
	assign memset = (Op == MEMSETsig);
	assign srlv = (Op == Rsig && Funct == SRLVsig);
	assign slt = (Op == Rsig && Funct == SLTsig);
	assign slti = (Op == SLTIsig);

    assign RegDst   = (r); // high means writing in rd, low means writing in rt 
    assign ALUsrc   = (slti | ori | lw | sw | lui | lb | lh | sb | sh | addi | rlb | lwrr | memset); // high means ALU's B is immediate, low means ALU's B is rt's data
    assign MemtoReg = (lw | lb | lh | lwrr); // high means write memory's Dout in register
    assign RegWrite = (slti | slt | add | sub | ori | lw | lui | sll | lb | lh | jalr | addu | subu | addi | rlb | lwrr | gray | ssze | srlv); 
    assign MemWrite = (sw | sb | sh | jas | memset);
    assign JR  = (jr);
    assign JALR = (jalr);
	assign JAS = (jas);
    assign ExtOp[1] = (lui);
    assign ExtOp[0] = (slti | lw | sw | lb | lh | sb | sh | addi | rlb | lwrr | memset);
    assign WBH[1]   = (lh | sh | lwrr | memset);
    assign WBH[0]   = (lb | sb | lwrr | memset);
    assign ALUOp[3] = (slti | slt);
    assign ALUOp[2] = (rlb | gray | ssze | srlv);
    assign ALUOp[1] = (ori | sll | ssze | srlv);
    assign ALUOp[0] = (sub | sll | subu | gray | srlv);


endmodule