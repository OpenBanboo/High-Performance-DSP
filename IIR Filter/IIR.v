`timescale 1ns / 1ps
`define X_trc (WIO>=2)? (WIO-2+frcL) : frcL

//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:26:04 04/11/2014 
// Design Name: 
// Module Name:    IIR 
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
//////////////////////////////////////////////////////////////////////////////////////////////////////////
module IIR 
				#( parameter 
		   					  WI = 5,									//Input bitwidth for Integer part
								  WF = 11,									//Input bitwidth for Fraction part
								  WIO = 23,									//Required integer bits of the output
								  WFO = 44,									//Required fractional bits of the output
								  WIS = 5,									//Bitwidth of the integer part of coefficients
								  WFS = 11,									//Bitwidth of the fraction part of coeeicients
								  NUMBER = 4								//The number of your sos inside the IIR
								  )													  
				 (
					 input signed [WI+WF-1:0] din,					//input din
					 input CLK, nReset,									//clock and Synchronous reset, 
																				//active-low. Clears all registers 
																				//which is negative trigger
					 input CE,												//active-high clock enable
					 output reg signed  [WIO+WFO-1:0] dout,		//output dout
					 output [NUMBER-1:0] OVF_f0,						//Overflow of adders inside every 
					 output [NUMBER-1:0] OVF_f1,
					 output [NUMBER-1:0] OVF_b0,
					 output [NUMBER-1:0] OVF_b1
					 
				  );

	reg  [WIO-1 : 0] outI;												//The integer part of the output
	reg  [WFO-1 : 0] outF;												//The fractional part of the output	 	

	localparam intL = WIO;												//integer length of correct results
	localparam frcL = WFO;												//fraction length of correct results	
	localparam N = intL+frcL;											//the total bit required for 
	localparam M = NUMBER + 1;											//FOR GENERATION TIMES USING
	
	reg  [intL+frcL-1:0] din_norm;									//the register for string the input value after adjusting
	wire [intL+frcL-1:0] dout_tmp;
	
	wire [WI+WF+WIS+WFS-1:0] din_tmp;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////	
	
	//The multiplier for the first scaling
	sMult #(.WI1(WI), .WF1(WF),  .WI2(WIS), .WF2(WFS),  .WIO(WI+WIS), .WFO(WF+WFS)) mul_scale_0		
			 (.CLK(CLK), .RST(nReset), .in1(din), .in2(scale_mem[0]), .out(din_tmp) );
	
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	//Adjust the inputs equaling to the bitwidth with the output of the sos
	always @ * begin
		din_norm[frcL-1:0] = {din_tmp[WF+WFS-1:0] , {(frcL-(WF+WFS)){1'b0}}}; 
		din_norm[intL+frcL-1:frcL] = {{(intL-(WI+WIS)){din_tmp[WI+WIS+WF+WFS-1]}}, din_tmp[WI+WIS+WF+WFS-1:(WF+WFS)]};
	end
	
	wire [N*M-1:0] dio;
	
	assign dio[N-1:0] = din_norm;
	assign dout_tmp = dio[N*M-1:N*(M-1)];
	
	reg [WIS+WFS-1:0] scale_mem [NUMBER:0]; 				//The memory of the Coefficients of scaling
	
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	genvar i;
	generate
		for (i = 1; i < M; i = i + 1) begin: SOS
			sos_scaled 						//module name
				#( 
					.WI(intL),				//input bitwise of integer part
					.WF(frcL),				//input bitwise of fractional part
					.WIO(WIO),
					.WFO(WFO),
					.WIS(WIS),
					.WFS(WFS))				
				sos_Fang 					//initialized module name
				(
					.din(dio[(N*i-1):N*(i-1)]), 
					.CLK(CLK),
					.fac_scale(scale_mem[i]),
					.nReset(nReset), 
					.CE(CE), 
					.dout(dio[(N*(i+1)-1):N*i]),
					.OVF_f0(OVF_f0[i-1]), 
					.OVF_f1(OVF_f1[i-1]), 
					.OVF_b0(OVF_b0[i-1]), 
					.OVF_b1(OVF_b1[i-1])
				);
		end
	endgenerate

	reg [N-1:0] inner_result [NUMBER:0];			//This is used for monitoring the intermediate result of every sos
																//will be used to present into real number in the testbench

	always @ * begin	//for debugging
		inner_result[0] = dio[N-1:0];
		inner_result[1] = dio[N*2-1:N];
		inner_result[2] = dio[N*3-1:N*2];
		inner_result[3] = dio[N*4-1:N*3];
		inner_result[4] = dio[N*5-1:N*4];
	end

//--------------------adjusting the bitwidth for the fractional part----------------------------------------------------
always  @* begin

	if (WFO >= frcL)						//append 0s to the lsb bits
			outF = {dout_tmp[frcL-1:0] , {(WFO-frcL){1'b0}}};
	else										//WFO<(WF1+WF2): Truncate bits from the LSB bits
			outF = dout_tmp[frcL-1 : frcL-WFO];
end
//----------------------------------------------------------------------------------------------------------------------

//--------------------adjusting the bitwidth for the integer part-------------------------------------------------------
always @* begin
	if (WIO>=intL)								//sign extend the integer part
			outI = {{(WIO-intL){dout_tmp[intL+frcL-1]}}, dout_tmp[intL+frcL-1:frcL]};
	else	begin									//WIO<(WI1+WI2)
		if (WIO==1)
			outI = dout_tmp[intL+frcL-1];
		else
		   outI = {dout_tmp[intL+frcL-1], dout_tmp[`X_trc:frcL]};					
	end
end
//----------------------------------------------------------------------------------------------------------------------

//--------------------registering the output----------------------------------------------------------------------------
always @* 		  //(posedge CLK) //if wanna a registered multiplier decommented
	if (!nReset) dout <= 0;			//negative reset
	else 			  //if (WIO==1)   //Adjust back to Integer part = 1	
		dout <= {outI [WIO-1:0], outF [WFO-1:0]};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

endmodule
