`include "defines.v"
module ADD4 (
    input [31:0] pc,
    output reg [31:0] pcadd4 
);
    always @(*) begin
        pcadd4 = pc + 4;
    end
endmodule