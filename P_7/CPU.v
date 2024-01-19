`include "defines.v"

module CPU (
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
    output [31:0] w_inst_addr,

    input TC0_int,
    input TC1_int,
    input IG_int,

    output [31:0] macroscopic_pc// 宏观PC
);

    assign macroscopic_pc = M_pc;

    wire stall;

    wire [31:0] F_inst, D_inst, E_inst, M_inst, W_inst;

    SU su(
        .D_inst(D_inst),
        .E_inst(E_inst),
        .M_inst(M_inst),
        .E_MDUbusy(E_MDUbusy),
        .stall(stall)
    );

    // P7 新增 用于异常检测处�
    wire [4:0] F_Code, D_Code, E_Code, M_Code, D_old_Code, E_old_Code, M_old_Code;
    wire F_AdEL, D_RI, D_Syscall, E_AriOv, E_DMOv, M_DMOv;
    wire F_BDIn, D_BDIn, E_BDIn, M_BDIn;
    wire D_eret, E_eret, M_eret;
    wire [31:0] EPC, M_CP0out, W_CP0out;
    wire req;
    

    /// StageF
    wire [31:0] F_pc, npc;
    assign F_pc = i_inst_addr;
    IFU ifu(
        .clk(clk),
        .reset(reset),
        .EN(!stall),
        .npc(npc),
        .inst(F_inst),
        // P6新增
        .i_inst_rdata(i_inst_rdata),
        .i_inst_addr(i_inst_addr),
        // P7新增
        .req(req),
        .D_eret(D_eret),
        .EPC(EPC),
        .AdEL(F_AdEL)
    );

    assign F_Code = F_AdEL ? `ADEL : `None;

    /// StageD
    assign F_BDIn = (D_nPC != `nPC_pc4);
    wire [31:0] D_pc;
    D d0 (
        .clk(clk),
        .reset(reset),

        .EN(!stall),
        .inst_i(F_inst),
        .pc_i(F_pc),
        .inst_o(D_inst),
        .pc_o(D_pc),

        // P5新增
        .stall(stall),

        // P7新增
        .req(req),
        .ExcCodeIn_i(F_Code),
        .ExcCodeIn_o(D_old_Code),
        .BDIn_i(F_BDIn),
        .BDIn_o(D_BDIn)
    );

    

    wire [4:0] D_rs_addr, D_rt_addr;
    wire [15:0] D_imm16;
    wire [25:0] D_addr;
    wire D_CMPsig;
    wire [2:0] D_EXTop;
    wire [2:0] D_nPC, D_CMPop;
    wire [31:0] D_rs, D_rt, D_ext32;

    CU D_cu(
        .inst(D_inst),
        .rs_addr(D_rs_addr),
        .rt_addr(D_rt_addr),
        .imm(D_imm16),
        .addr(D_addr),
        .EXTop(D_EXTop),
        .nPC(D_nPC),
        .CMPsel(D_CMPop),
        .RI(D_RI),
        .eret(D_eret),
        .Syscall(D_Syscall)
    );

    assign D_Code = D_old_Code ? D_old_Code :
                    D_Syscall ? `SYSCALL :
                    D_RI ? `RI :
                    `None;

    GRF grf (
        .clk(clk),
        .reset(reset),
        .WE(W_RFWE),
        .A1(D_rs_addr),
        .A2(D_rt_addr),
        .A3(W_RFDst),
        .WD(W_FWD),
        .RD1(D_rs),
        .RD2(D_rt)
    );
    assign w_grf_we = W_RFWE;
    assign w_grf_addr = W_RFDst;
    assign w_grf_wdata = W_FWD;
    assign w_inst_addr = W_pc;



    EXT ext (
        .imm16(D_imm16),
        .EXTop(D_EXTop),
        .ext32(D_ext32)
    );
    
    wire [31:0] FWD_D_RS =  (D_rs_addr == 0) ? 0 :
                            (D_rs_addr == E_RFDst) ? E_FWD :
                            (D_rs_addr == M_RFDst) ? M_FWD :
                            D_rs;
                            

    wire [31:0] FWD_D_RT =  (D_rt_addr == 0) ? 0 :
                            (D_rt_addr == E_RFDst) ? E_FWD :
                            (D_rt_addr == M_RFDst) ? M_FWD :
                            D_rt;
                            

    CMP cmp (
        .rs(FWD_D_RS),
        .rt(FWD_D_RT),
        .op(D_CMPop),
        .sig(D_CMPsig)
    );

    NPC npc0 (
        .D_pc(D_pc),
        .F_pc(F_pc),
        .imm26(D_addr),
        .rs(FWD_D_RS),
        .nPC(D_nPC),
        .sig(D_CMPsig),
        .npc(npc),

        .req(req),
        .eret(D_eret),
        .EPC(EPC)
    );

    
    wire [31:0] E_pc, E_ext32, E_rs, E_rt;
    E e0 (
        .clk(clk),
        .reset(reset || stall),
        .EN(1),
        .stall(stall),

        .inst_i(D_inst),
        .pc_i(D_pc),
        .ext32_i(D_ext32),
        .rs_i(FWD_D_RS),
        .rt_i(FWD_D_RT),
        .inst_o(E_inst),        
        .pc_o(E_pc),
        .ext32_o(E_ext32),
        .rs_o(E_rs),
        .rt_o(E_rt),

        .req(req),
        .ExcCodeIn_i(D_Code),
        .BDIn_i(D_BDIn),
        .ExcCodeIn_o(E_old_Code),
        .BDIn_o(E_BDIn)
    );



    wire [3:0] E_ALUop, E_MDUop;
    wire [2:0] E_ALUBSel;
    wire [4:0] E_rs_addr, E_rt_addr;
    wire E_ALUAriOv, E_ALUDMOv;
    wire [4:0] E_RFDst;
    wire [2:0] E_WDSrc;
    CU E_cu (
        .inst(E_inst),
        .rs_addr(E_rs_addr),
        .rt_addr(E_rt_addr),
        .ALUop(E_ALUop),
        .ALUBSel(E_ALUBSel),
        .RFDst(E_RFDst),
        .WDSrc(E_WDSrc),
        .MDUop(E_MDUop),
        .ALUAriOv(E_ALUAriOv),
        .ALUDMOv(E_ALUDMOv),
        .eret(E_eret)
    );
    wire [31:0] E_FWD;
    assign E_FWD = (E_WDSrc == `WD_EXTout) ? E_ext32 :
                   (E_WDSrc == `WD_PC8) ? E_pc + 8 : 0;

    wire [31:0] E_ALUA, E_ALUB, E_ALUout;

    
    wire [31:0] FWD_E_RS =  (E_rs_addr == 0) ? 0 :
                            (E_rs_addr == M_RFDst) ? M_FWD :
                            (E_rs_addr == W_RFDst) ? W_FWD : E_rs;

    wire [31:0] FWD_E_RT =  (E_rt_addr == 0) ? 0 :
                            (E_rt_addr == M_RFDst) ? M_FWD :
                            (E_rt_addr == W_RFDst) ? W_FWD : E_rt;

    assign E_ALUA = FWD_E_RS;

    assign E_ALUB = (E_ALUBSel == `ALUBSelRT) ? FWD_E_RT :
                    (E_ALUBSel == `ALUBSelExt) ? E_ext32 : 0;

    ALU alu (
        .ALUop(E_ALUop),
        .A(E_ALUA),
        .B(E_ALUB),
        .ALUout(E_ALUout),

        .ALUAriOv(E_ALUAriOv),
        .ALUDMOv(E_ALUDMOv),
        .AriOv(E_AriOv),
        .DMOv(E_DMOv)
    );

    wire [31:0] E_MDUout;
    wire E_MDUbusy;
    MDU mdu (
        .clk(clk),
        .reset(reset),

        .rs(FWD_E_RS),
        .rt(FWD_E_RT),
        .op(E_MDUop),
        .busy_o(E_MDUbusy),
        .out(E_MDUout),

        .req(req)
    );

    assign E_Code = E_old_Code ? E_old_Code :
                    E_AriOv ? `OV :
                    `None;


        


    
    wire [31:0] M_pc, M_ALUout, M_rt, M_MDUout, M_ext32;
    M m0(
        .clk(clk),
        .reset(reset),
        .WE(1),


        .inst_i(E_inst),
        .pc_i(E_pc),
        .ALU_i(E_ALUout),
        .MDU_i(E_MDUout),
        .rt_i(FWD_E_RT),
        .ext32_i(E_ext32),
        .inst_o(M_inst),
        .pc_o(M_pc),
        .ALU_o(M_ALUout),
        .MDU_o(M_MDUout),
        .rt_o(M_rt),
        .ext32_o(M_ext32),

        .req(req),
        .ExcCodeIn_i(E_Code),
        .BDIn_i(E_BDIn),
        .DMOv_i(E_DMOv),
        .ExcCodeIn_o(M_old_Code),
        .BDIn_o(M_BDIn),
        .DMOv_o(M_DMOv)
    );


    wire [4:0] M_rt_addr, M_rd_addr;
    wire [2:0] M_DMop;
    wire M_DMwe, M_CP0we, M_load, M_store;
    wire [4:0] M_RFDst;
    wire [2:0] M_WDSrc;
    CU M_cu (
        .inst(M_inst),
        .rt_addr(M_rt_addr),
        .rd_addr(M_rd_addr),
        .DMop(M_DMop),
        .DMwe(M_DMwe),
        .RFDst(M_RFDst),
        .WDSrc(M_WDSrc),
        .CP0we(M_CP0we),
        .eret(M_eret),
        .load(M_load),
        .store(M_store)
    );

    wire [31:0] M_FWD;
    assign M_FWD = (M_WDSrc == `WD_ALUout) ? M_ALUout :
                    (M_WDSrc == `WD_MDUout) ? M_MDUout :
                    (M_WDSrc == `WD_EXTout) ? M_ext32 :
                    (M_WDSrc == `WD_PC8) ? M_pc + 8 : 0;

    
    wire [31:0] M_DMout;

    wire WE = M_DMwe & (!req);

    wire [31:0] FWD_M_RT =  (M_rt_addr == 0) ? 0 :
                            (M_rt_addr == W_RFDst) ? W_FWD :
                            M_rt;



    assign m_data_addr = M_ALUout;

    assign m_data_wdata =  (WE == 1 && M_DMop == `WORDop)                       ?  FWD_M_RT : 
                           (WE == 1 && M_DMop == `HALFop && M_ALUout[1] == 1'b1)    ? {FWD_M_RT[15:0],FWD_M_RT[15:0]} :
						   (WE == 1 && M_DMop == `HALFop && M_ALUout[1] == 1'b0)    ? {FWD_M_RT[15:0],FWD_M_RT[15:0]} : 
                           (WE == 1 && M_DMop == `BYTEop && M_ALUout[1:0] == 2'b00) ? {FWD_M_RT[7:0],FWD_M_RT[7:0],FWD_M_RT[7:0],FWD_M_RT[7:0]} :
                           (WE == 1 && M_DMop == `BYTEop && M_ALUout[1:0] == 2'b01) ? {FWD_M_RT[7:0],FWD_M_RT[7:0],FWD_M_RT[7:0],FWD_M_RT[7:0]} :
                           (WE == 1 && M_DMop == `BYTEop && M_ALUout[1:0] == 2'b10) ? {FWD_M_RT[7:0],FWD_M_RT[7:0],FWD_M_RT[7:0],FWD_M_RT[7:0]} :
                           (WE == 1 && M_DMop == `BYTEop && M_ALUout[1:0] == 2'b11) ? {FWD_M_RT[7:0],FWD_M_RT[7:0],FWD_M_RT[7:0],FWD_M_RT[7:0]} : 0;

    assign m_data_byteen = (WE == 1 && M_DMop == `WORDop)                       ? 4'b1111 : 
                           (WE == 1 && M_DMop == `HALFop && M_ALUout[1] == 1'b1)    ? 4'b1100 :
						   (WE == 1 && M_DMop == `HALFop && M_ALUout[1] == 1'b0)    ? 4'b0011 : 
                           (WE == 1 && M_DMop == `BYTEop && M_ALUout[1:0] == 2'b00) ? 4'b0001 :
                           (WE == 1 && M_DMop == `BYTEop && M_ALUout[1:0] == 2'b01) ? 4'b0010 :
                           (WE == 1 && M_DMop == `BYTEop && M_ALUout[1:0] == 2'b10) ? 4'b0100 :
                           (WE == 1 && M_DMop == `BYTEop && M_ALUout[1:0] == 2'b11) ? 4'b1000 : 4'd0;

    assign m_inst_addr = M_pc;

    wire [2:0] deop = (M_DMop == `WORDop) ?  3'b000 : 
                      (M_DMop == `HALFop) ?  3'b001 :
                      (M_DMop == `BYTEop) ?  3'b010 : 3'd0 ;

    DATAEXT dataext(
        .A(M_ALUout[1:0]),
        .Din(m_data_rdata),
        .Op(deop),
        .Dout(M_DMout)
    );
	
	wire valid_addr = (M_ALUout >= 32'h0 && M_ALUout <= 32'h2fff || M_ALUout >= 32'h7f00 && M_ALUout <= 32'h7f23) ? 1 : 0;

    assign M_Code = M_old_Code ? M_old_Code :
                    (M_store == 1 && M_DMOv) ? `ADES :
                    (M_load == 1 && M_DMOv) ? `ADEL :
                    (M_store == 1 && M_DMop == `WORDop && M_ALUout[1:0] != 2'b00) ? `ADES :
                    (M_store == 1 && M_DMop == `HALFop && M_ALUout[0] != 1'b0) ? `ADES :
                    (M_store == 1 && (M_DMop == `HALFop || M_DMop == `BYTEop) && (M_ALUout >= 32'h7f00 && M_ALUout <= 32'h7f1b)) ? `ADES :
                    (M_store == 1 && M_ALUout >= 32'h7f08 && M_ALUout <= 32'h7f0b) ? `ADES :
                    (M_store == 1 && M_ALUout >= 32'h7f18 && M_ALUout <= 32'h7f1b) ? `ADES :
                    (M_store == 1 && valid_addr == 0) ? `ADES :
                    (M_load == 1 && M_DMop == `WORDop && M_ALUout[1:0] != 2'b00) ? `ADEL :
                    (M_load == 1 && M_DMop == `HALFop && M_ALUout[0] != 1'b0) ? `ADEL :
                    (M_load == 1 && (M_DMop == `HALFop || M_DMop == `BYTEop) && (M_ALUout >= 32'h7f00 && M_ALUout <= 32'h7f1b)) ? `ADEL :
                    (M_load == 1 && valid_addr == 0) ? `ADEL : `None;
    

    wire [5:0] HWInt = {1'b0, 1'b0, 1'b0, IG_int, TC1_int, TC0_int};
    
    CP0 cp0(
        .clk(clk),
        .reset(reset),
        .en(M_CP0we),

        .CP0Add(M_rd_addr),
        .CP0In(FWD_M_RT),
        .CP0Out(M_CP0out),
        .VPC(M_pc[31:2]),

        .BDIn(M_BDIn),
        .ExcCodeIn(M_Code),
        .HWInt(HWInt),
        
        .EXLClr(M_eret),
        
        .Req(req),
        .EPCout(EPC)
    );


    wire [31:0] W_ALUout, W_DMout, W_MDUout, W_ext32;
    wire [31:0] W_pc;
    W w0(
        .clk(clk),
        .reset(reset),
        .EN(1),

        .inst_i(M_inst),
        .pc_i(M_pc),
        .ALU_i(M_ALUout),

        .DM_i(M_DMout),
        .MDU_i(M_MDUout),
        .ext32_i(M_ext32),

        .inst_o(W_inst),
        .pc_o(W_pc),
        .ALU_o(W_ALUout),
        .DM_o(W_DMout),
        .MDU_o(W_MDUout),
        .ext32_o(W_ext32),

        .req(req),
        .CP0_i(M_CP0out),
        .CP0_o(W_CP0out)
    );

    wire [4:0] W_RFDst;
    wire [2:0] W_WDSrc;
    wire W_RFWE;

    CU W_cu(
        .inst(W_inst),
        .RFDst(W_RFDst),
        .RFwe(W_RFWE),
        .WDSrc(W_WDSrc)
    );

    wire [31:0] W_FWD;
    assign W_FWD =  (W_WDSrc == `WD_ALUout) ? W_ALUout :
                    (W_WDSrc == `WD_MDUout) ? W_MDUout :
                    (W_WDSrc == `WD_EXTout) ? W_ext32 :
                    (W_WDSrc == `WD_DMout) ? W_DMout :
                    (W_WDSrc == `WD_PC8) ? W_pc + 8 :
                    (W_WDSrc == `WD_CP0) ? W_CP0out : 0;

endmodule