`timescale 1ns / 1ps
`define Testdata_Depth 50	//set the size of the testcases here
`define Testdata_Bits 16	//set the bitwidth of the testcases here
`define WIDTH 16
`define WI 5 					//set the bitwidth of the integer part of the inputs here
`define WF 11					//set the bitwidth of the fractional part of the inputs here
`define WIO 5 					//set the bitwidth of the integer part of the required output here
`define WFO 11					//set the bitwidth of the fractional part of the required output here
`define TAPSIZE 3				//set the tapsize of the second order system of here
////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:42:08 04/11/2014
// Design Name:   sos
// Module Name:   D:/Synchronous/Graduate Studies/Homework/672/HWprojects/HW6-IIR/sos_tb411.v
// Project Name:  HW6-IIR
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: sos
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module sos_tb411;

	// Inputs Signals
	reg [`WIDTH-1:0] din;	//input
	reg CLK;						//clock
	reg nReset;					//negtive reset
	reg CE;						//clock enable signal

	// Outputs Signals
	wire [(`WIDTH*3+3-1):0] dout;
	wire OVF_f0, OVF_f1, OVF_b0, OVF_b1;
	
	// Memory used to store the testcases
	reg [`Testdata_Bits-1:0] Testdata_vec_IIR [`Testdata_Depth-1:0];

	//Real Number Presentation
	real real_din;
	real real_dout;		//floating number results

// ================================  Function Definition  =======================================//
	// Present the fixed point number into real number
	function real fixedToFloat;
		input [`WI*4+`WF*4+4:0] in;	//should cover every bit of the maximal value
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

// =============================  Instantiate the Unit Under Test (UUT)  ===========================//
	// 
	sos 						//module name
		#( .TAPSIZE(`TAPSIZE),
			.WI(`WI),		//input bitwise of integer part
			.WF(`WF))		//input bitwise of fractional part
		uut_sos_Fang 		//initialized module name
		 (
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
//==================================================================================================//

//=====================================  clock generator  ==========================================//
	parameter ClockPeriod = 10;
	initial 	 CLK = 1;
	always # (ClockPeriod/2) CLK = ~CLK;
//==================================================================================================//

real real_x1, real_x2, real_xb0, real_x1b1, real_x2b2, real_x1b1x2b2, real_xb0x1b1x2b2; 
real real_y, real_y1, real_y2, real_y1_ma1, real_y2_ma2, real_y2_ma2_y1_ma1;

//===========================================  Inpulse =============================================//
	integer count;

	initial begin
		$readmemb("fpTestdata_IIR.txt", Testdata_vec_IIR);
		$readmemb("coef_a_s1.txt", sos_tb411.uut_sos_Fang.a_mem);
		$readmemb("coef_b_s1.txt", sos_tb411.uut_sos_Fang.b_mem);
		
		//present the coeffieicnts of "a" and "b"
		$display("coefficients of the first sos");
		$display("a0: %f", fixedToFloat(sos_tb411.uut_sos_Fang.a_mem[0], `WI, `WF));
		$display("a1: %f", fixedToFloat(sos_tb411.uut_sos_Fang.a_mem[1], `WI, `WF));
		$display("a2: %f", fixedToFloat(sos_tb411.uut_sos_Fang.a_mem[2], `WI, `WF));
		
		$display("b0: %f", fixedToFloat(sos_tb411.uut_sos_Fang.b_mem[0], `WI, `WF));
		$display("b1: %f", fixedToFloat(sos_tb411.uut_sos_Fang.b_mem[1], `WI, `WF));
		$display("b2: %f", fixedToFloat(sos_tb411.uut_sos_Fang.b_mem[2], `WI, `WF));
		
		// Initialize Inputs
		din = 0; nReset = 0; CE = 1; @(posedge CLK); nReset = 1; 
		
		for (count = 0; count <= `Testdata_Depth; count = count+1) begin
				din = Testdata_vec_IIR[count]; @(posedge CLK);
				if (count==`Testdata_Depth)
					$finish;
		end
		
	end

//==================================================================================================//

//===================================  Real Pesentation  ============================================// 
	// -- input
	always @ din real_din = fixedToFloat(din, `WI, `WF);	
	// -- Forward part
	always @ sos_tb411.uut_sos_Fang.x1 real_x1 = fixedToFloat(sos_tb411.uut_sos_Fang.x1, `WI, `WF);
	always @ sos_tb411.uut_sos_Fang.x2 real_x2 = fixedToFloat(sos_tb411.uut_sos_Fang.x2, `WI, `WF);
	always @ sos_tb411.uut_sos_Fang.xb0 real_xb0 = fixedToFloat(sos_tb411.uut_sos_Fang.xb0, `WI*2, `WF*2);
	always @ sos_tb411.uut_sos_Fang.x1b1 real_x1b1 = fixedToFloat(sos_tb411.uut_sos_Fang.x1b1, `WI*2, `WF*2);
	always @ sos_tb411.uut_sos_Fang.x2b2 real_x2b2 = fixedToFloat(sos_tb411.uut_sos_Fang.x2b2, `WI*2, `WF*2);
	always @ sos_tb411.uut_sos_Fang.x1b1x2b2 real_x1b1x2b2 = fixedToFloat(sos_tb411.uut_sos_Fang.x1b1x2b2, `WI*2+1, `WF*2);
	always @ sos_tb411.uut_sos_Fang.xb0x1b1x2b2 real_xb0x1b1x2b2 = fixedToFloat(sos_tb411.uut_sos_Fang.xb0x1b1x2b2, `WI*2+2, `WF*2);	
	// -- Backward part
	always @ sos_tb411.uut_sos_Fang.y real_y = fixedToFloat(sos_tb411.uut_sos_Fang.y, `WI*2+3, `WF*2);	
	always @ sos_tb411.uut_sos_Fang.y1 real_y1 = fixedToFloat(sos_tb411.uut_sos_Fang.y1, `WI*3+3, `WF*3);		
	always @ sos_tb411.uut_sos_Fang.y2 real_y2 = fixedToFloat(sos_tb411.uut_sos_Fang.y2, `WI*3+3, `WF*3);

	always @ sos_tb411.uut_sos_Fang.y1_ma1 real_y1_ma1 = fixedToFloat(sos_tb411.uut_sos_Fang.y1_ma1, `WI*4+3, `WF*4);
	always @ sos_tb411.uut_sos_Fang.y2_ma2 real_y2_ma2 = fixedToFloat(sos_tb411.uut_sos_Fang.y2_ma2, `WI*4+3, `WF*4);
	always @ sos_tb411.uut_sos_Fang.y2_ma2_y1_ma1 real_y2_ma2_y1_ma1 = fixedToFloat(sos_tb411.uut_sos_Fang.y2_ma2_y1_ma1, `WI*4+4, `WF*4);
	// -- Output
	always @ dout real_dout = fixedToFloat(dout, `WIO, `WFO);
	

endmodule

