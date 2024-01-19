`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:20:37 11/14/2022
// Design Name:   test
// Module Name:   D:/University/Study/2022fall/co/P_4/test/tb.v
// Project Name:  test
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: test
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb;

	// Inputs
	reg [31:0] A;
	reg [31:0] B;
	// Instantiate the Unit Under Test (UUT)
	test uut (
		.A(A),
		.B(B)
	);

	initial begin
		// Initialize Inputs
		A = 32'b1111111111111111111100000000000;
		B = 5;
		// Wait 100 ns for global reset to finish
		#10;
        
		// Add stimulus here

	end
      
endmodule

