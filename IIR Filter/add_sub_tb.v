`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:35:32 04/26/2014
// Design Name:   add_sub
// Module Name:   D:/Synchronous/Graduate Studies/Homework/672/HWprojects/HW6-IIR/add_sub_tb.v
// Project Name:  HW6-IIR
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: add_sub
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module add_sub_tb;
	parameter WIDTH = 4;
	// Inputs
	reg S1;
	reg S2;
	reg CLK;
	reg RST;
	reg [WIDTH-1:0] mat_L;
	reg [WIDTH-1:0] mat_S;

	// Outputs
	wire [WIDTH:0] dout;


	// Instantiate the Unit Under Test (UUT)
	add_sub 
		#(.WIDTH(WIDTH))
	uut (
		.S1(S1), 
		.S2(S2), 
		.CLK(CLK), 
		.RST(RST), 
		.mat_L(mat_L), 
		.mat_S(mat_S), 
		.dout(dout)
	);

	initial begin
		RST = 0; #10;
		// Initialize Inputs
		RST = 1;
		S1 = 0; S2 = 0; mat_L = 1; mat_S = 3; #10;
		S1 = 0; S2 = 0; mat_L = 8; mat_S = 8; #10;
		S1 = 1; S2 = 0; mat_L = 8; mat_S = 5; #10;
		S1 = 0; S2 = 1; mat_L = 12; mat_S = 5; #10;
		$finish;
        
		// Add stimulus here

	end
      
endmodule

