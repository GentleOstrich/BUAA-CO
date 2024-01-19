module DATAEXT(
    input [1:0] A,
    input [31:0] Din,
	input [2:0] Op,
    output reg [31:0] Dout
);
    always @(*) begin
        if (Op == 3'b000) begin
            Dout = Din;
        end else if (Op == 3'b001) begin //half
            if (A[1] == 1'b1) begin
                Dout = {{16{Din[31]}}, Din[31:16]};
            end else begin
                Dout = {{16{Din[15]}}, Din[15:0]};
            end
        end else if (Op == 3'b010) begin //byte
            if (A == 2'b00) begin
                Dout = {{24{Din[7]}}, Din[7:0]};
            end else if (A == 2'b01) begin
                Dout = {{24{Din[15]}}, Din[15:8]};
            end else if (A == 2'b10) begin
                Dout = {{24{Din[23]}}, Din[23:16]};
            end else begin
                Dout = {{24{Din[31]}}, Din[31:24]};
            end
        end else begin
            Dout = Din;
        end
    end
endmodule