`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   08:20:39 04/12/2014
// Design Name:   test_forGenerate
// Module Name:   P:/Syn/Graduate Studies/Homework/672/HWprojects/HW6-IIR/test_forGenerate_tb.v
// Project Name:  HW6-IIR
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: test_forGenerate
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_forGenerate_tb;

	// Inputs
	reg [7:0] din;
	reg CLK;
	reg RST;

	// Outputs
	wire [7:0] dout;

	// Instantiate the Unit Under Test (UUT)
	test_forGenerate uut (
		.din(din), 
		.dout(dout), 
		.CLK(CLK), 
		.RST(RST)
	);

//=====================================  clock generator  ==========================================//
	parameter ClockPeriod = 10;
	initial 	 CLK = 1;
	always # (ClockPeriod/2) CLK = ~CLK;
//==================================================================================================//

	initial begin
		// Initialize Inputs
		din = 0;
		RST = 1;
		@(posedge CLK); din = 1; 
		@(posedge CLK); din = 2;
		@(posedge CLK); din = 3;
		@(posedge CLK); din = 4; 
		// Wait 100 ns for global reset to finish
		@(posedge CLK); din = 5;
		@(posedge CLK); @(posedge CLK); @(posedge CLK); @(posedge CLK); 
		$finish;
        
	end
      
endmodule

