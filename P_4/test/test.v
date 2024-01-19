`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:18:35 11/14/2022 
// Design Name: 
// Module Name:    test 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module test(
	input [31:0] A,
	input [31:0] B,
	output reg out
    );
	
	integer i;
	reg [31:0] ans;
	always @ (*) begin
		i = 0;
		ans = A;
		while (i < B[4:0]) begin
			ans = {ans[30:0], ans[31]};
			i = i + 1;
		end
	end

endmodule
