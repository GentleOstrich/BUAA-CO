`include "defines.v"
module IM(
    input clk,
    input reset,
    input [31:0] pc,
    output reg [31:0] instr
);
    reg [31:0] im [0:4096-1];
    
    integer i;

    always @(*) begin
		instr = im[(pc - 32'h00003000) >> 2];
    end

    initial begin
        for (i = 0; i < 4096; i = i + 1) begin
            im[i] = 0;
        end
        $readmemh("code.txt", im);
    end
endmodule