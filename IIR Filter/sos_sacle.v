`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:  VLSI Design and Test Lab
// Engineer: Fang Lin
// 
// Create Date:    14:14:48 04/04/2014 
// Design Name: 
// Module Name:    sos 
// Project Name:   second order system
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
//////////////////////////////////////////////////////////////////////////////////////////////////
module sos_sacle  
					 #( parameter TAPSIZE = 3, 		//The number of the taps of the FIR
									  WI = 5,		//Input bitwidth for Integer part
									  WF = 11)		//Input bitwidth for Fraction part
					  (
						 input signed [WI+WF-1:0] din,		//input din
						 input CLK, nReset,						//clock and Synchronous reset, 
																		//active-low. Clears all registers 
																		//which is negative trigger
						 input CE,									//active-high clock enable
						 output signed [WI*3+3+WF*3-1:0] dout,		//output dout
						 output OVF_f0, OVF_f1, OVF_b0, OVF_b1
					  );

//Inner wire
wire signed [WI+WF-1:0] x1, x2, xb0, x1b1, x2b2, x1b1x2b2, xb0x1b1x2b2;	
wire signed [WI+WF-1:0] y, y1, y2, y1_ma1, y2_ma2, y2_ma2_y1_ma1;	
wire CLK_g;
	 
reg  [WI+WF-1:0] b_mem [TAPSIZE-1:0]; 		//The vector of the Coefficients b
reg  [WI+WF-1:0] a_mem [TAPSIZE-1:0]; 		//The vector of the Coefficients a

//////////////////////////////Initialization Modules/////////////////////////////////////////////

////////////////////////////---------Clock gating------------------------////////////////////////
assign CLK_g = CLK&CE;

//////////////////////////////-----Forward Part-----/////////////////////////////////////////////
register #(.N(WI+WF)) reg_f1 ( .d(din), .CLK(CLK_g), .RST(nReset), .q(x1));

register #(.N(WI+WF)) reg_f2 ( .d(x1), .CLK(CLK_g), .RST(nReset), .q(x2));

sMult #(.WI1(WI), 	 .WF1(WF),  .WI2(WI), .WF2(WF),  .WIO(WI*2), .WFO(WF*2)) mul_f0		
		 (.CLK(CLK_g), .RST(nReset), .in1(din), .in2(b_mem[0]), .out(xb0) );
		 
sMult #(.WI1(WI), 	 .WF1(WF),  .WI2(WI), .WF2(WF),  .WIO(WI*2), .WFO(WF*2)) mul_f1		
		 (.CLK(CLK_g), .RST(nReset), .in1(x1), .in2(b_mem[1]), .out(x1b1) );

sMult #(.WI1(WI), 	 .WF1(WF),  .WI2(WI), .WF2(WF),  .WIO(WI*2), .WFO(WF*2)) mul_f2		
		 (.CLK(CLK_g), .RST(nReset), .in1(x2), .in2(b_mem[2]), .out(x2b2) );

fixpoint_adder #( .WI1(WI*2), .WF1(WF*2), .WI2(WI*2+1), .WF2(WF*2), .WIO(WI*2+2), .WFO(WF*2+2)) add_f0
		 (.CLK(CLK_g),.RST(nReset),  .in1(xb0), .in2(x1b1x2b2), .out(xb0x1b1x2b2), .OVF(OVF_f0));

fixpoint_adder #( .WI1(WI*2), .WF1(WF*2), .WI2(WI*2), .WF2(WF*2), .WIO(WI*2+1), .WFO(WF*2)) add_f1
		 (.CLK(CLK_g),.RST(nReset),  .in1(x1b1), .in2(x2b2), .out(x1b1x2b2), . OVF(OVF_f1));

//////////////////////////////-----Backward Part-----///////////////////////////////////////////

register #(.N(WI*3+WF*3+1)) reg_b1 ( .d(dout), .CLK(CLK_g), .RST(nReset), .q(y1));

register #(.N(WI*3+WF*3+1)) reg_b2 ( .d(y1), .CLK(CLK_g), .RST(nReset), .q(y2));

sMult #(.WI1(WI*2+3), 	 .WF1(WF*2),  .WI2(WI), .WF2(WF),  .WIO(WI*3+3), .WFO(WF*3)) mul_b0		
		 (.CLK(CLK_g), .RST(nReset), .in1(y), .in2(a_mem[0]), .out(dout) );
		 
sMult #(.WI1(WI*3+3), 	 .WF1(WF*3),  .WI2(WI), .WF2(WF),  .WIO(WI*4+3), .WFO(WF*4)) mul_b1		
		 (.CLK(CLK_g), .RST(nReset), .in1(y1), .in2(a_mem[1]), .out(y1_ma1) );

sMult #(.WI1(WI*3+3), 	 .WF1(WF*3),  .WI2(1), .WF2(WF),  .WIO(WI*4+3), .WFO(WF*4)) mul_b2		
		 (.CLK(CLK_g), .RST(nReset), .in1(y2), .in2(a_mem[2]), .out(y2_ma2) );

fixpoint_adder #( .WI1(WI*2+2), .WF1(WF*2), .WI2(WI*4+3), .WF2(WF*4), .WIO(WI*2+3), .WFO(WF*2)) add_b0
		 (.CLK(CLK_g),.RST(nReset),  .in1(x1b1x2b2), .in2(y2_ma2_y1_ma1), .out(y), .OVF(OVF_b0));

fixpoint_adder #( .WI1(WI*4+3), .WF1(WF*4), .WI2(WI*4+3), .WF2(WF*4), .WIO(WI*4+3), .WFO(WF*4)) add_b1
		 (.CLK(CLK_g),.RST(nReset),  .in1(y1_ma1), .in2(y2_ma2), .out(y2_ma2_y1_ma1), .OVF(OVF_b1));


endmodule