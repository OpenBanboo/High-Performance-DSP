`timescale 100ns / 10ps
`define X_trc (WIO>=2)? (WIO-2+frcL) : frcL
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:44:54 04/15/2014 
// Design Name: 
// Module Name:    IIR_mulcycle 
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
module IIR_mulcycle
			  #( parameter NUMBER  = 4, 									//The number of sos in the IIR,
								TAPSIZE = 3,
									  WI = 5,									//Input bitwidth for Integer part
									  WF = 11,									//Input bitwidth for Fraction part
									  WIO = 23,									//Required integer bits of the output
									  WFO = 44,
									  WIS = 5,
									  WFS = 11
													)								//Required fractional bits of the output

					  (
						 input signed [WI+WF-1:0] din,					//input din
						 input CLK, nReset, we,								//clock and Synchronous reset, 
																					//active-low. Clears all registers 
																					//which is negative trigger
						 input CE,												//active-high clock enable
						 output reg signed  [WIO+WFO-1:0] dout,		//output dout
						 output OVF_f0, OVF_f1, OVF_b0, OVF_b1
					  );

/////////////////////////////////  ----- Function Deginition -----  ////////////////////////////////////////
function integer log2;				//calculate log2(n)
	input integer n;
	begin
		log2 = 0;
		while (2**log2<n) begin
			log2 = log2 + 1;
		end
	end
endfunction
///////////////////////////////////////////////////////////////////////////////////////////////////////////

				  
localparam intL = WIO;					//integer length of correct results
localparam frcL = WFO;					//fraction length of correct results
localparam N = intL+frcL;
localparam addWidth = log2(NUMBER);
///////////////////////////////////////////////////////////////////////////////////////////////////////////
wire signed [WI+WF-1:0] din_delay;
reg  [intL+frcL-1:0] din_norm;
wire [WI+WF+WIS+WFS-1:0] din_tmp;
wire CLK_g;
reg  signed [WIO-1 : 0] outI;												//The integer part of the output
reg  signed [WFO-1 : 0] outF;												//The fractional part of the output	
//Inner wires (bidwidth should be made large enough)
wire signed [N-1:0] mux_out;
wire signed [intL+frcL-1:0] x1, x2;
wire signed [intL+WIS+frcL+WFS-1:0] xb0, x1b1, x2b2;
wire signed [intL+WIS+frcL+WFS:0] x1b1x2b2;
wire signed [intL+WIS+frcL+WFS+1:0] xb0x1b1x2b2;	
wire signed [intL+WIS+frcL+WFS+2:0] y; 
wire signed [intL+WIS*2+frcL+WFS*2+2:0] y1, y2;
wire signed [intL+WIS*3+frcL+WFS*3+2:0] y1_ma1, y2_ma2;
wire signed [intL+WIS*3+frcL+WFS*3+3:0] y2_ma2_y1_ma1;
wire signed [intL+WIS*2+frcL+WFS*2+2:0] tmp;
wire signed [intL+WIS*3+frcL+WFS*3+2:0] tmp_scaled;	
reg  signed [WIO+WFO-1:0] tmp_result;


////////////////////////////  --------- Memory Blick------------------------  ///////////////////////////
//Has to create a memory to store factor
reg [WIS+WFS-1:0] scale_mem [NUMBER:0];
reg  signed [WIS+WFS-1:0] coef_mem [(TAPSIZE*2*NUMBER)-1:0]; 			//The vector of the Coefficients b
// -------------------------------------------------------------------------------------------- //



////////////////////////////  ---------Clock gating------------------------  ///////////////////////////
assign CLK_g = CLK&CE; 				//warning: has not been used now!
assign din_delay = ~(~din);		//Implementing a buffer to delay the input due to the clock gate delayed the clock

/////////////////////////////////  ----- Scalling 1 -----  ////////////////////////////////////////////
//The first scaler
sMult #(.WI1(WI), .WF1(WF),  .WI2(WIS), .WF2(WFS),  .WIO(WI+WIS), .WFO(WF+WFS)) mul_scale_0		
		 (.CLK(CLK_g), .RST(nReset), .in1(din_delay), .in2(scale_mem[0]), .out(din_tmp) );
// -------------------------------------------------------------------------------------------- //

//Adjust the inputs equaling to the bitwidth with the output of the sos
always @ * begin
	din_norm[frcL-1:0] = {din_tmp[WF+WFS-1:0] , {(frcL-(WF+WFS)){1'b0}}}; 
	din_norm[intL+frcL-1:frcL] = {{(intL-(WI+WIS)){din_tmp[WI+WIS+WF+WFS-1]}}, 
																  din_tmp[WI+WIS+WF+WFS-1:(WF+WFS)]};
end

reg Sel;	//select signal for multiplexer
// ====--------------------------------- Main SOS -----------------------------------------------=== //

/////////////////////////////////  ----- Controller -----  ////////////////////////////////////////////
integer pointer = 0;

always @ (posedge CLK) begin
	if (!nReset) begin
		Sel <= 0;
		pointer <= 0;
	end else if (pointer==NUMBER-1)begin 
		Sel <= 0;
		pointer <= 0;
	end else begin
		Sel <= 1;
		pointer <= pointer + 1;
		if (pointer==0)
		  dout <= tmp_result;
	end
end

multiplexer #(.N(N)) mux (.a(din_norm),.b(tmp_result),.Sel(Sel),.out(mux_out));
/////////////////////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////  -----Forward Part-----  ////////////////////////////////////////////

RAM_ar #(.eleNum(NUMBER), .dataWidth(N)) RAM_reg_f1 
		  (.CLK(CLK_g), .RST(nReset), .we(we), .addr(pointer[addWidth-1:0]), .din(mux_out), .dout(x1) );

RAM_ar #(.eleNum(NUMBER), .dataWidth(N)) RAM_reg_f2 
		  (.CLK(CLK_g), .RST(nReset), .we(we), .addr(pointer[addWidth-1:0]), .din(x1), .dout(x2) );


sMult #(.WI1(intL), .WF1(frcL),  .WI2(WIS), .WF2(WFS),  .WIO(intL+WIS), .WFO(frcL+WFS)) mul_f0		
		 (.CLK(CLK_g), .RST(nReset), .in1(mux_out), .in2(coef_mem[pointer*TAPSIZE*2]), .out(xb0) );
		 
sMult #(.WI1(intL), .WF1(frcL),  .WI2(WIS), .WF2(WFS),  .WIO(intL+WIS), .WFO(frcL+WFS)) mul_f1		
		 (.CLK(CLK_g), .RST(nReset), .in1(x1), .in2(coef_mem[pointer*TAPSIZE*2+1]), .out(x1b1) );

sMult #(.WI1(intL), .WF1(frcL),  .WI2(WIS), .WF2(WFS),  .WIO(intL+WIS), .WFO(frcL+WFS)) mul_f2		
		 (.CLK(CLK_g), .RST(nReset), .in1(x2), .in2(coef_mem[pointer*TAPSIZE*2+2]), .out(x2b2) );

fixpoint_adder #( .WI1(intL+WIS), .WF1(frcL+WFS), .WI2(intL+WIS+1), .WF2(frcL+WFS), .WIO(intL+WIS+2), .WFO(frcL+WFS)) add_f0
		 (.CLK(CLK_g),.RST(nReset),  .in1(xb0), .in2(x1b1x2b2), .out(xb0x1b1x2b2), .OVF(OVF_f0));

fixpoint_adder #( .WI1(intL+WIS), .WF1(frcL+WFS), .WI2(intL+WIS), .WF2(frcL+WFS), .WIO(intL+WIS+1), .WFO(frcL+WFS)) add_f1
		 (.CLK(CLK_g),.RST(nReset),  .in1(x1b1), .in2(x2b2), .out(x1b1x2b2), . OVF(OVF_f1));
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////  -----Backward Part-----  /////////////////////////////////////////////////

RAM_ar #(.eleNum(NUMBER), .dataWidth(intL+WIS*2+frcL+WFS*2+3)) RAM_reg_b1 
		  (.CLK(CLK_g), .RST(nReset), .we(we), .addr(pointer[addWidth-1:0]), .din(tmp), .dout(y1) );


RAM_ar #(.eleNum(NUMBER), .dataWidth(intL+WIS*2+frcL+WFS*2+3)) RAM_reg_b2 
		  (.CLK(CLK_g), .RST(nReset), .we(we), .addr(pointer[addWidth-1:0]), .din(y1), .dout(y2) );

sMult #(.WI1(intL+WIS+3), 	 .WF1(frcL+WFS),   .WI2(WIS), .WF2(WFS),  .WIO(intL+WIS*2+3), .WFO(frcL+WFS*2)) mul_b0		
		 (.CLK(CLK_g), .RST(nReset), .in1(y), .in2(coef_mem[pointer*TAPSIZE*2+3]), .out(tmp) );
		 
sMult #(.WI1(intL+WIS*2+3), .WF1(frcL+WFS*2), .WI2(WIS), .WF2(WFS),  .WIO(intL+WIS*3+3), .WFO(frcL+WFS*3)) mul_b1		
		 (.CLK(CLK_g), .RST(nReset), .in1(y1), .in2(coef_mem[pointer*TAPSIZE*2+4]), .out(y1_ma1) );

sMult #(.WI1(intL+WIS*2+3), .WF1(frcL+WFS*2), .WI2(WIS), .WF2(WFS),  .WIO(intL+WIS*3+3), .WFO(frcL+WFS*3)) mul_b2		
		 (.CLK(CLK_g), .RST(nReset), .in1(y2), .in2(coef_mem[pointer*TAPSIZE*2+5]), .out(y2_ma2) );

fixpoint_adder #( .WI1(intL+WIS+2), .WF1(frcL+WFS), .WI2(intL+WIS*3+4), .WF2(frcL+WFS*3), .WIO(intL+WIS+3), .WFO(frcL+WFS)) add_b0
		 (.CLK(CLK_g),.RST(nReset),  .in1(xb0x1b1x2b2), .in2(y2_ma2_y1_ma1), .out(y), .OVF(OVF_b0));

fixpoint_adder #( .WI1(intL+WIS*3+3), .WF1(frcL+WFS*3), .WI2(intL+WIS*3+3), .WF2(frcL+WFS*3), .WIO(intL+WIS*3+4), .WFO(frcL+WFS*3)) add_b1
		 (.CLK(CLK_g),.RST(nReset),  .in1(y1_ma1), .in2(y2_ma2), .out(y2_ma2_y1_ma1), .OVF(OVF_b1));
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////  ---------- Scaling ----------  ///////////////////////////////////////////////
sMult #(.WI1(intL+WIS*2+3), .WF1(frcL+WFS*2),   .WI2(WIS),  .WF2(WFS),  .WIO(WIO), .WFO(WFO)) mul_scale		
		 (.CLK(CLK_g),  .RST(nReset), .in1(tmp),  .in2(scale_mem[pointer+1]), .out(tmp_scaled) );
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

always @ (posedge CLK) begin
	tmp_result <= tmp_scaled;
end

endmodule
