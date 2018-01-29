`timescale 1ns / 1ps
`define X_trc (WIO>=2)? (WIO-2+frcL) : frcL
`define WI_scale 5
`define WF_scale 11
/////////////////////////////////////////////////////////////////////////////////////////////////
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
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
module sos_scaled 
					#( parameter TAPSIZE = 3, 								//The number of the taps of the FIR
									  WI = 5,									//Input bitwidth for Integer part
									  WF = 11,									//Input bitwidth for Fraction part
									  WIO = 23,									//Required integer bits of the output
									  WFO = 44,
									  WIS = 5,
									  WFS = 11
													)								//Required fractional bits of the output
					  
					  (
						 input signed [WI+WF-1:0] din,					//input din
						 input signed [WIS+WFS-1:0] fac_scale,			//input scaling factor
						 input CLK, nReset,									//clock and Synchronous reset, 
																					//active-low. Clears all registers 
																					//which is negative trigger
						 input CE,												//active-high clock enable
						 output reg signed  [WIO+WFO-1:0] dout,		//output dout
						 output OVF_f0, OVF_f1, OVF_b0, OVF_b1
					  );

localparam intL = WI+WIS*3+3;												//integer length of correct results
localparam frcL = WF+ WFS*3;												//fraction length of correct results

//Inner wire
wire signed [WI+WF-1:0] x1, x2;								//Values of the two registers' outputs of the forward part
wire signed [WI+WIS+WF+WFS-1:0] xb0, x1b1, x2b2;		//Values of the outputs of three multipliers' outputs of the forward part
wire signed [WI+WIS+WF+WFS:0] x1b1x2b2;					//Values of the adder_f1
wire signed [WI+WIS+WF+WFS+1:0] xb0x1b1x2b2;				//Values of the adder_f0
wire signed [WI+WIS+WF+WFS+2:0] y; 							//Values of the adder_b0 of the backward part

wire signed [WI+WIS*2+WF+WFS*2+2:0] y1, y2;				//Values of the two registers' output of the backward part
wire signed [WI+WIS*3+WF+WFS*3+2:0] y1_ma1, y2_ma2;	//Values of the outputs of three multipliers' outputs of the backward part

wire signed [WI+WIS*3+WF+WFS*3+3:0] y2_ma2_y1_ma1;    //Values of the adder_b1
wire signed [WI+WIS*2+WF+WFS*2+2:0] tmp;					
wire signed [WI+WIS*3+WF+WFS*3+2:0] tmp_scaled;			//temporary values after the scaling factors

//wire CLK_g;

//wire signed [WI+WF-1:0] din_delay;

reg  signed [WIO-1 : 0] outI;													//The integer part of the output
reg  signed [WFO-1 : 0] outF;													//The fractional part of the output	 


reg  signed [WIS+WFS-1:0] b_mem [TAPSIZE-1:0]; 								//The vector of the Coefficients b
reg  signed [WIS+WFS-1:0] a_mem [TAPSIZE-1:0]; 								//The vector of the Coefficients a

/////////////////////////////////  Initialization Modules/  ////////////////////////////////////////////

////////////////////////////  ---------Clock gating------------------------  ///////////////////////////
assign CLK_g = CLK&CE; 			//warning: has not been used now!
assign din_delay = ~(~din);		//Implementing a buffer to delay the input due to the clock gate delayed the clock


/////////////////////////////////  --------Forward Part--------  /////////////////////////////////////////////
register #(.N(WI+WF)) reg_f1 ( .d(din), .CLK(CLK_g), .RST(nReset), .q(x1));

register #(.N(WI+WF)) reg_f2 ( .d(x1), .CLK(CLK_g), .RST(nReset), .q(x2));


sMult #(.WI1(WI), .WF1(WF),  .WI2(WIS), .WF2(WFS),  .WIO(WI+WIS), .WFO(WF+WFS)) mul_f0		
		 (.CLK(CLK_g), .RST(nReset), .in1(din), .in2(b_mem[0]), .out(xb0) );
		 
sMult #(.WI1(WI), 	 .WF1(WF),  .WI2(WIS), .WF2(WFS),  .WIO(WI+WIS), .WFO(WF+WFS)) mul_f1		
		 (.CLK(CLK_g), .RST(nReset), .in1(x1), .in2(b_mem[1]), .out(x1b1) );

sMult #(.WI1(WI), 	 .WF1(WF),  .WI2(WIS), .WF2(WFS),  .WIO(WI+WIS), .WFO(WF+WFS)) mul_f2		
		 (.CLK(CLK_g), .RST(nReset), .in1(x2), .in2(b_mem[2]), .out(x2b2) );

fixpoint_adder #( .WI1(WI+WIS), .WF1(WF+WFS), .WI2(WI+WIS+1), .WF2(WF+WFS), .WIO(WI+WIS+2), .WFO(WF+WFS)) add_f0
		 (.CLK(CLK_g),.RST(nReset),  .in1(xb0), .in2(x1b1x2b2), .out(xb0x1b1x2b2), .OVF(OVF_f0));

fixpoint_adder #( .WI1(WI+WIS), .WF1(WF+WFS), .WI2(WI+WIS), .WF2(WF+WFS), .WIO(WI+WIS+1), .WFO(WF+WFS)) add_f1
		 (.CLK(CLK_g),.RST(nReset),  .in1(x1b1), .in2(x2b2), .out(x1b1x2b2), . OVF(OVF_f1));

/////////////////////////////////  --------Backward Part--------  ///////////////////////////////////////////

register #(.N(WI+WIS*2+WF+WFS*2+3)) reg_b1 ( .d(tmp), .CLK(CLK_g), .RST(nReset), .q(y1));
register #(.N(WI+WIS*2+WF+WFS*2+3)) reg_b2 ( .d(y1), .CLK(CLK_g), .RST(nReset), .q(y2));



sMult #(.WI1(WI+WIS+3), 	 .WF1(WF+WFS),  .WI2(WIS), .WF2(WFS),  .WIO(WI+WIS*2+3), .WFO(WF+WFS*2)) mul_b0		
		 (.CLK(CLK_g), .RST(nReset), .in1(y), .in2(a_mem[0]), .out(tmp) );
		 
sMult #(.WI1(WI+WIS*2+3), 	 .WF1(WF+WFS*2),  .WI2(WIS), .WF2(WFS),  .WIO(WI+WIS*3+3), .WFO(WF+WFS*3)) mul_b1		
		 (.CLK(CLK_g), .RST(nReset), .in1(y1), .in2(a_mem[1]), .out(y1_ma1) );

sMult #(.WI1(WI+WIS*2+3), 	 .WF1(WF+WFS*2),  .WI2(WIS), .WF2(WFS),  .WIO(WI+WIS*3+3), .WFO(WF+WFS*3)) mul_b2		
		 (.CLK(CLK_g), .RST(nReset), .in1(y2), .in2(a_mem[2]), .out(y2_ma2) );

fixpoint_adder #( .WI1(WI+WIS+2), .WF1(WF+WFS), .WI2(WI+WIS*3+4), .WF2(WF+WFS*3), .WIO(WI+WIS+3), .WFO(WF+WFS)) add_b0
		 (.CLK(CLK_g),.RST(nReset),  .in1(xb0x1b1x2b2), .in2(y2_ma2_y1_ma1), .out(y), .OVF(OVF_b0));

fixpoint_adder #( .WI1(WI+WIS*3+3), .WF1(WF+WFS*3), .WI2(WI+WIS*3+3), .WF2(WF+WFS*3), .WIO(WI+WIS*3+4), .WFO(WF+WFS*3)) add_b1
		 (.CLK(CLK_g),.RST(nReset),  .in1(y1_ma1), .in2(y2_ma2), .out(y2_ma2_y1_ma1), .OVF(OVF_b1));


/////////////////////////////////  ---------- Scaling ----------  ///////////////////////////////////////////
sMult #(.WI1(WI+WIS*2+3), .WF1(WF+WFS*2),   .WI2(WIS),  .WF2(WFS),  .WIO(WI+WIS*3+3), .WFO(WF+WFS*3)) mul_scale		
		 (.CLK(CLK_g),  .RST(nReset), .in1(tmp),  .in2(fac_scale), .out(tmp_scaled) );



//--------------------adjusting the bitwidth for the fractional part-------------------------------------------------------//
always  @* begin

	if (WFO >= frcL)						//append 0s to the lsb bits
			outF = {tmp_scaled[frcL-1:0] , {(WFO-frcL){1'b0}}};
	else										//WFO<(WF1+WF2): Truncate bits from the LSB bits
			outF = tmp_scaled[frcL-1 : frcL-WFO];

end
//-------------------------------------------------------------------------------------------------------------------------//

//--------------------adjusting the bitwidth for the integer part----------------------------------------------------------//
always @* begin
	if (WIO>=intL)								//sign extend the integer part
			outI = {{(WIO-intL){tmp_scaled[intL+frcL-1]}}, tmp_scaled[intL+frcL-1:frcL]};
	else	begin									//WIO<(WI1+WI2)
		if (WIO==1)
			outI = tmp_scaled[intL+frcL-1];
		else
			//outI = `X_trc;
		   outI = {tmp_scaled[intL+frcL-1], tmp_scaled[`X_trc:frcL]};					
	end
end
//----------------------------------------------------------------------------------------------------------------------------

//--------------------registering the output----------------------------------------------------------------------------------
always @* 				//(posedge CLK) //if wanna a registered multiplier decommented
	if (!nReset) dout <= 0;				 //negative reset
	else 	
		dout <= {outI [WIO-1:0], outF [WFO-1:0]};


endmodule
