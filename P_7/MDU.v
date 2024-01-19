`include "defines.v"
//P6新增
module MDU (
    input clk,
    input reset,

    input [31:0] rs,
    input [31:0] rt,
    input [3:0] op,
    output busy_o,
    output [31:0] out,

    //P7新增
    input req
);
    integer timer = 0;

    reg [31:0] hi, lo, temp_hi, temp_lo;
    reg busy;

    wire mult = (op == `MDU_mult);
    wire multu = (op == `MDU_multu);
    wire div = (op == `MDU_div);
    wire divu = (op == `MDU_divu);
    wire mflo = (op == `MDU_mflo);
    wire mfhi = (op == `MDU_mfhi);
    wire mtlo = (op == `MDU_mtlo);
    wire mthi = (op == `MDU_mthi);

    wire start =  mult | multu | div | divu;

    assign busy_o = start | busy;

    assign out = mflo ? lo :
                 mfhi ? hi : 0;

    always @(posedge clk) begin
        if (reset) begin
            timer <= 0;
            busy <= 0;
            hi <= 0;
            lo <= 0;
        end else if (!req) begin
            if (timer == 0) begin
                if (mtlo) begin
                    lo <= rs;
                end else if (mthi) begin 
                    hi <= rs;
                end else if (mult) begin
                    busy <= 1;
                    timer <= 5;
                    {temp_hi, temp_lo} <= $signed(rs) * $signed(rt);
                end else if (multu) begin
                    busy <= 1;
                    timer <= 5;
                    {temp_hi, temp_lo} <= rs * rt;
                end else if (div) begin
                    busy <= 1;
                    timer <= 10;
                    if (rt) begin
                        temp_lo <= $signed(rs) / $signed(rt);
                        temp_hi <= $signed(rs) % $signed(rt);
                    end else begin
                        temp_lo <= lo;
                        temp_hi <= hi;
                    end
                end else if (divu) begin
                    busy <= 1;
                    timer <= 10;
                    temp_lo <= rt ? rs / rt : lo;
                    temp_hi <= rt ? rs % rt : hi;
                end
            end else if (timer == 1) begin
                timer <= 0;
                busy <= 0;
                hi <= temp_hi;
                lo <= temp_lo;
            end else begin
                timer <= timer - 1;
            end
        end
    end

endmodule
