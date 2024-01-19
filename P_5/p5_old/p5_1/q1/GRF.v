`include "defines.v"
module GRF(
	input [31:0] pc,
    input clk,
    input reset,
    input [4:0] a1,
    input [4:0] a2,
    input [4:0] a3,
    input [31:0]wd,
    input we,
    output reg [31:0] RD1,
    output reg [31:0] RD2
);

    reg [31:0] regs [0:31];

    always @(*) begin
        if (a1 == a3 && we == 1 && a1 != 0) begin
            RD1 = wd;
        end else begin
            RD1 = regs[a1];
        end
        if (a2 == a3 && we == 1 && a2 != 0) begin
            RD2 = wd;
        end else begin
            RD2 = regs[a2];
        end
    end

    integer i;

    always @(posedge clk) begin
        if (reset == 1) begin
            for (i = 0 ; i < 32; i = i + 1) begin
                regs[i] <= 0;
            end
        end else begin
            if (we == 1 && a3 != 0) begin
                regs[a3] <= wd;
				$display("%d@%h: $%d <= %h", $time, pc, a3, wd);
            end
        end
        
    end

    initial begin
        for (i = 0 ; i < 32; i = i + 1) begin
            regs[i] <= 0;
        end
    end


endmodule