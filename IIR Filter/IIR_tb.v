`timescale 1ns / 1ps
`define NUMBER 4 				//number of sos
`define Testdata_Depth 50	//set the size of the testcases here
`define Testdata_Bits 16	//set the bitwidth of the testcases here
`define WIDTH 16
`define WI 5 					//set the bitwidth of the integer part of the inputs here
`define WF 11					//set the bitwidth of the fractional part of the inputs here
`define WIS 5
`define WFS 11
`define WIO 23  				//set the bitwidth of the integer part of the required output here
`define WFO 44					//set the bitwidth of the fractional part of the required output here

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:32:56 04/12/2014
// Design Name:   IIR
// Module Name:   D:/Synchronous/Graduate Studies/Homework/672/HWprojects/HW6-IIR/IIR_tb.v
// Project Name:  HW6-IIR
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: IIR
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module IIR_tb;

	// Inputs
	reg [`WI+`WF-1:0] din;
	reg CLK;
	reg nReset;
	reg CE;

	// Outputs
	wire [(`WIO+`WFO-1):0] dout;
	wire [`NUMBER-1:0] OVF_f0;
	wire [`NUMBER-1:0] OVF_f1;
	wire [`NUMBER-1:0] OVF_b0;
	wire [`NUMBER-1:0] OVF_b1;

	//Real Number Presentation
	real real_din;
	real real_dout;		//floating number results

	// Instantiate the Unit Under Test (UUT)
	IIR #(
		.WIO(`WIO),
		.WFO(`WFO)
	) uut (
		.din(din), 
		.CLK(CLK), 
		.nReset(nReset), 
		.CE(CE), 
		.dout(dout), 
		.OVF_f0(OVF_f0), 
		.OVF_f1(OVF_f1), 
		.OVF_b0(OVF_b0), 
		.OVF_b1(OVF_b1)
	);

	// Memory used to store the testcases
	reg [`Testdata_Bits-1:0] Testdata_vec_IIR [`Testdata_Depth-1:0];
	//reg [`WI+`WF-1:0] scale_mem [`NUMBER-1:0]; 				//The vector of the Coefficients of scaling

// ================================  Function Definition  =======================================//
	// Present the fixed point number into real number
	function real fixedToFloat;
		input [2047:0] in;	//should cover every bit of the maximal value
		input integer WI;
		input integer WF;
		integer idx;
		real retVal;
		begin
			retVal = 0;
			for (idx = 0; idx < WI+WF-1; idx = idx + 1) begin
				if(in[idx] == 1'b1) begin
					retVal = retVal + (2.0**(idx-WF));
				end
			end
		fixedToFloat = retVal - (in[WI+WF-1] * (2.0**(WI-1)));
		end
	endfunction
//==================================================================================================//

//=====================================  clock generator  ==========================================//
	parameter ClockPeriod = 10;
	initial 	 CLK = 1;
	always # (ClockPeriod/2) CLK = ~CLK;
//==================================================================================================//

//===========================================  Inpulse =============================================//
	integer count;


	initial begin
		$readmemb("fpTestdata_IIR.txt", Testdata_vec_IIR);
		$readmemb("coef_a_s1.txt", IIR_tb.uut.SOS[1].sos_Fang.a_mem);
		$readmemb("coef_b_s1.txt", IIR_tb.uut.SOS[1].sos_Fang.b_mem);

		$readmemb("coef_a_s2.txt", IIR_tb.uut.SOS[2].sos_Fang.a_mem);
		$readmemb("coef_b_s2.txt", IIR_tb.uut.SOS[2].sos_Fang.b_mem);

		$readmemb("coef_a_s3.txt", IIR_tb.uut.SOS[3].sos_Fang.a_mem);
		$readmemb("coef_b_s3.txt", IIR_tb.uut.SOS[3].sos_Fang.b_mem);

		$readmemb("coef_a_s4.txt", IIR_tb.uut.SOS[4].sos_Fang.a_mem);
		$readmemb("coef_b_s4.txt", IIR_tb.uut.SOS[4].sos_Fang.b_mem);	

		$readmemb("scale_fac.txt", IIR_tb.uut.scale_mem);

		//present the coeffieicnts of "a" and "b"
		$display("coefficients of the 1st sos");
		$display("a0: %f", fixedToFloat(IIR_tb.uut.SOS[1].sos_Fang.a_mem[0], `WI, `WF));
		$display("a1: %f", fixedToFloat(IIR_tb.uut.SOS[1].sos_Fang.a_mem[1], `WI, `WF));
		$display("a2: %f", fixedToFloat(IIR_tb.uut.SOS[1].sos_Fang.a_mem[2], `WI, `WF));

		$display("b0: %f", fixedToFloat(IIR_tb.uut.SOS[1].sos_Fang.b_mem[0], `WI, `WF));
		$display("b1: %f", fixedToFloat(IIR_tb.uut.SOS[1].sos_Fang.b_mem[1], `WI, `WF));
		$display("b2: %f", fixedToFloat(IIR_tb.uut.SOS[1].sos_Fang.b_mem[2], `WI, `WF));
		
		$display("coefficients of the 2nd sos");
		$display("a0: %f", fixedToFloat(IIR_tb.uut.SOS[2].sos_Fang.a_mem[0], `WI, `WF));
		$display("a1: %f", fixedToFloat(IIR_tb.uut.SOS[2].sos_Fang.a_mem[1], `WI, `WF));
		$display("a2: %f", fixedToFloat(IIR_tb.uut.SOS[2].sos_Fang.a_mem[2], `WI, `WF));

		$display("b0: %f", fixedToFloat(IIR_tb.uut.SOS[2].sos_Fang.b_mem[0], `WI, `WF));
		$display("b1: %f", fixedToFloat(IIR_tb.uut.SOS[2].sos_Fang.b_mem[1], `WI, `WF));
		$display("b2: %f", fixedToFloat(IIR_tb.uut.SOS[2].sos_Fang.b_mem[2], `WI, `WF));
		
		$display("coefficients of the 3rd sos");
		$display("a0: %f", fixedToFloat(IIR_tb.uut.SOS[3].sos_Fang.a_mem[0], `WI, `WF));
		$display("a1: %f", fixedToFloat(IIR_tb.uut.SOS[3].sos_Fang.a_mem[1], `WI, `WF));
		$display("a2: %f", fixedToFloat(IIR_tb.uut.SOS[3].sos_Fang.a_mem[2], `WI, `WF));

		$display("b0: %f", fixedToFloat(IIR_tb.uut.SOS[3].sos_Fang.b_mem[0], `WI, `WF));
		$display("b1: %f", fixedToFloat(IIR_tb.uut.SOS[3].sos_Fang.b_mem[1], `WI, `WF));
		$display("b2: %f", fixedToFloat(IIR_tb.uut.SOS[3].sos_Fang.b_mem[2], `WI, `WF));

		$display("coefficients of the 4th sos");
		$display("a0: %f", fixedToFloat(IIR_tb.uut.SOS[4].sos_Fang.a_mem[0], `WI, `WF));
		$display("a1: %f", fixedToFloat(IIR_tb.uut.SOS[4].sos_Fang.a_mem[1], `WI, `WF));
		$display("a2: %f", fixedToFloat(IIR_tb.uut.SOS[4].sos_Fang.a_mem[2], `WI, `WF));

		$display("b0: %f", fixedToFloat(IIR_tb.uut.SOS[4].sos_Fang.b_mem[0], `WI, `WF));
		$display("b1: %f", fixedToFloat(IIR_tb.uut.SOS[4].sos_Fang.b_mem[1], `WI, `WF));
		$display("b2: %f", fixedToFloat(IIR_tb.uut.SOS[4].sos_Fang.b_mem[2], `WI, `WF));

		$display("scale1: %f", fixedToFloat(IIR_tb.uut.scale_mem[0], `WI, `WF));
		$display("scale2: %f", fixedToFloat(IIR_tb.uut.scale_mem[1], `WI, `WF));		
		$display("scale3: %f", fixedToFloat(IIR_tb.uut.scale_mem[2], `WI, `WF));
		$display("scale4: %f", fixedToFloat(IIR_tb.uut.scale_mem[3], `WI, `WF));
		
		// Initialize Inputs
		din = 0; nReset = 0; CE = 1; 
		
		@(posedge CLK); nReset = 1; 

		for (count = 0; count <= `Testdata_Depth; count = count+1) begin
				din = Testdata_vec_IIR[count]; @(posedge CLK);
				if (count==`Testdata_Depth)
					$finish;
		end

	end
	
//===================================  Real Pesentation  ============================================// 
	real sos_re_0, sos_re_1, sos_re_2, sos_re_3, sos_re_4;
//===================================  Real Pesentation  ============================================// 
	// -- input
	always @ din real_din = fixedToFloat(din, `WI, `WF);      
		
	// -- Output
	always @ dout real_dout = fixedToFloat(dout, `WIO, `WFO);
	always @ IIR_tb.uut.inner_result sos_re_0  = fixedToFloat(IIR_tb.uut.inner_result[0], `WIO, `WFO);
	always @ IIR_tb.uut.inner_result sos_re_1  = fixedToFloat(IIR_tb.uut.inner_result[1], `WIO, `WFO);
	always @ IIR_tb.uut.inner_result sos_re_2  = fixedToFloat(IIR_tb.uut.inner_result[2], `WIO, `WFO);
	always @ IIR_tb.uut.inner_result sos_re_3  = fixedToFloat(IIR_tb.uut.inner_result[3], `WIO, `WFO);
	always @ IIR_tb.uut.inner_result sos_re_4  = fixedToFloat(IIR_tb.uut.inner_result[4], `WIO, `WFO);

	//always @ IIR_tb.uut.dio real_dio1 = fixedToFloat(IIR_tb.uut.din_norm, `WIO, `WFO);
	//always @ IIR_tb.uut.dio real_dio2 = fixedToFloat(IIR_tb.uut.din_norm, `WIO, `WFO);
	//always @ IIR_tb.uut.dio real_dio3 = fixedToFloat(IIR_tb.uut.din_norm, `WIO, `WFO);
	//always @ IIR_tb.uut.dio real_dio4 = fixedToFloat(IIR_tb.uut.din_norm, `WIO, `WFO);
	
	// -- Forward part
	//always @ IIR_tb.uut.SOS[1]sos_Fang.x1 real_x1 = fixedToFloat(IIR_tb.uut.SOS.sos_Fangx1[1], `WIO, `WFO);
/*	always @ IIR_tb.uut.SOS[1].sos_Fang.x2 real_x2 = fixedToFloat(IIR_tb.uut.SOS[1].sos_Fang.x2, `WIO, `WFO);
	always @ IIR_tb.uut.SOS[1].sos_Fang.xb0 real_xb0 = fixedToFloat(IIR_tb.uut.SOS[1].sos_Fang.xb0, `WIO*2, `WFO*2);
	always @ IIR_tb.uut.SOS[1].sos_Fang.x1b1 real_x1b1 = fixedToFloat(IIR_tb.uut.SOS[1].sos_Fang.x1b1, `WIO*2, `WFO*2);
	always @ IIR_tb.uut.SOS[1].sos_Fang.x2b2 real_x2b2 = fixedToFloat(IIR_tb.uut.SOS[1].sos_Fang.x2b2, `WIO*2, `WFO*2);
	always @ IIR_tb.uut.SOS[1].sos_Fang.x1b1x2b2 real_x1b1x2b2 = fixedToFloat(IIR_tb.uut.SOS[1].sos_Fang.x1b1x2b2, `WIO*2+1, `WFO*2);
	always @ IIR_tb.uut.SOS[1].sos_Fang.xb0x1b1x2b2 real_xb0x1b1x2b2 = fixedToFloat(IIR_tb.uut.SOS[1].sos_Fang.xb0x1b1x2b2, `WIO*2+2, `WFO*2);	
	// -- Backward part
	always @ IIR_tb.uut.SOS[1].sos_Fang.y real_y = fixedToFloat(IIR_tb.uut.SOS[1].sos_Fang.y, `WIO*2+3, `WFO*2);	
	always @ IIR_tb.uut.SOS[1].sos_Fang.y1 real_y1 = fixedToFloat(IIR_tb.uut.SOS[1].sos_Fang.y1, `WIO*3+3, `WFO*3);		
	always @ IIR_tb.uut.SOS[1].sos_Fang.y2 real_y2 = fixedToFloat(IIR_tb.uut.SOS[1].sos_Fang.y2, `WIO*3+3, `WFO*3);

	always @ IIR_tb.uut.SOS[1].sos_Fang.y1_ma1 real_y1_ma1 = fixedToFloat(IIR_tb.uut.SOS[1].sos_Fang.y1_ma1, `WIO*4+3, `WFO*4);
	always @ IIR_tb.uut.SOS[1].sos_Fang.y2_ma2 real_y2_ma2 = fixedToFloat(IIR_tb.uut.SOS[1].sos_Fang.y2_ma2, `WIO*4+3, `WFO*4);
	always @ IIR_tb.uut.SOS[1].sos_Fang.y2_ma2_y1_ma1 real_y2_ma2_y1_ma1 = fixedToFloat(IIR_tb.uut.SOS[1].sos_Fang.y2_ma2_y1_ma1, `WIO*4+4, `WFO*4);
*/
endmodule

