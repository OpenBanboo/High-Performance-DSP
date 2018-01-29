`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:08:21 04/26/2014 
// Design Name: 
// Module Name:    add_sub 
// Project Name: 
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
//////////////////////////////////////////////////////////////////////////////////
module add_sub 
		   # (parameter 
						WIDTH = 48,							//width of the input 
						WIDTH_OUT = WIDTH+1				//width of the output
				)
			  (
				input S1,S2,								//sign bit of the two operands of the floating-point adder
				input CLK, RST, 							//Clock and negtive reset
				input [WIDTH-1 : 0] mat_L, 			//input 1 is mantissa with larger value
				input [WIDTH-1 : 0] mat_S, 			//input 2 is mantissa with smaller value
				output reg [WIDTH_OUT-1 : 0] dout 	//output of the calculation
				);

// ===========------------ Detecting whether signs of the two operands are the same--------========== //

always @* begin
	if (!RST) dout <= 0;
	else if (S1^S2) begin 								//If the signs are not the same, subtract both matissas
		dout <= mat_L - mat_S;
	end else begin 
		dout <= mat_L + mat_S;							//if two signs are the same, add both matissas
	end																
end																	
// =================================================================================================== //

endmodule
