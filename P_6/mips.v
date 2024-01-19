`include "defines.v"
module mips(
    input clk,
    input reset,
    input [31:0] i_inst_rdata,
    input [31:0] m_data_rdata,
    output [31:0] i_inst_addr,
    output [31:0] m_data_addr,
    output [31:0] m_data_wdata,
    output [3 :0] m_data_byteen,
    output [31:0] m_inst_addr,
    output w_grf_we,
    output [4:0] w_grf_addr,
    output [31:0] w_grf_wdata,
    output [31:0] w_inst_addr
);

    assign i_inst_addr = PC_pc;
    
    assign m_data_addr = M_AO;

    assign m_data_wdata =  (M_MemWE == 1 && M_WBHop == `WORDop)                       ?  RD2 : 
                           (M_MemWE == 1 && M_WBHop == `HALFop && M_AO[1] == 1'b1)    ? {RD2[15:0],RD2[15:0]} :
						   (M_MemWE == 1 && M_WBHop == `HALFop && M_AO[1] == 1'b0)    ? {RD2[15:0],RD2[15:0]} : 
                           (M_MemWE == 1 && M_WBHop == `BYTEop && M_AO[1:0] == 2'b00) ? {RD2[7:0],RD2[7:0],RD2[7:0],RD2[7:0]} :
                           (M_MemWE == 1 && M_WBHop == `BYTEop && M_AO[1:0] == 2'b01) ? {RD2[7:0],RD2[7:0],RD2[7:0],RD2[7:0]} :
                           (M_MemWE == 1 && M_WBHop == `BYTEop && M_AO[1:0] == 2'b10) ? {RD2[7:0],RD2[7:0],RD2[7:0],RD2[7:0]} :
                           (M_MemWE == 1 && M_WBHop == `BYTEop && M_AO[1:0] == 2'b11) ? {RD2[7:0],RD2[7:0],RD2[7:0],RD2[7:0]} : 0;

    assign m_data_byteen = (M_MemWE == 1 && M_WBHop == `WORDop)                       ? 4'b1111 : 
                           (M_MemWE == 1 && M_WBHop == `HALFop && M_AO[1] == 1'b1)    ? 4'b1100 :
						   (M_MemWE == 1 && M_WBHop == `HALFop && M_AO[1] == 1'b0)    ? 4'b0011 : 
                           (M_MemWE == 1 && M_WBHop == `BYTEop && M_AO[1:0] == 2'b00) ? 4'b0001 :
                           (M_MemWE == 1 && M_WBHop == `BYTEop && M_AO[1:0] == 2'b01) ? 4'b0010 :
                           (M_MemWE == 1 && M_WBHop == `BYTEop && M_AO[1:0] == 2'b10) ? 4'b0100 :
                           (M_MemWE == 1 && M_WBHop == `BYTEop && M_AO[1:0] == 2'b11) ? 4'b1000 : 4'd0;
						   
    assign m_inst_addr = M_pc;
    
    assign w_grf_we = W_RegWE;
    
    assign w_grf_addr = W_a3;
    
    assign w_grf_wdata = W_wd;
    
    assign w_inst_addr = W_pc;

	wire stall;
	
    wire [31:0] PC_pc, IM_instr, ADD4_pc4, D_instr, D_pc4, GRF_RD1_0, GRF_RD2_0, EXT_ext32, 
                E_RD1, E_RD2, E_ext32, ALU_AO, M_AO, M_RD2, M_pc8, DM_RD, W_wd, NPC_npc, NPC_pc8, 
                E_pc8, D_pc, E_pc, M_pc, W_pc, GRF_RD1, GRF_RD2, HILO_HI, HILO_LO, next_pc, A, B, 
                AO, RD2_0, RD2, rdata;
				
    wire CTRL_useimm, CTRL_RegWE, CTRL_MemWE, E_useImm, E_RegWE, E_MemWE, M_RegWE, M_MemWE, 
         W_RegWE, CMP_equal, CMP_nequal, NPC_Dclear, HILO_busy, HILO_start_o, CTRL_start, NPC_branch;
	
    wire [1:0] CTRL_EXTop, CTRL_a3_sel, CTRL_Tnew, FWD_v1_sel, FWD_v2_sel, CTRL_wd_sel, E_a3_sel, 
               E_Tnew, E_wd_sel, M_Tnew, M_wd_sel, grf_v1_sel, grf_v2_sel, dm_v2_sel, 
               CTRL_WBHop, E_WBHop, M_WBHop, CTRL_writeHL, CTRL_readHL, E_writeHL, E_readHL;
				
    wire [3:0] CTRL_ALUop, E_ALUop, CTRL_HILOop, E_HILOop;
	
    wire [4:0] E_rt, E_rd, M_a3, W_a3, E_a1, E_a2, M_a2, a3;

    wire [2:0] deop;


/******************************/
/**********STAGE F*************/
/*****************************/

    assign next_pc = (NPC_branch == 1) ? NPC_npc : ADD4_pc4;
                     
    PC pc0(
        .clk(clk),
        .reset(reset),
        .PCstall(stall),
        .npc(next_pc),
        .pc(PC_pc)
    );

    ADD4 add4(
        .pc(PC_pc),
        .pc4(ADD4_pc4)
    );

/******************************/
/**********STAGE D*************/
/*****************************/

    D d0(
        .pc_i(PC_pc),
        .clk(clk),
        .reset(reset),
        .Dstall(stall),
        .Dclear(NPC_Dclear),
        .instr_i(i_inst_rdata),
        .pc4_i(ADD4_pc4),
        .instr_o(D_instr),
        .pc4_o(D_pc4),
        .pc_o(D_pc)
    );

    CTRL ctrl0(
        .op(D_instr[31:26]),
        .funct(D_instr[5:0]),
        .a1(D_instr[25:21]),
        .a2(D_instr[20:16]),
        .busy(HILO_busy),
        .start_i(HILO_start_o),

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
        .stall(stall),

        .HILOop(CTRL_HILOop),
        .start_o(CTRL_start),
        .readHL(CTRL_readHL),
        .writeHL(CTRL_writeHL)
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
                     (grf_v1_sel == 2'b01) ? W_wd      :
                     (grf_v1_sel == 2'b10) ? M_AO      : 0 ;
          
    assign GRF_RD2 = (grf_v2_sel == 2'b00) ? GRF_RD2_0 :
                     (grf_v2_sel == 2'b01) ? W_wd      :
                     (grf_v2_sel == 2'b10) ? M_AO      : 0 ;
          
    EXT ext0(
        .imm16(D_instr[15:0]),
        .extop(CTRL_EXTop),
        .ext32(EXT_ext32)
    );

    CMP cmp0(
        .A(GRF_RD1),
        .B(GRF_RD2),
        .equal(CMP_equal),
        .nequal(CMP_nequal)
    );

    NPC npc0(
        .equal(CMP_equal),
        .nequal(CMP_nequal),
        .op(D_instr[31:26]),
        .funct(D_instr[5:0]),
        .pc4(D_pc4),
        .dst(D_instr[25:0]),
        .offset(D_instr[15:0]),
        .npc(NPC_npc),
        .Dclear(NPC_Dclear),
        .pc8(NPC_pc8),
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
        .pc8_i(NPC_pc8),

        .HILOop_i(CTRL_HILOop),
        .start_i(CTRL_start),
        .readHL_i(CTRL_readHL),
        .writeHL_i(CTRL_writeHL),

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
        .pc8_o(E_pc8),
        .pc_o(E_pc),

        .HILOop_o(E_HILOop),
        .start_o(E_start),
        .readHL_o(E_readHL),
        .writeHL_o(E_writeHL)
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

    assign A = (FWD_v1_sel == 2'b00) ? E_RD1 :
               (FWD_v1_sel == 2'b01) ? W_wd  :
               (FWD_v1_sel == 2'b10) ? M_AO  : 0 ;

    assign B = (E_useImm == 1'b1)  ? E_ext32 : 
               (E_useImm == 0 && FWD_v2_sel == 2'b00) ? E_RD2 :
               (E_useImm == 0 && FWD_v2_sel == 2'b01) ? W_wd  :
               (E_useImm == 0 && FWD_v2_sel == 2'b10) ? M_AO: 0 ;
    
    HILO hilo0(
        .clk(clk),
        .reset(reset),
        .start_i(E_start),
        .op(E_HILOop),
        .D1(A),
        .D2(B),
        .we(E_writeHL),
        .wd(A),
        .HI(HILO_HI),
        .LO(HILO_LO),
        .busy(HILO_busy),
        .start_o(HILO_start_o)
    );

    ALU alu0(
        .ALUop(E_ALUop),
        .A(A),
        .B(B),
        .AO(ALU_AO)
    );

    assign AO = (E_readHL == 2'b00)   ? ALU_AO  :
                (E_readHL == `ReadHI) ? HILO_HI :
                (E_readHL == `ReadLO) ? HILO_LO : 0 ;

/******************************/
/******选择要写入的寄存器a3******/
/*****************************/

    assign a3 = (E_a3_sel == 2'b00) ? E_rt :
                (E_a3_sel == 2'b01) ? E_rd :
                (E_a3_sel == 2'b10) ? 5'd31 : 5'd0;


    assign RD2_0 = (FWD_v2_sel == 2'b00) ? E_RD2 :
                    (FWD_v2_sel == 2'b01)    ? W_wd  :
                    (FWD_v2_sel == 2'b10)    ? M_AO  : 0 ;
    
/******************************/
/**********STAGE M*************/
/*****************************/

    M m0(
        .pc_i(E_pc),
        .clk(clk),
        .reset(reset),

        .a2_i(E_a2),
        .AO_i(AO),
        .RD2_i(RD2_0),
        .a3_i(a3),
        .WBHop_i(E_WBHop),
        .RegWE_i(E_RegWE),
        .Tnew_i(E_Tnew),
        .pc8_i(E_pc8),
        .MemWE_i(E_MemWE),
        .wd_sel_i(E_wd_sel),
        
        .WBHop_o(M_WBHop),
        .a2_o(M_a2),
        .AO_o(M_AO), // 转发
        .RD2_o(M_RD2),
        .a3_o(M_a3), // 转发
        .RegWE_o(M_RegWE), // 转发
        .Tnew_o(M_Tnew), // 转发
        .pc8_o(M_pc8),
        .MemWE_o(M_MemWE),
        .wd_sel_o(M_wd_sel),
        .pc_o(M_pc)
    );

    assign RD2 = (dm_v2_sel == 2'b00) ? M_RD2 : 
                 (dm_v2_sel == 2'b10) ? M_AO  :                 
                 (dm_v2_sel == 2'b01) ? W_wd  : 0 ;

    FWD fwd2(
        .a1(5'd0),
        .a2(M_a2),
        //转发
        .M_a3(5'd0),
        .M_we(1'd0),

        .W_a3(W_a3),
        .W_we(W_RegWE),

        .v2_sel(dm_v2_sel)
    );

    assign deop = (M_WBHop == `WORDop) ?  3'b000 : 
                  (M_WBHop == `HALFop) ?  3'b001 :
                  (M_WBHop == `BYTEop) ?  3'b010 : 3'd0 ;
    
    DATAEXT dataext(
        .A(M_AO[1:0]),
        .Din(m_data_rdata),
        .Op(deop),
        .Dout(rdata)
    );

/******************************/
/**********STAGE W*************/
/*****************************/

    W w0(
        .pc_i(M_pc),
        .clk(clk),
        .reset(reset),
        .Tnew_i(M_Tnew),
        .mrd_i(rdata),
        .ao_i(M_AO),
        .pc8_i(M_pc8),
        .RegWE_i(M_RegWE),
        .wd_sel_i(M_wd_sel),
        .a3_i(M_a3),

        .RegWE_o(W_RegWE), //转发
        .wd_o(W_wd), // 转发
        .a3_o(W_a3), // 转发 
        .pc_o(W_pc)
    );

endmodule