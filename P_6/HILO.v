`include "defines.v"
module HILO(
    input clk,
    input reset,
    input start_i,
    input [3:0] op,
    input [31:0] D1,
    input [31:0] D2,
    input [1:0] we,
    input [31:0] wd,
    output reg [31:0] HI,
    output reg [31:0] LO,
    output reg busy,
    output reg start_o
);

    reg [3:0] timer;
    reg [63:0] temp;

    always @(*) begin
        start_o=start_i;
    end

    always @(posedge clk) begin
        if (reset == 1) begin
            HI <= 0;
            LO <= 0;
            busy <= 0;
            timer <= 0;
            temp <= 0;
        end else begin
            if (timer == 0) begin
                if (start_i == 1) begin
                    busy <= 1;
                    if (op == `MULTop) begin
                        temp <= $signed(D1) * $signed(D2);
                        timer <= 5;
                    end else if (op == `MULTUop) begin
                        temp <= D1 *  D2;    
                        timer <= 5;       
                    end else if (op == `DIVop) begin
                        temp[63:32] <= $signed(D1) % $signed(D2);
                        temp[31:0] <= $signed(D1) / $signed(D2);
                        timer <= 10;
                    end else if (op == `DIVUop) begin
                        temp[63:32] <= D1 % D2;
                        temp[31:0] <= D1 / D2;           
                        timer <= 10;       
                    end
                end else if (we[0] == 1) begin
                    if  (we[1] == 1) begin 
                        LO <= wd; 
                        /*$display("LO :%h", wd);*/ 
                    end else begin 
                        HI <= wd; 
                        /*$display("HI :%h", wd);*/
                    end
                end else begin
                    timer <= 0;
                end
            end else begin
                if (timer == 1) begin
                    HI <= temp[63:32];
                    LO <= temp[31:0];
                    busy <= 1'b0;
                    timer <= 1'b0;
                end else begin
                    HI <= HI;
                    LO <= LO;
                    timer <= timer - 1;
                end
            end
        end
    end

    
endmodule