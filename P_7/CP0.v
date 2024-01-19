`include "defines.v"
`define IM SR[15:10]    
`define EXL SR[1]       
`define IE SR[0]        
`define BD Cause[31]
`define IP Cause[15:10]
`define ExcCode Cause[6:2]

module CP0( 
    input clk,
    input reset,
    input en,  
    input [4:0] CP0Add,//连在rd�
    input [31:0] CP0In, 
    output [31:0] CP0Out, 
    input [31:2] VPC,

    input BDIn,                     
    input [4:0] ExcCodeIn,  
    input [5:0] HWInt,      
   
    input EXLClr,
    output Req,           
    output [31:0] EPCout
);

    reg [31:0] SR;
    reg [31:0] Cause;
    reg [31:2] EPCreg;
    
    wire IntReq = (|(HWInt & `IM)) & !`EXL & `IE;

    wire ExcReq = (|ExcCodeIn) & !`EXL;

    assign Req  = IntReq | ExcReq;

  //  wire [31:2] tempEPC = (Req) ? (BDIn ? VPC[31:2]-1 : VPC[31:2]) : EPCreg;

    assign EPCout = {EPCreg, 2'b0};

    assign CP0Out = (CP0Add == 12) ? SR:
                    (CP0Add == 13) ? Cause:
                    (CP0Add == 14) ? EPCout: 0;

    always@(posedge clk)begin
        if (reset) begin
            SR <= 0;
            Cause <= 0;
            EPCreg <= 0;
        end else begin
            if (EXLClr) begin 
                `EXL <= 1'b0;
            end
            if (Req) begin
                `ExcCode <= IntReq ? `INT : ExcCodeIn;
                `EXL <= 1'b1;
                EPCreg <= BDIn ? VPC[31:2]-1 : VPC[31:2];
                `BD <= BDIn;
            end else if (en) begin
                if (CP0Add == 12) SR <= CP0In;
                else if (CP0Add == 14) EPCreg <= CP0In[31:2];
            end
            `IP <= HWInt;
      end
   end

endmodule