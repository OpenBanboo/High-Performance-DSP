`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 		 VLSI Design and Test Lab
// Engineer: 		 Fang
// Create Date:    08:43:01 04/16/2014 
// Module Name:    RAM_ar 
// Project Name: 	 RAM
// Description: 	 RAM with asynchronous read, synchronous write.
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//////////////////////////////////////////////////////////////////////////////////
module RAM_ar 
		 #(parameter eleNum = 8, dataWidth = 6)
		  (input  CLK, RST, we,							// we: write enable	
		   input  [addWidth-1:0] addr,
			input  [dataWidth-1:0] din,
			output [dataWidth-1:0] dout
		  );

function integer log2;
	input integer n;
	begin
		log2 = 0;
		while (2**log2<n) begin
			log2 = log2 + 1;
		end
	end
endfunction

localparam addWidth = log2(eleNum);
		  
reg [dataWidth-1:0] RAM [2**addWidth-1:0];
integer i;

	always @ (posedge CLK) begin
		if(!RST) begin
			for(i=0; i < 2**addWidth; i=i+1 )
				RAM[i] <= 0;
		end
		else if (we) RAM[addr] <= din;
	end

		assign dout = RAM[addr];
	
endmodule
