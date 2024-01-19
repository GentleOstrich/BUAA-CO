`include "defines.v"
module E(
    input Eclear,
	input [31:0] pc_i,
    input [4:0] a1_i,
    input [4:0] a2_i,
    input clk,
    input reset,
    input useImm_i,
    input [3:0] ALUop_i,
	input [1:0] WBHop_i,
    input RegWE_i,
    input [1:0] a3_sel_i,
    input MemWE_i,
    input [1:0] Tnew_i,
    input [31:0] RD1_i,
    input [31:0] RD2_i,
    input [1:0] wd_sel_i,
    input [31:0] ext32_i,
    input [4:0] rt_i,
    input [4:0] rd_i,
    input [31:0] pc8_i,

    input [3:0] HILOop_i,
    input start_i,
    input [1:0] readHL_i,
    input [1:0] writeHL_i,
	
	output reg [31:0] pc_o,
    output reg [4:0] a1_o,
    output reg [4:0] a2_o,
    output reg useImm_o,
    output reg [3:0] ALUop_o,
	output reg [1:0] WBHop_o,
    output reg RegWE_o,
    output reg [1:0] a3_sel_o,
    output reg MemWE_o,
    output reg [1:0] Tnew_o,

    output reg [31:0] RD1_o,
    output reg [31:0] RD2_o,
    
    output reg [1:0] wd_sel_o,
    output reg [31:0] ext32_o,
    output reg [4:0] rt_o,
    output reg [4:0] rd_o,
    output reg [31:0] pc8_o,

    output reg [3:0] HILOop_o,
    output reg start_o,
    output reg [1:0] readHL_o,
    output reg [1:0] writeHL_o
);

always @(posedge clk) begin
    if (reset == 1 || Eclear == 1) begin
        useImm_o <= 0;
        ALUop_o <= 0;
        RegWE_o <= 0;
        a3_sel_o <= 0;
        MemWE_o <= 0;
        Tnew_o <= 0;
        RD1_o <= 0;
        RD2_o <= 0;
        wd_sel_o <= 0;
        ext32_o <= 0;
        rt_o <= 0;
        rd_o <= 0;
        pc8_o <= 0;
		pc_o <= 0;
        a1_o <= 0;
        a2_o <= 0;
		WBHop_o <= 0;
        HILOop_o <= 0;
        start_o <= 0;
        readHL_o <= 0;
        writeHL_o <= 0;
    end else begin
            useImm_o <= useImm_i;
            ALUop_o <= ALUop_i;
			WBHop_o <= WBHop_i;
            RegWE_o <= RegWE_i;
            a3_sel_o <= a3_sel_i;
            MemWE_o <= MemWE_i;
            Tnew_o <= Tnew_i;
            RD1_o <= RD1_i;
            RD2_o <= RD2_i;
            wd_sel_o <= wd_sel_i;
            ext32_o <= ext32_i;
            rt_o <= rt_i;
            rd_o <= rd_i;
            pc8_o <= pc8_i;
			pc_o <= pc_i;
            a1_o <= a1_i;
            a2_o <= a2_i;
            HILOop_o <= HILOop_i;
            start_o <= start_i;
            readHL_o <= readHL_i;
            writeHL_o <= writeHL_i;
    end
end
endmodule