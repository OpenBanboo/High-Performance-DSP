`timescale 1ns / 1ps
`define X_trc (WIO>=2)? (WIO-2+frcL) : frcL
`define WI_scale 5
`define WF_scale 11
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:21:22 04/12/2014 
// Design Name: 
// Module Name:    IIR_normal 
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
module IIR_normal 
				
				#( parameter 
		   					  WI = 5,									//Input bitwidth for Integer part
								  WF = 11,									//Input bitwidth for Fraction part
								  WIO = 383,							//Required integer bits of the output
								  WFO = 740,								//Required fractional bits of the output
								  WIS = 5,
								  WFS = 11,
								  NUMBER = 4
								  )													  
				 (
					 input signed [WI+WF-1:0] din,					//input din
					 input CLK, nReset,									//clock and Synchronous reset, 
																				//active-low. Clears all registers 
																				//which is negative trigger
					 input CE,												//active-high clock enable
					 output reg signed  [WIO+WFO-1:0] dout,		//output dout
					 output [NUMBER-1:0] OVF_f0,
					 output [NUMBER-1:0] OVF_f1,
					 output [NUMBER-1:0] OVF_b0,
					 output [NUMBER-1:0] OVF_b1
					 
				  );

	reg  [WIO-1 : 0] outI;													//The integer part of the output
	reg  [WFO-1 : 0] outF;													//The fractional part of the output	 	


	localparam intL = WIO;				//integer length of correct results
	localparam frcL = WFO;					//fraction length of correct results	
	localparam N = intL+frcL;
	localparam M = NUMBER + 1;				//FOR GENERATION TIMES USING
	
	localparam WI1 = WI + WIS*3 + 3;
	localparam WF1 = WF + WFS*3;
	localparam WI2 = WI1 + WIS*3 + 3;
	localparam WF2 = WF1 + WFS*3;
	localparam WI3 = WI2 + WIS*3 + 3;
	localparam WF3 = WF2 + WFS*3;
	localparam WI4 = WI3 + WIS*3 + 3;
	localparam WF4 = WF3 + WFS*3;

	wire [WI1+WF1-1:0] din1;
	wire [WI2+WF2-1:0] din2;	
	wire [WI3+WF3-1:0] din3;
	wire [WI4+WF4-1:0] dout_tmp;	

	reg [WIS+WFS-1:0] scale_mem [NUMBER-1:0]; 				//The memory of the Coefficients of scaling


			sos_scaled 						//module name
				#( 
					.WI(WI),				//input bitwise of integer part
					.WF(WF),				//input bitwise of fractional part
					.WIO(WI1),
					.WFO(WF1),
					.WIS(WIS),
					.WFS(WFS))				
				sos_Fang_1 					//initialized module name
				(
					.din(din), 
					.CLK(CLK),
					.fac_scale(scale_mem[0]),
					.nReset(nReset), 
					.CE(CE), 
					.dout(din1),
					.OVF_f0(OVF_f0[0]), 
					.OVF_f1(OVF_f1[0]), 
					.OVF_b0(OVF_b0[0]), 
					.OVF_b1(OVF_b1[0])
				);
				
				sos_scaled 						//module name
				#( 
					.WI(WI1),				//input bitwise of integer part
					.WF(WF1),				//input bitwise of fractional part
					.WIO(WI2),
					.WFO(WF2),
					.WIS(`WI_scale),
					.WFS(`WF_scale))				
				sos_Fang_2 					//initialized module name
				(
					.din(din1), 
					.CLK(CLK),
					.fac_scale(scale_mem[1]),
					.nReset(nReset), 
					.CE(CE), 
					.dout(din2),
					.OVF_f0(OVF_f0[1]), 
					.OVF_f1(OVF_f1[1]), 
					.OVF_b0(OVF_b0[1]), 
					.OVF_b1(OVF_b1[1])
				);
				
				sos_scaled 						//module name
				#( 
					.WI(WI2),				//input bitwise of integer part
					.WF(WF2),				//input bitwise of fractional part
					.WIO(WI3),
					.WFO(WF3),
					.WIS(`WI_scale),
					.WFS(`WF_scale))				
				sos_Fang_3 					//initialized module name
				(
					.din(din2), 
					.CLK(CLK),
					.fac_scale(scale_mem[2]),
					.nReset(nReset), 
					.CE(CE), 
					.dout(din3),
					.OVF_f0(OVF_f0[2]), 
					.OVF_f1(OVF_f1[2]), 
					.OVF_b0(OVF_b0[2]), 
					.OVF_b1(OVF_b1[2])
				);
				
				sos_scaled 					//module name
				#( 
					.WI(WI3),				//input bitwise of integer part
					.WF(WF3),				//input bitwise of fractional part
					.WIO(WI4),
					.WFO(WF4),
					.WIS(`WI_scale),
					.WFS(`WF_scale))				
				sos_Fang_4 					//initialized module name
				(
					.din(din3), 
					.CLK(CLK),
					.fac_scale(scale_mem[3]),
					.nReset(nReset), 
					.CE(CE), 
					.dout(dout_tmp),
					.OVF_f0(OVF_f0[3]), 
					.OVF_f1(OVF_f1[3]), 
					.OVF_b0(OVF_b0[3]), 
					.OVF_b1(OVF_b1[3])
				);





//--------------------adjusting the bitwidth for the fractional part----------------------------------------------------------
always  @* begin

	if (WFO >= frcL)						//append 0s to the lsb bits
			outF = {dout_tmp[frcL-1:0] , {(WFO-frcL){1'b0}}};
	else										//WFO<(WF1+WF2): Truncate bits from the LSB bits
			outF = dout_tmp[frcL-1 : frcL-WFO];
end
//----------------------------------------------------------------------------------------------------------------------------

//--------------------adjusting the bitwidth for the integer part-------------------------------------------------------------
always @* begin
	if (WIO>=intL)								//sign extend the integer part
			outI = {{(WIO-intL){dout_tmp[intL+frcL-1]}}, dout_tmp[intL+frcL-1:frcL]};
	else	begin									//WIO<(WI1+WI2)
		if (WIO==1)
			outI = dout_tmp[intL+frcL-1];
		else
			//outI = `X_trc;
		   outI = {dout_tmp[intL+frcL-1], dout_tmp[`X_trc:frcL]};					
	end
end
//----------------------------------------------------------------------------------------------------------------------------

//--------------------registering the output----------------------------------------------------------------------------------
always @* 		  //(posedge CLK) //if wanna a registered multiplier decommented
	if (!nReset) dout <= 0;			//negative reset
	else 		//if (WIO==1)			//Adjust back to Integer part = 1	
		dout <= {outI [WIO-1:0], outF [WFO-1:0]};



endmodule