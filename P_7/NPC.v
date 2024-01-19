`include "defines.v"

module NPC (
    input [31:0] D_pc,
    input [31:0] F_pc,
    input [25:0] imm26,
    input [31:0] rs,
    input [2:0] nPC,
    input sig,
    output [31:0] npc,

    input req,
    input eret,
    input [31:0] EPC
);
    wire [31:0] pc4 = F_pc + 4;
    wire [31:0] Jdst = {D_pc[31:28], imm26, 2'b0};
    wire [31:0] Bdst =  D_pc + 4 + {{14{imm26[15]}}, imm26[15:0], 2'b0};


    assign npc = req  ? `handlePC :
                 eret ? EPC + 4 :
                 (nPC == `nPC_pc4)  ? pc4 :
                 (nPC == `nPC_addr) ? Jdst :
                 (nPC == `nPC_reg)  ? rs :
                 (nPC == `nPC_branch && sig) ? Bdst : pc4;


endmodule