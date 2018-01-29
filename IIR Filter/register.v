`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:40:16 02/15/2014 
// Design Name: 
// Module Name:    register 
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
module register #(parameter N = 16) 
       (input signed [N-1:0] d, input CLK, RST,
		  output reg signed [N-1:0] q);
	
	always @ (posedge CLK) begin 
		if(!RST)	//negative reset
			q <= 0;
		else
			q <= d;
	end
endmodule
