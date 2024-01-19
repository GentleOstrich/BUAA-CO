`include "defines.v"
module ADD4 (
    input [31:0] pc,
    output reg [31:0] pc4 
);
    always @(*) begin
        pc4 = pc + 4;
    end
endmodule