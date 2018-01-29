`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   08:23:25 04/28/2014
// Design Name:   adder_float
// Module Name:   D:/Synchronous/Graduate Studies/Homework/672/HWprojects/HW6-IIR/adder_float_tb.v
// Project Name:  HW6-IIR
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: adder_float
////////////////////////////////////////////////////////////////////////////////

module adder_float_tb;						//Testbench start
// ****************************************************
	parameter WIDTH = 32;					//parameters of the floating-point number
	parameter WIDTH_exp = 8;				//are defined here
	parameter WIDTH_mat = 23;				
	parameter WIDTH_round = 30;			//width for rounding
// ****************************************************		 
// ****************************************************			 
	// Inputs
	reg CLK;
	reg RST;
	reg [WIDTH-1:0] OP1;
	reg [WIDTH-1:0] OP2;
	reg exce_in;
// ****************************************************
	// Outputs
	wire exce_out;
	wire [WIDTH-1:0] result;
// ****************************************************

// ================================  Function Definition  =======================================//
// Present the floating format binary number into real number
// Written by Christian Lin, 4-23-2014
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
// == ------------------------------ Mantissa Calculation ----------------------------- == //
		for(idx = 0; idx < WM; idx = idx + 1) begin
			if(in[idx]==1'b1) begin
				retVal = retVal + (2.0**(idx-WM));
			end
		end
		retVal = retVal + 1;
// == ------------------------------ Exponent Calculation ----------------------------- == //		
		for(idx2 = 0; idx2 < WE; idx2 = idx2 + 1) begin
			if(in[idx2+WM]==1'b1) begin
				exVal = exVal + (2.0**idx2);
			end
		end
	
		if (in == 0)
			floatToReal = 0;
		else if (in[WE+WM]==1'b1) 
			floatToReal = -retVal*(2.0**(exVal-((2.0**(WE-1))-1)));
		else 
			floatToReal = retVal*(2.0**(exVal-((2.0**(WE-1))-1)));
	end
endfunction

//==================================================================================================//

// ================================   UUT Instialization  =======================================//

	// Instantiate the Unit Under Test (UUT)
	adder_float 						//floating point addition module
	  #(
		.WIDTH(WIDTH),					//Total input bitwidht
		.WIDTH_exp(WIDTH_exp),		//exponent bitwidth
		.WIDTH_mat(WIDTH_mat),		//mantissa bitwidth
		.WIDTH_round(WIDTH_round)	//width for rounding inside
		)
	Fang_floAdder (					//module name
		.CLK(CLK), 						//clock for pipeline structure
		.RST(RST), 						//negative reset
		.OP1(OP1), 						//input 1
		.OP2(OP2), 						//input 2
		.exce_in(exce_in), 			//exception input signal
		.exce_out(exce_out), 		//exception output signal
		.result(result)				//resuelt after calculation
	);
// ==============================================================================================//

//=====================================  clock generator  ==========================================//
	parameter ClockPeriod = 10;
	initial 	 CLK = 1;
	always # (ClockPeriod/2) CLK = ~CLK;
//==================================================================================================//

// ====================================    Initialize Inputs    ====================================//
	initial begin

		RST = 0; OP1 = 0; OP2 = 0; exce_in = 0; @(posedge CLK);
		
		RST = 1; OP1 = 32'b0_01111110_11000000000000000000000;; OP2 = 32'b0_01111110_11100000000000000000000; exce_in = 0; @(posedge CLK); 	//test for fraction number
		//
		
		RST = 1; OP1 = 32'b0_10000011_11000000000000000000000;; OP2 = 32'b0_00000000_00000000000000000000000; exce_in = 0; @(posedge CLK);
		
		//
		RST = 1; OP1 = 32'b0_10000111_11000000000000000000000;  OP2 = 32'b0_10000011_11000000000000000000000; exce_in = 1; @(posedge CLK);
		
		//
		RST = 1; OP1 = 32'b1_10000111_11000000000000000000000;  OP2 = 32'b0_10000011_11000000000000000000000; exce_in = 0; @(posedge CLK);
		
		//
		RST = 1; OP1 = 32'b0_10001111_11000000000000000000000;  OP2 = 32'b0_10001111_11000000000000000000000; exce_in = 0; @(posedge CLK);
		
		//
		RST = 1; OP1 = 32'b1_10001111_11000000000000000000000;  OP2 = 32'b0_10011111_11000000000000000000000; exce_in = 0; @(posedge CLK);
		 @(posedge CLK);
		// Wait 100 ns for global reset to finish
		$finish;

	end
// ============================================================================================== //     

//=====================================  Real value Presentation  ========================================== //
// ****************************************************
	//variable definition
	real real_OP1, real_OP2;
	real real_result; 

// ****************************************************
	// ****
	// ****
	always @ OP1 real_OP1 = floatToReal(OP1, WIDTH_exp, WIDTH_mat);  
	always @ OP2 real_OP2 = floatToReal(OP2, WIDTH_exp, WIDTH_mat);
	always @ result real_result = floatToReal(result, WIDTH_exp, WIDTH_mat); 
//========================================================================================================== //

endmodule

