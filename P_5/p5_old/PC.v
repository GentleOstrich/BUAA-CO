`include "defines.v"
module PC(
    input clk,
    input reset,
    input PCstall,
    input [31:0] npc,
    output reg [31:0] pc
);
	
    always @(posedge clk) begin
        if (reset == 1) begin
            pc <= 32'h00003000;
        end else begin 
            if (PCstall == 1) begin
                pc <= pc;
            end else begin
                pc <= npc;
            end    
        end
    end

    initial begin
        pc = 32'h00003000;
    end

endmodule