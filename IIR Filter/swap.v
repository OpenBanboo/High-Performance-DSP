`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 		 VLSI Design and Test Lab
// Engineer: 		 Christian Lin	
// 
// Create Date:    14:18:50 04/25/2014 
// Design Name: 	 Swaper for floating point calculation
// Module Name:    swap 
// Project Name: 	 floating point arithmetic
// Target Devices: 
// Tool versions:
//-------------------------------------------------------------------------------- 
// Description: 
//			Swaping should be done at the beginning of the whole calculation.  
//			The function of this block is to distinguish the magnitude of the two inputs. 
//			It has four inputs: OP1, OP2, CLK and RST and two outputs: OP_L and OP_S. 
//			The operand with the larger magnitude will be put on OP_L else will be put on OP_S. 
//			The OP1 and OP2 are parametric with their exponent bitwidth and mantissa bitwidth. 
// Dependencies: 
//-------------------------------------------------------------------------------- 
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module swap
				#(parameter 		  WIDTH = 32,			//The total bits of the inputs
										  WIDTH_exp = 8,		//The bitwidth of the exponent part
										  WIDTH_mat = 23)		//The bitwidth of the mantissa part
				( input 				  CLK,					//clock				 
										  RST,					//negative reset
				  input [WIDTH-1:0] OP1,					//input1
										  OP2,					//input2
				  output reg 
						  [WIDTH-1:0] OP_L,					//The operand with the larger magnitude
										  OP_S,					//The operand with the smaler magnitude
				  output reg		  meq,					//The signal will be on when the two 
																	//operand magnitudes is equal to each other
										  eqn					//eqn is on when OP1 = -OP2
										  );						

always @ * begin
	if(!RST) begin
		meq <= 0;		//Reset will remain the same input as its input
		eqn <= 0;		
		OP_L <= OP1;	//if the exponent part of OP1 is larger than the OP2
		OP_S <= OP2;	//The operand with the larger magnitude is OP1
	end else if(OP1[WIDTH-2:WIDTH-2-(WIDTH_exp-1)]>OP2[WIDTH-2:WIDTH-2-(WIDTH_exp-1)]) begin
		meq <= 0;		//The magnitude of the two operands are not equal, meq set to 0
		eqn <= 0;		//OP1 != -OP2
		OP_L <= OP1;	//if the exponent part of OP1 is larger than the OP2
		OP_S <= OP2;	//The operand with the larger magnitude is OP1
	end else if (OP1[WIDTH-2:WIDTH-2-(WIDTH_exp-1)]<OP2[WIDTH-2:WIDTH-2-(WIDTH_exp-1)]) begin
		meq <= 0;		//The magnitude of two operands are not equal, meq set to 0
		eqn <= 0;		//OP1 != -OP2
		OP_L <= OP2;	//if the exponent part of OP2 is larger than the OP1
		OP_S <= OP1;	//The operand with the larger magnitude is OP2
	//-- executing till here means the exponent part of the two floating point number are the same
	end else if (OP1[(WIDTH-2-WIDTH_exp):0]>OP2[(WIDTH-2-WIDTH_exp):0]) begin
		meq <= 0;		//The two operands are not equal, meq set to 0
		eqn <= 0;		//OP1 != -OP2
		OP_L <= OP1;	//if the exponent part of OP1 is larger than the OP2
		OP_S <= OP2;	//The operand with the larger magnitude is OP1	
	end else if (OP1[(WIDTH-2-WIDTH_exp):0]<OP2[(WIDTH-2-WIDTH_exp):0]) begin
		meq <= 0;		//The magnitude of the two operands are not equal, meq set to 0
		eqn <= 0;		//OP1 != -OP2
		OP_L <= OP2;	//if the exponent part of OP2 is larger than the OP1
		OP_S <= OP1;	//The operand with the larger magnitude is OP2
	//-- executing till here means the exponent and the mantissa of the two floating point number are the same
	end else if (OP1[WIDTH-1]==OP2[WIDTH-1]) begin
		meq <= 1;		//The magnitude of the two operands are equal, meq set to 0
		eqn <= 0;		//OP1 != -OP2
		OP_L <= OP1;	//if the exponent part of OP1 is larger than the OP2
		OP_S <= OP2;	//The operand with the larger magnitude is OP1	
	end else begin
		meq <= 1;		//The magnitude of the two operands are equal, meq set to 0
		eqn <= 1;		//OP1 == -OP2
		OP_L <= OP1;	//if the exponent part of OP1 is larger than the OP2
		OP_S <= OP2;	//The operand with the larger magnitude is OP1	
	end

end

endmodule
