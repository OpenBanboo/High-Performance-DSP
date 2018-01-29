`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
module FIR_N_multicycle 
				#( parameter 
									TAPSIZE = 3, 		//The number of the taps of the FIR
									WI = 1,				//Input bitwidth for Integer part
									WF = 15)				//Input bitwidth for Fraction part
				 (
						 input signed [WI+WF-1:0] x,		 	//input x
						 input CLK, RST,						 	//clock and reset trigger 
																		//which is negative trigger
						 output reg signed [WI+WF-1:0] y, 	//output y
						 output reg signed [WI+WF-1:0] mul_out_show,
						 output reg signed [WI+WF-1:0] add_out_show
				 );

// -- States definitions -- //
localparam 	state_0 = 3'b000;
localparam	state_1 = 3'b001;

// -------Inner wires and registers ---- //
reg 	[1:0] current_state;			//keeps track of current state
reg 	[1:0] next_state;				//keeps track of current state
wire 	[WI+WF-1:0]   register;
reg 	[TAPSIZE-1:0] pointer;				
reg 	[WI+WF-1:0] h_tmp, x_tmp;		//multiplicand
reg 	[TAPSIZE-1:0] counter_shift;
reg 	[TAPSIZE-1:0] counter;
reg 	flag_virgin = 0;
wire 	[WI + WF - 1:0] mul_out, add_out;
reg 	RST_reg;

// -- State Machine Initialization -- //
always @ (posedge CLK or negedge RST) begin 
		if(!RST) begin
			RST_reg = 0;
			current_state = state_0;
			next_state = state_1;
		end else begin
			current_state = next_state;				
			RST_reg = 1;
		end
end
 
// -- Memories of coefficients and input array -- //
reg [WI+WF-1:0] h_mem [TAPSIZE-1:0]; 	//The vector of the Coefficients
reg [WI+WF-1:0] x_mem [TAPSIZE-1:0]; 	//The vector of the Coefficients


//=== Output combinational logic
always @ (posedge CLK or current_state) begin
	case (current_state)
		state_0: begin
						// =====------------------------------- Reset the memories ---------------------------====== //
						$readmemb("Coef.txt", h_mem);		//Load the Coefficients vector h

						for (counter=0; counter < TAPSIZE; counter = counter + 1) begin
							x_mem[counter] = 0;
						end
						// =====-----------------------------  Reset registers to 0 --------------------------====== //
						//register = 0;
						pointer  = 0;

						// =====-----------------------------------  Next State ------------------------------====== //
						next_state = state_1;
					end
		
		state_1: begin
						
						//Conditional Operation 
						
						if (pointer == (TAPSIZE-1)) begin

							pointer = 0; //If pointer approach the max value, set back to 0
							//current_state = state_2;
							// ====-------------------------------  shift and put new value in   ------------------====== //
							for (counter_shift = (TAPSIZE-1); counter_shift >= 1; counter_shift = (counter_shift - 1) ) begin
								x_mem [counter_shift] = x_mem [counter_shift-1] ;
							end
							x_mem [0] = x;	
						
							//pointer = pointer + 1;
							next_state = state_1;
							RST_reg = 0;
							//x_tmp = 0;
							
						end else if (flag_virgin == 1'b0) begin
							x_mem[0] = x;
							flag_virgin = 1'b1;
							//pointer = 0;
							RST_reg = 1;
							next_state = state_1;
						end else begin
							RST_reg = 1;
							pointer = pointer + 1;
							next_state = state_1;
						end
						
					end
					
		state_2: begin

					end
		endcase
end




// ==------------------------------------- Module Instiation ---------------------------== //
// Multiplier 
always @ * begin 							//set multiplicand
		h_tmp = h_mem [pointer];
		x_tmp = x_mem [pointer];
end
sMult #(.WI1(1), 	 .WF1(15),  .WI2(1), .WF2(15),  .WIO(1), .WFO(15)) mul_Fang		
		 (.CLK(CLK), .RST(RST), .in1(h_tmp), .in2(x_tmp), .out(mul_out) );
always @ * mul_out_show = mul_out;

// Adder 
fixpoint_adder #( .WI1(1),  .WF1(15),  .WI2(1), .WF2(15), .WIO(1), .WFO(15)) 
		 add_Fang ( .CLK(CLK),.RST(RST), .in1(mul_out), .in2(register), .out(add_out));

always @ * add_out_show = add_out;

// Register
register #(.N(16)) register_Fang ( .d(add_out), .CLK(CLK), .RST(RST_reg), .q(register) );	


always @ * y = add_out;

endmodule
