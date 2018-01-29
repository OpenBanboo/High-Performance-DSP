`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:52:07 04/26/2014
// Design Name:   align
// Module Name:   D:/Synchronous/Graduate Studies/Homework/672/HWprojects/HW6-IIR/align_tb.v
// Project Name:  HW6-IIR
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: align
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module align_tb;

parameter 		  		WIDTH = 32,			//The total bits of the inputs
							WIDTH_exp = 8,		//The bitwidth of the exponent part
							WIDTH_mat = 23,	//The bitwidth of the mantissa part
							WIDTH_round = 30; //The bitwidth used for estimation in rounding

	// Inputs
	reg CLK;
	reg RST;
	reg [WIDTH-1:0] OP_L;
	reg [WIDTH-1:0] OP_S;

	// Outputs
	wire [WIDTH_exp-1:0] exp;
	wire [(WIDTH_mat+1+WIDTH_round)-1:0] mat_L;
	wire [(WIDTH_mat+1+WIDTH_round)-1:0] mat_S;

	// Instantiate the Unit Under Test (UUT)
	align uut (
		.CLK(CLK), 
		.RST(RST), 
		.OP_L(OP_L), 
		.OP_S(OP_S), 
		.exp(exp), 
		.mat_L(mat_L), 
		.mat_S(mat_S)
	);

	initial begin
		// Initialize Inputs
		CLK = 0;
		RST = 0; #10; RST = 1;
		OP_L = 32'b0_00000011_10010000000000000000000;
		OP_S = 32'b0_00000010_10100000000000000000000; #10;
		//
		OP_L = 32'b0_00000100_10010000000000000000000;
		OP_S = 32'b0_00000010_10100000000000000000000; #10;		
		//
		$finish;
        
		// Add stimulus here

	end
      
endmodule

