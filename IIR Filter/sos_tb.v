`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:05:49 04/10/2014
// Design Name:   sos
// Module Name:   D:/Synchronous/Graduate Studies/Homework/672/HWprojects/HW6-IIR/sos_tb.v
// Project Name:  HW6-IIR
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: sos
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////
`define Testdata_Depth 50
`define Testdata_Bits 16


module sos_tb;

	// Inputs
	reg [15:0] din;
	reg CLK;
	reg nReset;
	reg CE;

	// Memory used to store the testcases
	reg [`Testdata_Bits-1:0] Testdata_vec_IIR [`Testdata_Depth-1:0];

	// Outputs
	wire [15:0] dout;	//output should be large enough to support the correct answer

	// clock generator
	parameter ClockPeriod = 10;
	initial CLK = 0;
	always # (ClockPeriod/2) CLK = ~CLK;


//===============================================================================//
	// Instantiate the Unit Under Test (UUT)
	sos uut (
		.din(din), 
		.CLK(CLK), 
		.nReset(nReset), 
		.CE(CE), 
		.dout(dout)
	);

	integer counter;

	initial begin
		$readmemb("fpTestdata_IIR.txt", Testdata_vec_IIR);
		// Initialize Inputs
		din = 0;
		CLK = 0;
		nReset = 0;
		CE = 1;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

