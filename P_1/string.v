`timescale 1ns / 1ps
`define S0 2'b00
`define S1 2'b01
`define S2 2'b10
`define S3 2'b11
module string(
    input clk,
    input clr,
    input [7:0] in,
    output out
    );
    reg [1:0] s;
    assign out = (s == `S1);

    initial begin
        s <= `S0;
    end

    always @(posedge clk or posedge clr) begin : proc_
        if(clr) begin
             s <= `S0;
        end else begin
             case (s)
                `S0 : begin
                    if (in == "+" || in == "*") begin
                        s <= `S3;
                    end else if (in >= "0" && in <= "9") begin
                        s <= `S1;
                    end else begin
                        s <= `S3;
                    end
                end

                `S1 : begin
                    if (in == "+" || in == "*") begin
                        s <= `S2;
                    end else if (in >= "0" && in <= "9") begin
                        s <= `S3;
                    end else begin
                        s <= `S3;
                    end
                end

                `S2 : begin
                    if (in == "+" || in == "*") begin
                        s <= `S3;
                    end else if (in >= "0" && in <= "9")  begin
                        s <= `S1;
                    end else begin
                        s <= `S3;
                    end
                end
                
                default : s <= `S3;
             endcase
        end
    end

endmodule
