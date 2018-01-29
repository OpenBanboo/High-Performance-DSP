`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:07:27 04/27/2014
// Design Name:   nor_cor
// Module Name:   D:/Synchronous/Graduate Studies/Homework/672/HWprojects/HW6-IIR/nor_cor_tb.v
// Project Name:  HW6-IIR
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: nor_cor
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module nor_cor_tb;
	localparam WIDTH = 13,
				  WIDTH_mat = 5,
				  WIDTH_exp = 4;
	// Inputs
	reg CLK;
	reg RST;
	reg sign_L;
	reg [WIDTH-1:0] mat_in;
	reg [WIDTH_exp-1:0] exp;
	reg clear;
	reg exce_in;
	real real_result;
// ================================  Function Definition  =======================================//
function real floatToReal;
	input [2047:0] in;
	input integer WE;
	input integer WM;
	integer	idx;
	integer idx2;
	real retVal;
	real exVal;
	begin
		retVal = 0;
		exVal  = 0;
// == -------------------------------------------------------- == //
		for(idx = 0; idx < WM; idx = idx + 1) begin
			if(in[idx]==1'b1) begin
				retVal = retVal + (2.0**(idx-WM));
			end
		end
		retVal = retVal + 1;
// == -------------------------------------------------------- == //		
		for(idx2 = 0; idx2 < WE; idx2 = idx2 + 1) begin
			if(in[idx2+WM]==1'b1) begin
				exVal = exVal + (2.0**idx2);
			end
		//		exVal = exVal - (2.0**(WE-1)-1);
		end
	
		if(in[WE+WM]==1'b1) floatToReal = -retVal*(2.0**exVal);
		else floatToReal = retVal*(2.0**exVal);
	
	end
endfunction
//==================================================================================================//
	
	// Outputs
	wire exce_out;
	wire [WIDTH_mat+WIDTH_exp :0] result;

	// Instantiate the Unit Under Test (UUT)
	nor_cor
	#( 
		.WIDTH(WIDTH),
		.WIDTH_mat(WIDTH_mat),
		.WIDTH_exp(WIDTH_exp)
		)
	uut (
		.CLK(CLK), 
		.RST(RST), 
		.sign_L(sign_L), 
		.mat_in(mat_in), 
		.exp(exp), 
		.clear(clear), 
		.exce_in(exce_in), 
		.exce_out(exce_out), 
		.result(result)
	);

	initial begin
		// Initialize Inputs
		RST = 0; #10; RST = 1;
		sign_L = 1'b0; mat_in = 13'b0_101011_000000; exp = 4'b0011; clear = 0; exce_in = 0; #10;
		//
		sign_L = 1'b0; mat_in = 13'b1_101011_110000; exp = 4'b0011; clear = 0; exce_in = 0; #10;
		//
		sign_L = 1'b0; mat_in = 13'b0_001111_100000; exp = 4'b0011; clear = 0; exce_in = 0; #10;
		//
		sign_L = 1'b0; mat_in = 13'b0_001111_101001; exp = 4'b0011; clear = 0; exce_in = 0; #10;
		//
		sign_L = 1'b0; mat_in = 13'b0_001111_111000; exp = 4'b0011; clear = 0; exce_in = 0; #10;
		//
		sign_L = 1'b0; mat_in = 13'b0_101111_010000; exp = 4'b0011; clear = 0; exce_in = 0; #10;
		//
		sign_L = 1'b0; mat_in = 13'b0_101111_010001; exp = 4'b0011; clear = 0; exce_in = 0; #10;
		//
		sign_L = 1'b0; mat_in = 13'b0_000011_011000; exp = 4'b0011; clear = 0; exce_in = 0; #10;
		// 
		sign_L = 1'b0; mat_in = 13'b1_001111_000000; exp = 4'b1111; clear = 0; exce_in = 0; #10;
		$finish;
		// Add stimulus here
	end

	always @ result real_result = floatToReal(result, WIDTH_exp, WIDTH_mat); 
		
		
endmodule

