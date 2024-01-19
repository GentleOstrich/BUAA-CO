`include "defines.v"

module CU (
    input [31:0] inst,

    // 解码
    output [4:0] rs_addr,
    output [4:0] rt_addr,
    output [4:0] rd_addr,
    output [15:0] imm,
    output [25:0] addr,

    // 分类
    output calc_r,
    output calc_i,
    output load,
    output store,
    output lui,
    output branch,
    output JR, 
    output md,
    output mt,
    output mf,
    
    output [2:0] nPC,
    output [2:0] CMPsel,
    output [2:0] EXTop,

    // 这两个信号是否检查ALU溢出
    output ALUAriOv,
    output ALUDMOv,

    output [3:0] ALUop,
    output [2:0] ALUBSel,
    output [3:0] MDUop,

    output [2:0] DMop,
    output DMwe,

    output [4:0] RFDst,
    output RFwe,
    output [2:0] WDSrc,

    
    output RI,
    output Syscall,
    output CP0we,
    output mfc0,
    output mtc0,
    output eret
);

    wire [5:0] opcode = inst[31:26], func = inst[5:0];

    assign rs_addr = inst[25:21];
    assign rt_addr = inst[20:16];
    assign rd_addr = inst[15:11];

    assign imm = inst[15:0];
    assign addr = inst[25:0];

    wire lb    = (opcode == `OP_lb   );
    wire lh    = (opcode == `OP_lh   );
    wire lw    = (opcode == `OP_lw   );
    wire sb    = (opcode == `OP_sb   );
    wire sh    = (opcode == `OP_sh   );
    wire sw    = (opcode == `OP_sw   );
    wire addi  = (opcode == `OP_addi );
    wire beq   = (opcode == `OP_beq  );
    wire bne   = (opcode == `OP_bne  );
    wire jal   = (opcode == `OP_jal  );
    wire ori   = (opcode == `OP_ori  );
    assign lui   = (opcode == `OP_lui  );
    wire andi = (opcode == `OP_andi);


    wire add   = (opcode == `OP_r && func == `FUNC_add  );
    wire And   = (opcode == `OP_r && func == `FUNC_and  );
    wire div   = (opcode == `OP_r && func == `FUNC_div  );
    wire divu  = (opcode == `OP_r && func == `FUNC_divu );
    wire jr    = (opcode == `OP_r && func == `FUNC_jr   );
    wire mfhi  = (opcode == `OP_r && func == `FUNC_mfhi );
    wire mflo  = (opcode == `OP_r && func == `FUNC_mflo );
    wire mthi  = (opcode == `OP_r && func == `FUNC_mthi );
    wire mtlo  = (opcode == `OP_r && func == `FUNC_mtlo );
    wire mult  = (opcode == `OP_r && func == `FUNC_mult );
    wire multu = (opcode == `OP_r && func == `FUNC_multu);
    wire Or    = (opcode == `OP_r && func == `FUNC_or   );
    wire slt   = (opcode == `OP_r && func == `FUNC_slt  );
    wire sltu  = (opcode == `OP_r && func == `FUNC_sltu );
    wire sub   = (opcode == `OP_r && func == `FUNC_sub  );
    wire syscall = (opcode == `OP_r && func == `FUNC_syscall);

    assign mtc0  = (inst[31:21] == `OP_mtc0);
    assign mfc0  = (inst[31:21] == `OP_mfc0);
    assign eret  = (inst == `OP_eret);

    assign load   = lw | lh | lb;
    assign store  = sw | sh | sb;
    assign branch = beq | bne;

    assign calc_r = add | sub | slt | sltu |
                    And | Or; 

    assign calc_i = addi |ori | andi; 

    assign md = mult | multu | div | divu;

    assign mt = mtlo | mthi;

    assign mf = mflo | mfhi;

    assign JR = jr;

    wire JAL = jal;


    
    assign RI = !(beq | bne | jal | jr | andi | 
					 lb | lh | lw | sb | sh | sw |
                     lui | addi | ori | add | sub | And | Or | ori | slt | sltu |
                     ((opcode == 6'b000000) && (func==6'b000000)) |
                     div | divu | mfhi | mflo | mthi | mtlo | mult | multu |
                     mtc0 | mfc0 | eret);

    assign Syscall = syscall;

    assign CP0we = mtc0;

    
    assign EXTop = (addi | load | store) ? `EXT_signed :
                    lui ? `EXT_lui : `EXT_unsigned;


    
    assign nPC = branch ? `nPC_branch :
                 JAL    ? `nPC_addr :
                 JR     ? `nPC_reg : `nPC_pc4;

    assign CMPsel = beq  ? `CMP_beq  :
                    bne  ? `CMP_bne  :  `CMP_beq;


    
    assign ALUAriOv = add | addi | sub;

    assign ALUDMOv = lb | lh | lw | sb | sh | sw;

    assign  ALUop = (sub) ? `ALU_sub :
                    (And | andi) ? `ALU_and :
                    (Or | ori) ? `ALU_or :
                    (slt) ? `ALU_slt :
                    (sltu) ? `ALU_sltu : `ALU_add;


    assign ALUBSel = (calc_r) ? `ALUBSelRT :
                     (calc_i | lui | load | store) ? `ALUBSelExt : `ALUBSelRT;

    assign MDUop =  mult ? `MDU_mult :
                        multu ? `MDU_multu :
                        div ? `MDU_div :
                        divu ? `MDU_divu :
                        mflo ? `MDU_mflo :
                        mfhi ? `MDU_mfhi :
                        mtlo ? `MDU_mtlo :
                        mthi ? `MDU_mthi : `MDU_none;

    
    assign DMop = (lw || sw) ? `WORDop :
                    (lh || sh) ? `HALFop :
                    (lb || sb) ? `BYTEop :
                    `WORDop;

    assign DMwe = store;

    
    assign RFDst   = (calc_r | mf) ? rd_addr :
                     (calc_i | lui | load | mfc0) ? rt_addr :
                     (jal) ? 5'd31 : 5'd0;

    assign RFwe = !(!RFDst);

    assign WDSrc = load ? `WD_DMout :
                     (jal) ? `WD_PC8 :
                     lui ? `WD_EXTout :
                     mf ? `WD_MDUout :
                     mfc0 ? `WD_CP0 : `WD_ALUout;
endmodule