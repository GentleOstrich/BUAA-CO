`define OP_r       6'b000000
`define OP_lw      6'b100011
`define OP_lb      6'b100000
`define OP_lh      6'b100001
`define OP_lui     6'b001111
`define OP_ori     6'b001101
`define OP_sw      6'b101011
`define OP_sh      6'b101001
`define OP_sb      6'b101000
`define OP_beq     6'b000100
`define OP_jal     6'b000011
`define OP_addi    6'b001000
`define OP_andi    6'b001100
`define OP_bne     6'b000101

`define FUNC_add   6'b100000
`define FUNC_sub   6'b100010
`define FUNC_jr    6'b001000
`define FUNC_or    6'b100101
`define FUNC_slt   6'b101010
`define FUNC_sltu  6'b101011
`define FUNC_and   6'b100100

`define FUNC_mult  6'b011000
`define FUNC_multu 6'b011001
`define FUNC_div   6'b011010
`define FUNC_divu  6'b011011
`define FUNC_mfhi  6'b010000
`define FUNC_mflo  6'b010010
`define FUNC_mthi  6'b010001
`define FUNC_mtlo  6'b010011
`define FUNC_syscall 6'b001100

`define OP_mtc0    11'b010000_00100
`define OP_mfc0    11'b010000_00000
`define OP_eret    32'b010000_1000_0000_0000_0000_0000_011000

// 运算器的操作
`define ALU_add     4'd0
`define ALU_sub     4'd1
`define ALU_and     4'd2
`define ALU_or      4'd3
`define ALU_slt     4'd4
`define ALU_sltu    4'd5
`define ALU_lui     4'd6

// 字节操作
`define WORDop    3'b000
`define HALFop    3'b001
`define BYTEop    3'b010


// 下一个pc地址
`define nPC_pc4      3'b000
`define nPC_branch   3'b001
`define nPC_addr     3'b010
`define nPC_reg      3'b011



`define CMP_beq   3'd0
`define CMP_bne   3'd1


`define WD_ALUout  3'b000
`define WD_DMout   3'b001
`define WD_PC8     3'b010
`define WD_MDUout  3'b011
`define WD_EXTout  3'b100
`define WD_CP0     3'b101


`define ALUBSelRT       3'd0
`define ALUBSelExt      3'd1


`define MDU_none   4'd0
`define MDU_mult   4'd1
`define MDU_multu  4'd2
`define MDU_div    4'd3
`define MDU_divu   4'd4

`define MDU_mflo   4'd5
`define MDU_mfhi   4'd6
`define MDU_mtlo   4'd7
`define MDU_mthi   4'd8


`define EXT_unsigned 3'd0
`define EXT_signed   3'd1
`define EXT_lui      3'd2


`define INT     5'd0
`define ADEL    5'd4
`define ADES    5'd5
`define RI      5'd10
`define OV      5'd12
`define SYSCALL 5'd8
`define None    5'd0


`define N 4096
`define StartInstAddr 32'h0000_3000
`define EndInstAddr   32'h0000_6fff


`define handlePC 32'h0000_4180