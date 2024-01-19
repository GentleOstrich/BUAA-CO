`include "defines.v"

module GRF (
    input clk,
    input reset,

    input WE,
    input  [4:0]  A1,
    input  [4:0]  A2,
    input  [4:0]  A3,
    input  [31:0] WD,
    output [31:0] RD1,
    output [31:0] RD2
);

    reg [31:0] regs [31:0];

    assign RD1 = (A3 == A1 && A3 && WE) ? WD : regs[A1];
    assign RD2 = (A3 == A2 && A3 && WE) ? WD : regs[A2];
	integer i;
    always @(posedge clk) begin
        if (reset) begin
            for (i = 0; i < 32; i = i + 1) begin 
                regs[i] <= 0;
            end
        end else if (WE && A3) begin
            regs[A3] <= WD;
        end
    end

endmodule