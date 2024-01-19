`timescale 1ns / 1ps
`define S0 4'b0000
`define S1 4'b0001
`define S2 4'b0010
`define S3 4'b0011
`define S4 4'b0100
`define S5 4'b0101
`define S6 4'b0110
`define S7 4'b0111
`define S8 4'b1000
`define S9 4'b1001
module BlockChecker(
    input clk,
    input reset,
    input [7:0] in,
    output result
    );
    reg [63:0] stack;
    reg [3:0] state;
    reg error;

    initial begin
        stack = 0;
        state = `S0;
        error = 0;
    end

    assign result = (stack == 0 && stack[63] == 0) ? 1 : 0;

    always @(posedge clk, posedge reset) begin
        if (reset == 1) begin
            stack <= 0;
            state <= `S0;
            error <= 0;
        end else begin
            if (state == `S8) begin
                if (in != " ") begin
                    stack <= stack + 1;
                end
            end else if (state == `S5) begin
                if (in != " ") begin
                    stack <= stack - 1;
                end
            end
            if (in == " ") begin
                state <= `S0;
            end else if (in == "B" || in == "b") begin
                if (state == `S0) begin
                    state <= `S1;
                end else begin
                    state <= `S9;
                end
            end else if (in == "E" || in == "e") begin
                if (state == `S1) begin
                    state <= `S2;
                end else if (state == `S0) begin
                    state <= `S6;
                end else begin
                    state <= `S9;
                end
            end else if (in == "G" || in == "g") begin
                if (state == `S2) begin
                    state <= `S3;
                end else begin
                    state <= `S9;
                end
            end else if (in == "I" || in == "i") begin
                if (state == `S3) begin
                    state <= `S4;
                end else begin
                    state <= `S9;
                end
            end else if (in == "N" || in == "n") begin
                if (state == `S4) begin
                    state <= `S5;
                    if (stack[63] == 0) begin
                        stack <= stack + 1;
                    end
                end else if (state == `S6) begin
                    state <= `S7;
                end else begin
                    state <= `S9;
                end
            end else if (in == "D" || in == "d") begin
                if (state == `S7) begin
                    state <= `S8;
                    stack <= stack - 1;
                end else begin
                    state <= `S9;
                end
            end else if (in >= "a" && in <= "z" || in >= "A" && in <= "Z")begin
                state <= `S9;
            end
            end 
        end
    
endmodule
