`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:21:45 04/25/2014
// Design Name:   comp
// Module Name:   D:/Synchronous/Graduate Studies/Homework/672/HWprojects/HW6-IIR/comp_tb.v
// Project Name:  HW6-IIR
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: comp
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module comp_tb;

	// Inputs
	reg [3:0] A;
	reg [3:0] B;
	reg RST;
	wire ag, eq, bg;
	// Instantiate the Unit Under Test (UUT)
	comp uut (
		.A(A),
		.B(B),
		.RST(RST),
		.ag(ag),
		.bg(bg),
		.eq(eq)
	);

	initial begin
		// Initialize Inputs
		RST = 0; #5;
		RST = 1; A = 5; B = 3; #5;
		A = 7; B = 7; #5;
		A = 7; B = 8; #5;
		A = 8; B = 8; #5;
		// Wait 100 ns for global reset to finish
		#5; $finish;
        
		// Add stimulus here

	end
      
endmodule

