`define R  6'b00_0000
`define LW  6'b10_0011
`define SW  6'b10_1011
`define ADD  6'b10_0000
`define SUB  6'b10_0010
`define ADDU  6'b10_0001
`define SUBU  6'b10_0011
`define ORI  6'b00_1101
`define LUI 6'b00_1111
`define BEQ  6'b00_0100
`define J  6'b00_0010
`define JAL  6'b00_0011
`define JR   6'b00_1000
`define LB 6'b10_0000
`define SB 6'b10_1000
`define JALR 6'b00_1001
`define CMCO 6'b11_1111 // 计算类
`define BLEZALC 6'b11_1110 // 分支link
`define LWSO 6'b11_1100 // 条件load
`define LRM 6'b11_1000 // 条件load
`define SUBP 6'b11_0001//


`define ZeroExt  2'b00
`define SignExt  2'b01
`define High16  2'b10



`define ADDop  4'b0000
`define SUBop  4'b0001
`define ORop   4'b0010
`define CMCOop  4'b0011
`define SUBPop  4'b0100

`define WORDop 2'b00
`define BYTEop 2'b01
`define LWSOop 2'b10
`define LRMop 2'b11


