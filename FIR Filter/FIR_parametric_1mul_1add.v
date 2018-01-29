`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
//////////////////////////////////////////////////////////////////////////////////
module FIR_parametric_1mul_1add 
		 #( parameter  TAPSIZE = 3, 			//The number of the taps of the FIR
							WI = 1,					//Input bitwidth for Integer part
						   WF = 15)					//Input bitwidth for Fraction part
		  (
			 input signed [WI+WF-1:0] x,		//input x
			 input CLK, RST,						//clock and reset trigger 
														//which is negative trigger
			 output signed [WI+WF-1:0] y,		//output y
			 output FIFO_error
			);

//Inner wire
wire signed [WI+WF-1:0] p0, p1, p2, p3, p4, p5;	
wire OVF1, OVF2;
	 
reg  [WI+WF-1:0] Coef_Mem [TAPSIZE-1:0]; 		//The vector of the Coefficients
initial begin
	$readmemb("Coef.txt", Coef_Mem);				//Load the Coefficients vector
end

//--------------------------------------------------------------------------------
// Intermediate values
reg 	[WI+WF-1:0] Coef;
wire 	[WI+WF-1:0] mul_out;
wire 	[WI+WF-1:0] FIFO_in;
wire	sel_d1, sel_d2, sel_m1, sel_m2; //select line of mux and demux
wire 	[WI+WF-1:0] add_A, add_B;
wire 	[WI+WF-1:0] d, q, q0, q1;
wire 	[WI+WF-1:0] mux1_A, mux1_B;
wire 	FIFO_read, FIFO_write;
wire  FIFO_full, FIFO_empty;
wire  [5:0] controller_monitor;

//--------------------------------------------------------------------------------
//Coefficient Processing
integer count = 0;
always @(posedge CLK) begin
	Coef <= Coef_Mem [count];
	if (count==TAPSIZE-1)
		count <= 0;
	else
		count <= count + 1;
end 


//--------------------------------------------------------------------------------
// Controller
controlUnit #(.M(4)) MyController ( .RST(RST), .CLK(CLK),.sel_d1(sel_d1), .sel_d2(sel_d2),	
												.sel_m1(sel_m1),.sel_m2(sel_m2),	.FIFO_read(FIFO_read),
												.FIFO_write(FIFO_write),.controller_monitor(controller_monitor));

// Register
register #(.N(WI+WF)) MyReg (.d(d),.CLK(CLK),.RST(RST),.q(q));

// Multiplier
sMult #(.WI1(1), 	 .WF1(15),  .WI2(1), .WF2(15),  	.WIO(1), .WFO(15)) mul_Fang		
		 (.CLK(CLK), .RST(RST), .in1(x), .in2(Coef), .out(mul_out) );

//Adder		 
fixpoint_adder #( .WI1(1), .WF1(15), .WI2(1), .WF2(15), .WIO(1), .WFO(15)) add_Fang
		 (.CLK(CLK),.RST(RST),  .in1(add_A), .in2(add_B), .out(mux1_B));

// DMUX
dmux_1to2 #(.N(WI+WF)) dmux_d0 (.in(mul_out),.sel(sel_d2),.A(d),.B(q0));
dmux_1to2 #(.N(WI+WF)) dmux_d1 (.in(q1),.sel(sel_d1),.A(add_A),.B(mux1_A));

// Multiplexer
mux #(.N_out(WI+WF)) mux_0 (.A(mux1_B), .B(mux1_A), .Sel(sel_m1), .out(FIFO_in));
mux #(.N_out(WI+WF)) mux_1 (.A(add_B), .B(16'hz), .Sel(sel_m2), .out(y));
mux #(.N_out(WI+WF)) mux_2 (.A(q0), .B(q), .Sel(sel_d2), .out(q1));


//	FIFO
Qestion2_FIFO #(.WL(16),.N(4)) FIFO_Fang ( .din(FIFO_in),.write(FIFO_write), 
					 .read(FIFO_read), .dout(add_B), .full(FIFO_full),  
					 .empty(FIFO_empty), .error(FIFO_error), .CLK(CLK), .RESET(RST));

endmodule
