module FWD(
    input [4:0] a1,
    input [4:0] a2,
    //×ª·¢
	input [4:0] M_a3,
	input M_we,

	input [4:0] W_a3,
	input W_we,

    output reg [1:0] v1_sel,
    output reg [1:0] v2_sel
);

    always @(*) begin
        if (a1 == M_a3 && M_we == 1 && M_a3 != 0 && a1 != 0) begin
            v1_sel = 2;
        end else if (a1 == W_a3 && W_we == 1 && W_a3 != 0 && a1 != 0) begin
            v1_sel = 1;
        end else begin
            v1_sel = 0;
        end
    end

     always @(*) begin
        if (a2 == M_a3 && M_we == 1 && M_a3 != 0 && a2 != 0) begin
            v2_sel = 2;
        end else if (a2 == W_a3 && W_we == 1 && W_a3 != 0 && a2 != 0) begin
            v2_sel = 1;
        end else begin
            v2_sel = 0;
        end
    end

endmodule