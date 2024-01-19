`timescale 1ns / 1ps
`define zero 3'b000
`define one  3'b001
`define two  3'b011
`define three 3'b010
`define four 3'b110
`define five 3'b111
`define six 3'b101
`define seven 3'b100

module gray(
    input Clk,
    input Reset,
    input En,
    output [2:0] Output,
    output Overflow
    );
    reg [2:0] counter;
    reg yichu;
    assign Output = counter;
    assign Overflow = yichu;
    initial begin
        counter = 0;
        yichu = 0;
    end
    always @(posedge Clk) begin
    if (En) begin
        if(Reset) begin
             counter <= 0;
             yichu <= 0;
        end else begin
             case (counter)
                `zero : begin
                    counter <= `one;
                end
                `one : begin
                    counter <= `two;
                end
                `two : begin
                    counter <= `three;
                end
                `three : begin
                    counter <= `four;
                end
                `four : begin
                    counter <= `five;
                end
                `five : begin
                    counter <= `six;
                end
                `six : begin
                    counter <= `seven;
                end
                `seven : begin
                    counter <= `zero;
                    yichu <= 1;
                end
                 default : /* default */;
             endcase
        end
    end
end

endmodule
