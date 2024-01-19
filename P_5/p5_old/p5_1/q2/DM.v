`include "defines.v"
module DM(
	input [31:0] pc,
    input clk,
    input reset,
    input WE,
    input [31:0] A,
    input [31:0] WD,
	input [1:0] WBHop,
	
    output reg [31:0] RD,
	output reg RegWE,
	output reg [4:0] LRM_a3
);

integer i;

reg [31:0] dm [0:3071];
reg [32:0] temp;
always @(*) begin
	RegWE = 1;
	
	if (WBHop == 2'b00) begin
		RD = dm[A >> 2];
	end	else if (WBHop == 2'b01) begin
		if (A[1:0] == 2'b00) begin
			RD = {{16{1'b0}}, dm[A>>2][7:0]};
		end else if (A[1:0] == 2'b01) begin
			RD = {{16{1'b0}}, dm[A>>2][15:8]};
		end else if (A[1:0] == 2'b10) begin
			RD = {{16{1'b0}}, dm[A>>2][23:16]};
		end else begin
			RD = {{16{1'b0}}, dm[A>>2][31:24]};
		end
	end else if (WBHop == 2'b10) begin
		temp = {dm[A>>2][31], dm[A>>2]} + {WD[31], WD};
		if(temp[32] == temp[31]) begin
			RD = dm[A>>2] + WD;
			RegWE = 1;
		end	else 	
			RD = WD;
			RegWE = 0;
	end else if (WBHop == 2'b11) begin
		LRM_a3 = dm[A>>2][4:0];
		RD = WD;
	end
	
end

always @(posedge clk) begin
    if (reset == 1) begin
        for (i = 0; i < 3072; i = i + 1) begin
            dm[i] <= 0;
        end
    end else begin
        if (WE == 1) begin
			if (WBHop == 2'b00) begin 
				dm[A >> 2] <= WD;
				$display("@%h: *%h <= %h", /*$time,*/ pc, {A[31:2], 1'b0, 1'b0}, WD);
			end else if (WBHop == 2'b01) begin
				if (A[1:0] == 2'b00) begin
					dm[A >> 2] <= {dm[A>>2][31:8], WD[7:0]};
					$display("@%h: *%h <= %h", /*$time,*/ pc, {A[31:2], 1'b0, 1'b0}, {dm[A>>2][31:8], WD[7:0]});
				end else if (A[1:0] == 2'b01) begin
					dm[A >> 2] <= {dm[A>>2][31:16], WD[7:0], dm[A>>2][7:0]};
					$display("@%h: *%h <= %h", /*$time,*/ pc, {A[31:2], 1'b0, 1'b0}, {dm[A>>2][31:16], WD[7:0], dm[A>>2][7:0]});
				end else if (A[1:0] == 2'b10) begin
					dm[A >> 2] <= {dm[A>>2][31:24], WD[7:0], dm[A>>2][15:0]};
					$display("@%h: *%h <= %h", /*$time,*/ pc, {A[31:2], 1'b0, 1'b0}, {dm[A>>2][31:24], WD[7:0], dm[A>>2][15:0]});
				end else begin
					dm[A >> 2] <= {WD[7:0], dm[A>>2][23:0]};
					$display("@%h: *%h <= %h", /*$time,*/ pc, {A[31:2], 1'b0, 1'b0}, {WD[7:0], dm[A>>2][23:0]});
				end 
			end
        end
    end
end

initial begin
	for (i = 0; i < 3072; i = i + 1) begin
		dm[i] <= 0;
	end
end


endmodule 