`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
//--------------------------------         -------------------------------------//
//////////////////////////////////////////////////////////////////////////////////
module controlUnit #(parameter M = 4)
						  (
						   input RST, CLK,
							output reg sel_d1, 			//select line of dmux1
										  sel_d2,			//select line of dmux2
										  sel_m1,			//select line of mux1
										  sel_m2,			//select line of mux2
										  FIFO_read,		//FIFO read control
										  FIFO_write,		//FIFO write control
							output reg [2:0] 
										  nextState,		//keeps track of current state
							output reg [5:0] controller_monitor
										  );

always @ * controller_monitor = {sel_d1,sel_d2,sel_m1,sel_m2,FIFO_read,FIFO_write};

//opcode defines
localparam 	state_0 = 3'b000;
localparam	state_1 = 3'b001;
localparam	state_2 = 3'b010;
localparam	state_3 = 3'b011;
localparam	state_4 = 3'b100;
localparam	state_5 = 3'b101;
localparam	state_6 = 3'b110;

reg [2:0] currentState;
integer counter = 0;
integer counter_rare = 0;

//State Machine Initialization
always @ (posedge CLK) begin 
		if(!RST) begin
			currentState = state_0;
			nextState = state_1;
		end else
			currentState = nextState;				
end

//Output combinational logic
always @ (posedge CLK) begin
	case (currentState)
		state_0: begin
						sel_d1 <= 1'bx;
						sel_d2 <= 1'bx;
						sel_m1 <= 1'bx;
						sel_m2 <= 1'b0;
						FIFO_read  <= 1'b0;
						FIFO_write <= 1'b0;
						nextState <= state_1;
						counter <= counter + 1;
					end
		state_1: begin
						sel_d1 <= 1'b1;
						sel_d2 <= 1'b1;
						sel_m1 <= 1'b0;
						sel_m2 <= 1'b0;
						FIFO_read  <= 1'b0;
						FIFO_write <= 1'b1;
						if (counter==M) begin
							nextState <= state_2;
						end	
						else begin
							nextState <= state_1;
							counter <= counter + 1;
						end
					end
		state_2: begin
						sel_d1 <= 1'bx;
						sel_d2 <= 1'bx;
						sel_m1 <= 1'bx;
						sel_m2 <= 1'b1;
						FIFO_read  <= 1'b1;
						FIFO_write <= 1'b0;
						nextState <= state_3;
					end
		state_3: begin
						sel_d1 <= 1'b0;
						sel_d2 <= 1'b0;
						sel_m1 <= 1'b1;
						sel_m2 <= 1'b0;
						FIFO_read  <= 1'b0;
						FIFO_write <= 1'b1;
						nextState <= state_4;					
						counter <= counter + 1;
					end
		state_4: begin
						sel_d1 <= 1'b0;
						sel_d2 <= 1'b0;
						sel_m1 <= 1'b1;
						sel_m2 <= 1'b0;
						FIFO_read  <= 1'b1;
						FIFO_write <= 1'b1;
						if (counter_rare==M-2) begin 
							nextState <= state_5;
							counter_rare <= 0;
						end
						else begin
							nextState <= state_4;
							counter_rare <= counter_rare + 1;
						end
					end
		state_5: begin
						sel_d1 <= 1'b1;
						sel_d2 <= 1'b0;
						sel_m1 <= 1'b0;
						sel_m2 <= 1'b0;
						FIFO_read  <= 1'b0;
						FIFO_write <= 1'b1;
						nextState <= state_6;	
					end
		state_6: begin
						sel_d1 <= 1'b0;
						sel_d2 <= 1'b0;
						sel_m1 <= 1'b1;
						sel_m2 <= 1'b1;
						FIFO_read  <= 1'b1;
						FIFO_write <= 1'b1;
						nextState <= state_4;
					end
	endcase
end

endmodule
