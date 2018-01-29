`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 	VLSI Design and Test Lab
// Engineer: 	Christian
// 
// Create Date:    13:08:17 04/25/2014 
// Design Name: 	 Parametric Comparater
// Module Name:    comp 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//					Comparison is one of the most basic logic which is used very frequently. 
//					This module works as comparing two unsigned inputs with parametric widths 
//					and resulting three 1-bit outputs, each of which presents whether input A 
//					is larger than B, equals to B or smaller than B, accordingly.
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module comp 
		#(parameter SIZE = 4)				//The bidwidth of the two inputs
		( input [SIZE-1:0] A,				//Input A
								 B,				//Input B
		  input 			  RST,				//Negative reset
		  input 			  CLK,				//Clock input for pipeline use
		  output reg ag, eq, bg);			//Three output 

always @ * begin
	if (!RST) begin
		ag <= 0;					//Reset everything to zero
		eq <= 0;
		bg <= 0;		
	end else if (A>B) begin	//If A>B, the signal ag = 1 meaning A is greater than B
		ag <= 1;					//Other signals should be set to zero
		eq <= 0;
		bg <= 0;
	end else if (A==B) begin
		ag <= 0;					//If A=B, the signal eq = 1 meaning A is equal to B
		eq <= 1;					//Other signals should be set to zero
		bg <= 0;		
	end else begin 
		ag <= 0;					//If B>A, the signal bg = 1 meaning B is larger that A
		eq <= 0;					//Other signals should be set to zero
		bg <= 1;			
	end
end


endmodule
