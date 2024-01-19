module mips(
    input clk,
    input reset
);
    
	wire stall;
	
    wire [31:0] PC_pc, IM_instr, ADD4_pcadd4, D_instr, D_pcadd4, GRF_RD1_0, GRF_RD2_0, EXT_ext32, E_RD1, E_RD2, E_ext32, ALU_AO, M_AO, 
				M_RD2, M_pcadd4, DM_RD, W_wd, NPC_npc, NPC_pc4, E_pcadd4, D_pc, E_pc, M_pc, W_pc, GRF_RD1, GRF_RD2;
				
    wire CTRL_useimm, CTRL_RegWE, CTRL_MemWE, E_useImm, E_RegWE, E_MemWE, M_RegWE, M_MemWE, W_RegWE, CMP_equal, NPC_Dclear;
	
    wire [1:0] CTRL_EXTop, CTRL_a3_sel, CTRL_Tnew, FWD_v1_sel, FWD_v2_sel, CTRL_wd_sel, E_a3_sel, E_Tnew, E_wd_sel, M_Tnew, M_wd_sel, W_Tnew, grf_v1_sel, grf_v2_sel,
                dm_v1_sel, dm_v2_sel, CTRL_WBHop, E_WBHop, M_WBHop;
				
    wire [3:0] CTRL_ALUop, E_ALUop;
	
    wire [4:0] E_rt, E_rd, M_a3, W_a3, E_a1, E_a2, M_a2;


/******************************/
/**********STAGE F*************/
/*****************************/
    wire [31:0] next_pc;

    assign next_pc = (NPC_branch == 1) ? NPC_npc : ADD4_pcadd4;
                     
    PC pc0(
    .clk(clk),
    .reset(reset),
    .PCstall(stall),
    .npc(next_pc),
    .pc(PC_pc)
    );

    IM im0(    
    .clk(clk),
    .reset(reset),
    .pc(PC_pc),
    .instr(IM_instr)
    );


    ADD4 add4(
    .pc(PC_pc),
    .pcadd4(ADD4_pcadd4)
    );


    D d0(
	.pc_i(PC_pc),
    .clk(clk),
    .reset(reset),
    .Dstall(stall),
    .Dclear(NPC_Dclear),
    .instr_i(IM_instr),
    .pcadd4_i(ADD4_pcadd4),
    .instr_o(D_instr),
    .pcadd4_o(D_pcadd4),
	.pc_o(D_pc)
    );


/******************************/
/**********STAGE D*************/
/*****************************/

    CTRL ctrl0(
	.BLZ_EN(NPC_b),
    .op(D_instr[31:26]),
    .funct(D_instr[5:0]),
    .a1(D_instr[25:21]),
    .a2(D_instr[20:16]),

    .E_Tnew(E_Tnew),
    .E_a3(a3),
    .E_we(E_RegWE),

    .M_Tnew(M_Tnew),
    .M_a3(M_a3),
	.M_we(M_RegWE),
    
    .useImm(CTRL_useimm),
    .EXTop(CTRL_EXTop),
    .ALUop(CTRL_ALUop),
	.WBHop(CTRL_WBHop),
    .RegWE(CTRL_RegWE),
    .a3_sel(CTRL_a3_sel),
    .MemWE(CTRL_MemWE),
    .Tnew(CTRL_Tnew),
    .wd_sel(CTRL_wd_sel),
    .stall(stall)
    );


    GRF grf0(
	.pc(W_pc),
    .clk(clk),
    .reset(reset),
    .a1(D_instr[25:21]),
    .a2(D_instr[20:16]),

    .a3(W_a3),
    .wd(W_wd),
    .we(W_RegWE),

    .RD1(GRF_RD1_0),
    .RD2(GRF_RD2_0)
    );

    FWD fwd0(
    .a1(D_instr[25:21]),
    .a2(D_instr[20:16]),
    //转发
	.M_a3(M_a3),
	.M_we(M_RegWE),

	.W_a3(W_a3),
	.W_we(W_RegWE),

    .v1_sel(grf_v1_sel),
    .v2_sel(grf_v2_sel)
    );

assign GRF_RD1 = (grf_v1_sel == 2'b00) ? GRF_RD1_0 :
          (grf_v1_sel == 2'b01) ? W_wd :
          (grf_v1_sel == 2'b10) ? M_AO : 0;
          
assign GRF_RD2 = (grf_v2_sel == 2'b00) ? GRF_RD2_0 :
          (grf_v2_sel == 2'b01) ? W_wd :
          (grf_v2_sel == 2'b10) ? M_AO : 0;
          


    EXT ext0(
    .imm16(D_instr[15:0]),
    .extop(CTRL_EXTop),
    .ext32(EXT_ext32)
    );

	wire CMP_rslz;
	
    CMP cmp0(
    .A(GRF_RD1),
    .B(GRF_RD2),
    .equal(CMP_equal),
	.rslz(CMP_rslz)
    );


    wire NPC_branch;

	wire NPC_b;
    NPC npc0(
    .equal(CMP_equal),
	
	
	.rslz(CMP_rslz),
	.BLZ_EN(NPC_b),
	.rt(GRF_RD2),
	
	
    .op(D_instr[31:26]),
    .funct(D_instr[5:0]),
    .pc(D_pcadd4),
    .dst(D_instr[25:0]),
    .offset(D_instr[15:0]),
    .npc(NPC_npc),
    .Dclear(NPC_Dclear),
    .pc4(NPC_pc4),
    .branch(NPC_branch),
    .regdst(GRF_RD1)
    );
/******************************/
/**********STAGE E*************/
/*****************************/

    E e0(
    .Eclear(stall),
    .a1_i(D_instr[25:21]),
    .a2_i(D_instr[20:16]),
	.pc_i(D_pc),
    .clk(clk),
    .reset(reset),
    .useImm_i(CTRL_useimm),
    .ALUop_i(CTRL_ALUop),
	.WBHop_i(CTRL_WBHop),
    .RegWE_i(CTRL_RegWE),
    .a3_sel_i(CTRL_a3_sel),
    .MemWE_i(CTRL_MemWE),
    .Tnew_i(CTRL_Tnew),
    .RD1_i(GRF_RD1),
    .RD2_i(GRF_RD2),
    .wd_sel_i(CTRL_wd_sel),
    .ext32_i(EXT_ext32),
    .rt_i(D_instr[20:16]),
    .rd_i(D_instr[15:11]),
    .pcadd4_i(NPC_pc4),

    .a1_o(E_a1),
    .a2_o(E_a2),
    .useImm_o(E_useImm),
    .ALUop_o(E_ALUop),
	.WBHop_o(E_WBHop),
    .RegWE_o(E_RegWE),
    .a3_sel_o(E_a3_sel),
    .MemWE_o(E_MemWE),
    .Tnew_o(E_Tnew),

    .RD1_o(E_RD1),
    .RD2_o(E_RD2),
    
    .wd_sel_o(E_wd_sel),
    .ext32_o(E_ext32),
    .rt_o(E_rt),
    .rd_o(E_rd),
    .pcadd4_o(E_pcadd4),
	.pc_o(E_pc)
    );

    FWD fwd1(
    .a1(E_a1),
    .a2(E_a2),
    //转发
	.M_a3(M_a3),
	.M_we(M_RegWE),

	.W_a3(W_a3),
	.W_we(W_RegWE),

    .v1_sel(FWD_v1_sel),
    .v2_sel(FWD_v2_sel)
    );

/******************************/
/******选择ALU的两个运算数******/
/*****************************/
    wire [31:0] A, B;

    assign A = (FWD_v1_sel == 2'b00) ? E_RD1 :
               (FWD_v1_sel == 2'b01) ? W_wd  :
               (FWD_v1_sel == 2'b10) ? M_AO  : 0;

    assign B = (E_useImm == 1'b1)  ? E_ext32 : 
               (E_useImm == 0 && FWD_v2_sel == 2'b00) ? E_RD2 :
               (E_useImm == 0 && FWD_v2_sel == 2'b01) ? W_wd  :
               (E_useImm == 0 && FWD_v2_sel == 2'b10) ? M_AO: 0;
    

    ALU alu0(
    .ALUop(E_ALUop),
    .A(A),
    .B(B),
    .AO(ALU_AO)
    );

/******************************/
/******选择要写入的寄存器a3******/
/*****************************/
    wire [4:0] a3;
    assign a3 = (E_a3_sel == 2'b00) ? E_rt :
                (E_a3_sel == 2'b01) ? E_rd :
                (E_a3_sel == 2'b10) ? 31 : 0;


wire [31:0] RD2_0;
assign RD2_0 = (FWD_v2_sel == 2'b00) ? E_RD2 :
               (FWD_v2_sel == 2'b01) ? W_wd  :
               (FWD_v2_sel == 2'b10) ? M_AO: 0;
    

   

/******************************/
/**********STAGE M*************/
/*****************************/
    M m0(
	.pc_i(E_pc),
    .clk(clk),
    .reset(reset),

    .a2_i(E_a2),
    .AO_i(ALU_AO),
    .RD2_i(RD2_0),
    .a3_i(a3),
	.WBHop_i(E_WBHop),
    .RegWE_i(E_RegWE),
    .Tnew_i(E_Tnew),
    .pcadd4_i(E_pcadd4),
    .MemWE_i(E_MemWE),
    .wd_sel_i(E_wd_sel),
	
	.WBHop_o(M_WBHop),
    .a2_o(M_a2),
    .AO_o(M_AO), // 转发
    .RD2_o(M_RD2),
    .a3_o(M_a3), // 转发
    .RegWE_o(M_RegWE), // 转发
    .Tnew_o(M_Tnew), // 转发
    .pcadd4_o(M_pcadd4),
    .MemWE_o(M_MemWE),
    .wd_sel_o(M_wd_sel),
	.pc_o(M_pc)
    );

    
    wire [31:0] RD2;
    assign RD2 = (dm_v2_sel == 2'b00) ? M_RD2  : 
                 (dm_v2_sel == 2'b10) ? M_AO :                 
                 (dm_v2_sel == 2'b01) ? W_wd : 0;
                 

    DM dm0(
	.pc(M_pc),
    .clk(clk),
    .reset(reset),
    .WE(M_MemWE),
    .A(M_AO),
    .WD(RD2),
    .RD(DM_RD),
	.WBHop(M_WBHop)
    );

    FWD fwd2(
    .a1(0),
    .a2(M_a2),
    //转发
	.M_a3(0),
	.M_we(0),

	.W_a3(W_a3),
	.W_we(W_RegWE),

    .v1_sel(dm_v1_sel),
    .v2_sel(dm_v2_sel)
    );

/******************************/
/**********STAGE W*************/
/*****************************/

    W w0(
	.pc_i(M_pc),
    .clk(clk),
    .reset(reset),
    .Tnew_i(M_Tnew),
    .mrd_i(DM_RD),
    .ao_i(M_AO),
    .pcadd4_i(M_pcadd4),
    .RegWE_i(M_RegWE),
    .wd_sel_i(M_wd_sel),
    .a3_i(M_a3),

    .Tnew_o(W_Tnew),
    .RegWE_o(W_RegWE), //转发
    .wd_o(W_wd), // 转发
    .a3_o(W_a3), // 转发 
	.pc_o(W_pc)
    );

endmodule