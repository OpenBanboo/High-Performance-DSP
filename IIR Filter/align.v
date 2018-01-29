`timescale 1ns / 1ps
/////////////////////////////////////////////////////////////////////////////////////////////////////////
// Company: 		 VLSI Design and Test Lab
// Engineer: 		 Christian Lin
// 
// Create Date:    10:39:16 04/26/2014 
// Design Name: 	 Align module for floating arithmetic
// Module Name:    align 
// Project Name: 	 Floating-point IIR Filter Design
// Description: 
// 					 Align module is used to align the two mantissas of the two operands.  
//						 Inside the module, there is a function to provide a few guard bits to 
//						 the right for better precision when shifting the smaller mantissa to 
//						 the right (more details in the procedures of the addition arithmetic). 
//						 The guard bits can be used for rounding to nearest in the addition arithmetic.
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////
module align 
				#(parameter 		  		WIDTH = 32,			//The total bits of the inputs
												WIDTH_exp = 8,		//The bitwidth of the exponent part
												WIDTH_mat = 23,	//The bitwidth of the mantissa part
												WIDTH_round = 30  //The bitwidth used for estimation in rounding
												)	
				( input 				  		CLK,					//clock				 
												RST,					//negative reset
				  input [WIDTH-1:0] 		OP_L,					//input with the larger magnitude
												OP_S,					//input with the smaller magnitude
				  output reg 
						  [WIDTH_exp-1:0] exp,					//Exponent fild of the larger operand
				  output reg		  
						  [(WIDTH_mat+1+WIDTH_round)-1:0] 
												mat_L,				//The larger matissa after aligning 
												mat_S					//The smaller matissa after aligning
																		//The bitwidth of the two mantissa output
																		//is chose as twice as the input bitwidth+1
																		//due to the unpredictable exponent difference
																		//and the predictable limit of shifting
				);
// ===========---------------- Calculate the difference between two expoents ---------------========== //
reg [WIDTH_exp-1:0] dif_exp;									//difference between two exponents
always @* dif_exp = OP_L[WIDTH-2:WIDTH-2-(WIDTH_exp-1)] - OP_S[WIDTH-2:WIDTH-2-(WIDTH_exp-1)];
																		//[WIDTH-2:WIDTH-2-(WIDTH_exp-1)] is the filed
																		//of exponent in the operands
// =================================================================================================== //

// ===========---------------- Shifting the mantissa according to difference ---------------========== //
// For larger matissa, append the 1 at the begining following by the mantissa part of the operand and the zeros
// For smaller matissa, execute the same with the larger counterpart then shift right "dif_exp" bits
always @* begin 													//Use(posedge CLK) replace * when pipelined
	if (!RST) begin 												//negative reset
			mat_L <= 0;				
			mat_S <= 0; 
			exp <= 0; 												//export the exponent of the larger operand for
	end else begin
			mat_L <= {1'b1, {OP_L[(WIDTH_mat-1):0]}, {(WIDTH_round){1'b0}}};				
			mat_S <= {1'b1, {OP_S[(WIDTH_mat-1):0]}, {(WIDTH_round){1'b0}}} >> dif_exp; 
			exp <= OP_L[WIDTH-2:WIDTH-2-(WIDTH_exp-1)]; 	//export the exponent of the larger operand for
	end																//using in the addition or subtraction part
end																	
// =================================================================================================== //



endmodule
