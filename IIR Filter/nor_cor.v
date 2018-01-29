`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 		 VLSI Design and Test Lab
// Engineer: 		 Christian Lin
// Create Date:    16:46:29 04/26/2014 
// Design Name:    
// Module Name:    nor_cor 
// Project Name:   Floating-point IIR Filter
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
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
module nor_cor
				#(	parameter 					WIDTH = 49,			//width of the input
													WIDTH_mat = 23,	//width of matissa
													WIDTH_exp = 8)		//width of exponent
				 (
					input 						CLK, RST,			//Clock and negative reset
					input 						sign_L,				//Sign signal with a larger magnitude two operands
					input [WIDTH-1:0]			mat_in,				//the matissa from the execution stage
					input [WIDTH_exp-1:0] 	exp,					//exponent part of the larger operation
					input 						clear,				//clear is used when two operators are same
					input 						exce_in,				//exception in
					output reg					exce_out,			//exception out
					output reg [WIDTH_mat+WIDTH_exp:0] result //final result
				  );

/////////////////////////////////  ----- Function Deginition -----  ////////////////////////////////////////
function integer log2;				// calculate log2(n)
	input integer n;					// always be used to calculate the minimal address bits of a signal array
	begin
		log2 = 0;
		while (2**log2<n) begin
			log2 = log2 + 1;
		end
	end
endfunction
///////////////////////////////////////////////////////////////////////////////////////////////////////////

// ===========------- Find the fisrt one of the processed mantissa from left to right --------========== //

// ************************** Inner regisets and parameters definition ********************************* //
integer counter;							//used for for looping
localparam WIDTH_poi = log2(WIDTH);	//find the efficient bitwith of the pointer used below
reg [WIDTH_poi-1:0] pointer;			//used for pointing to the first one on the left
reg [WIDTH-1	 :0] tmp_mat;			//store the mantissa value after normalizing but before rounding
reg [WIDTH_exp-1:0] tmp_exp;			//Store the exponent value after normalizing
reg [WIDTH_exp-1:0] tmp_exp_r;		//Store the exponent value after rounding
reg [WIDTH_exp-1:0] tmp_r_exp;		//Store the exponent value after normalizing
reg [WIDTH-1    :0] sf_mat;			//Store the mantissa value after shifting 
reg [WIDTH_mat  :0] tmp_mat_r;		//Store the mantissa value after rounding, width is 1 bit more than final, 
												//1 bit larger than tmp_mat, for deducing the rounding bit
reg [WIDTH_mat+1:0] tmp_mat_s;		
reg exception;								//inner exception signal			
// ***************************************************************************************************** //

// ===============================Normalizing & Rounding====================================== //
always @* begin
// This is a priority decoder for finding the first one in the mantissa on the left	
	for (counter=WIDTH-1; counter >= 0; counter = counter-1)
		if (mat_in[WIDTH-(counter+1)]) pointer = counter;
//	---------------------------------------------------------------------------------------------------	
// Normailizing the mantissa	
	if (pointer==0) begin
		tmp_exp = exp + 1;			//If the first bit of the mantissa is 1, add 1 to the exponent value
		if(tmp_exp<exp)				//there is a overflow, exception out set to 1
			exception = 1;
		else
			exception = 0;
		tmp_mat  = mat_in;			
			end 
	else if(pointer==1) begin			//If there is no overflow of the mantissa part
		tmp_exp = exp;						//no change for the exponent
		tmp_mat  = mat_in << 1;
		exception = 0;
	end
	else if(pointer>1) begin			//the mantissa value is smaller than the 1
		tmp_exp = exp - (pointer - 1);
		if(tmp_exp>exp)					//there is a overflow, exception out set to 1
			exception = 1;					//Overflow detection		
		else
			exception = 0;
		tmp_mat = mat_in << pointer;
	end
//	-----------------------------------------------------------------------------------------------------

// Roudning (round to nearnest)
	if (tmp_mat[WIDTH-(WIDTH_mat+2)]==1'b1) begin						 //[A] if the "round" == 1
		if (tmp_mat[WIDTH-(WIDTH_mat+2)-1:0]!=0) begin					 //[B] "sticky" == 1
			tmp_mat_r = tmp_mat[WIDTH-1:WIDTH-(WIDTH_mat+1)] + 1;		 // the width of tmp_mat_r is one larger WIDTH_mat
			// ** if there is an overflow on the mantissa, change it back and add 1 to the exponent
			if (tmp_mat_r<tmp_mat[WIDTH-1:WIDTH-(WIDTH_mat+1)]) begin // [C] out of bond, overflow happens
				tmp_exp_r = tmp_exp + 1;										 // exponent add 1
				tmp_mat_r = 0;
				tmp_mat_r[WIDTH_mat] = 1'b1;
				// ** evaluate there is an overflow on the exponent, if so, exception out set to 1
				if (tmp_exp_r==0) 
					exception = 1;													 // set exception to 1
				else
					exception = 0;
			end 																		 
			else begin
				tmp_exp_r = tmp_exp;												 // no change for exponent
			end																		 // [C]
			// **
		end 																			 // [B]
		else begin
			tmp_mat_r = tmp_mat[WIDTH-1:WIDTH-(WIDTH_mat+1)];
			tmp_exp_r = tmp_exp;
		end
	end 																				 
	else begin
		tmp_mat_r = tmp_mat[WIDTH-1:WIDTH-(WIDTH_mat+1)];
		tmp_exp_r = tmp_exp;
	end																				 // [A]
//	-----------------------------------------------------------------------------------------------------
end																	

// =================================================================================================== //

//	-----------------------------------------------------------------------------------------------------
// Output
always @ * begin
	if(!RST) begin
		result <= 0;
		exce_out <= 0;
	end
	else if ((exce_in==1'b1)||(exception==1'b1)) begin					// there is a exception in
		exce_out <= 1'b1;
		result 	<= 0;
	end
	else if (clear) begin	//positive clear from the comparison between two operands in the swap module
		exce_out <= 0;
		result 	<= 0;
	end
	else
		exce_out <= 0;
		result <= {sign_L, tmp_exp_r, tmp_mat_r[WIDTH_mat-1:0]};
end
//	-----------------------------------------------------------------------------------------------------

endmodule
