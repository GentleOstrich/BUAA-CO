
`define R  6'b00_0000
`define ADD  6'b10_0000
`define SUB  6'b10_0010
`define JR   6'b00_1000

`define AND 6'b10_0100
`define OR 6'b10_0101
`define SLT 6'b10_1010
`define SLTU 6'b10_1011

`define LW 6'b10_0011
`define SW 6'b10_1011
`define LB 6'b10_0000
`define SB 6'b10_1000

`define LH 6'b10_0001
`define SH 6'b10_1001

`define ORI  6'b00_1101
`define LUI 6'b00_1111
`define ADDI 6'b00_1000
`define ANDI 6'b00_1100


`define BEQ  6'b00_0100
`define BNE 6'b00_0101

`define JAL  6'b00_0011


`define MULT 6'b01_1000
`define MULTU 6'b01_1001
`define DIV 6'b01_1010
`define DIVU 6'b01_1011

`define MFHI 6'b01_0000
`define MFLO 6'b01_0010
`define MTHI 6'b01_0001
`define MTLO 6'b01_0011


`define ZeroExt  2'b00
`define SignExt  2'b01
`define High16  2'b10



`define ADDop  4'b0000
`define SUBop  4'b0001
`define ORop   4'b0010
`define ANDop  4'b0011
`define SLTop  4'b0100
`define SLTUop 4'b0101

`define MULTop 4'b0000
`define MULTUop 4'b0001
`define DIVop 4'b0010
`define DIVUop 4'b0011



`define WORDop 2'b00
`define BYTEop 2'b01
`define HALFop 2'b10

`define ReadHI 2'b01
`define ReadLO 2'b11

`define WriteHI 2'b01
`define WriteLO 2'b11


