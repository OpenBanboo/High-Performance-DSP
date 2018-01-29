`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 		 VLSI Design and Test Lab
// Engineer: 		 Christian Lin
// 
// Create Date:    17:58:23 04/27/2014 
// Design Name: 	 floating point adder (parametric)
// Module Name:    adder_float 
// Project Name: 	 Floating point IIR Filter (Direct form 2)
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
////////////////////////////////////////////////////////////////////////////////////////////////////////////
module adder_float
				#(parameter 		  WIDTH = 32,				//The total bits of the inputs
										  WIDTH_exp = 8,			//The bitwidth of the exponent part
										  WIDTH_mat = 23,			//The bitwidth of the mantissa part
										  WIDTH_round = 24		//The bitwidth used for estimation in rounding	
										      //Notice that this parameter would not used in floating poing multiplier
										  )			
				( input 				  CLK,						//clock				 
										  RST,						//negative reset
				  input [WIDTH-1:0] OP1,						//input1
										  OP2,						//input2
				  input 			 exce_in,						//execption in signal
				  output 	 	exce_out,						//exception out
				  output [WIDTH_mat+WIDTH_exp:0] result); //final width = mantissa part + exponent part + sign bit


// ======================================  Module Instiation  =============================================//

// ----------------------------------------    swap    --------------------------------------------------- //
// ***************************
wire [WIDTH-1:0] OP_L;			//inner wire to store the input with the larger magnitude
wire [WIDTH-1:0] OP_S;			//inner wire to store the input with the smaller magnitude
wire meq;							//The signal will be on when the two operand magnitudes is equal to each other
wire eqn; 							//eqn is on when OP1 = -OP2
// ***************************
swap 									//module type
	 #(.WIDTH(WIDTH),				//parameters setting, almost the same with following modules
		.WIDTH_exp(WIDTH_exp),	//The bitwidth of the exponent part
		.WIDTH_mat(WIDTH_mat))  //The bitwidth of the mantissa part
Fang_swap (							//Module name
		.CLK(CLK), 					//clock
		.RST(RST), 					//negative reset
		.OP1(OP1), 					//input1
		.OP2(OP2), 					//input2
		.OP_L(OP_L), 				//The operand with the larger magnitude
		.OP_S(OP_S), 				//The operand with the smaler magnitude
		.meq(meq), 					//The signal will be on when the two operand magnitudes is equal to each other
		.eqn(eqn)					//eqn is on when OP1 = -OP2
	);
// ------------------------------------------------------------------------------------------------------- //
// ----------------------------------------    align    -------------------------------------------------- //
// ***************************
wire [(WIDTH_mat+1+WIDTH_round)-1:0] mat_L;			//The larger mantissa after aligning
wire [(WIDTH_mat+1+WIDTH_round)-1:0] mat_S;			//The smaller mantissa after aligning
wire [WIDTH_exp-1:0] 		  exp;						//Exponent fild of the larger operand
// The bitwidth of the two mantissa output is chose as twice as the input bitwidth+1
// due to the unpredictable exponent difference and the predictable limit of shifting
// ***************************
align 										//module type
	 #(.WIDTH(WIDTH),						//parameters setting, almost the same with following modules
		.WIDTH_exp(WIDTH_exp),			//The bitwidth of the exponent part
		.WIDTH_mat(WIDTH_mat),			//The bitwidth of the mantissa part
		.WIDTH_round(WIDTH_round)		//The bitwidth used for estimation in rounding
		)  

Fang_align 
	(
		.CLK(CLK), 
		.RST(RST), 
		.OP_L(OP_L), 
		.OP_S(OP_S), 
		.exp(exp), 
		.mat_L(mat_L), 					// output 1
		.mat_S(mat_S)						// output 2
	);
// ------------------------------------------------------------------------------------------------------- //

// ----------------------------------------    add_sub    ------------------------------------------------ //
// ***************************
localparam WIDTH_as  = WIDTH_mat+1+WIDTH_round;	// input width of this add_sub module
localparam WIDTH_OUT = WIDTH_as+1;					// output of this module is 1 bit more than input
wire 		  [WIDTH_OUT-1:0] mat_in;		    		// The larger mantissa after aligning
// ***************************
add_sub 								// module type
	 #(.WIDTH(WIDTH_as))			// parameters setting, almost the same with following modules
Fang_addsub (						// module name
		.S1(OP_L[WIDTH-1]),		// Warning:  !!!!! Should add buffer between when using pipeline mode !!!!! <==============!// 
		.S2(OP_S[WIDTH-1]), 		// Warning:  !!!!! Should add buffer between when using pipeline mode !!!!! <==============!// 
		.CLK(CLK), 					//	Clock
		.RST(RST), 					// negative reset
		.mat_L(mat_L), 			// input 1
		.mat_S(mat_S), 			// input 2
		.dout(mat_in)				// output to next stage's input mat_in
	);
// ------------------------------------------------------------------------------------------------------- //
// ----------------------------------------    nor_cor    ------------------------------------------------ //
// ***************************
nor_cor
	#( 
		.WIDTH(WIDTH_OUT),		 // The output of the module add_sub is one bit more than that of input
		.WIDTH_mat(WIDTH_mat),	 // mantissaa bitwidth
		.WIDTH_exp(WIDTH_exp)	 // exponent bitwidth
		)
Fang_nor_cor (
		.CLK(CLK), 
		.RST(RST), 
		.sign_L(OP_L[WIDTH-1]),	 // Warning:  !!!!! Should add buffer between when using pipeline mode !!!!! <==============!// 
		.mat_in(mat_in), 
		.exp(exp), 					 // From output of module
		.clear(eqn),				 // From output eqn of the module swap for triggering the zero when two inputs are negative to each other
		.exce_in(exce_in), 		 // Warning:  !!!!! Should add buffer between when using pipeline mode !!!!! <==============!//		
		.exce_out(exce_out), 	 // exception signals out
		.result(result)			 // Final signal
	);
// -------------------------------------------------------------------------------------------------------- //
endmodule
