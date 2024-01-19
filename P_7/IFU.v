`include "defines.v"

module IFU (
    input clk,
    input reset,

    input EN,
    input [31:0] npc,
    output [31:0] inst,

    // P6新增
    input [31:0] i_inst_rdata,
    output [31:0] i_inst_addr,

    // P7新增
    input req,
    input D_eret,
    input [31:0] EPC,
    output AdEL
	);

    reg [31:0] PCreg;


    assign AdEL = ((i_inst_addr[1:0] != 2'b00) | (i_inst_addr < `StartInstAddr) | (i_inst_addr > `EndInstAddr)) && !D_eret;

    assign i_inst_addr = D_eret ? EPC : PCreg;
    
    assign inst =  (AdEL) ? 0 : i_inst_rdata;

    always @(posedge clk) begin
        if (reset) begin 
            PCreg <= 32'h0000_3000;
        end else if (req | EN) begin  
            PCreg <= npc;
        end
    end

endmodule