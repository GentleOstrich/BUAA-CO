`include "defines.v"
module CTRL(																																															
    input [5:0] op,
    input [5:0] funct,
    input [4:0] a1,
    input [4:0] a2,
	input busy,
	input start_i,

	//阻塞
    input [1:0] E_Tnew,
    input [4:0] E_a3,
    input  E_we,

    input [1:0] M_Tnew,
	input [4:0] M_a3,
	input M_we,

    output reg useImm,
    output reg [1:0] EXTop,
    output reg [3:0] ALUop,
	output reg [1:0] WBHop,
    output reg RegWE,
    output reg [1:0] a3_sel,
    output reg MemWE,
	
    output reg [1:0] Tnew,

    output reg [1:0] wd_sel,
    output reg stall,

	output reg [3:0] HILOop,
	output reg start_o,
	output reg [1:0] readHL,
	output reg [1:0] writeHL
);
    
    reg [1:0] Tuse_rs;
    reg [1:0] Tuse_rt;
    

/**********************************************************/
/*useImm, EXTop, ALUop, RegWE, a3_sel, MemWE, Tnew, wd_sel*/
/**********************************************************/


    always @(*) begin
		useImm=0;
		EXTop=0;
		ALUop=0;
		WBHop=0;
		RegWE=0;
		a3_sel=0;
		MemWE=0;
		Tnew=0;
		wd_sel=0;
		Tuse_rs = 3;
		Tuse_rt = 3;
		WBHop = 0;
		HILOop=0;
		start_o=0;
		readHL=0;
		writeHL=0;
        case(op)
            `R: begin
                case(funct)
                `ADD : begin
					useImm=0;
					EXTop=0;
					ALUop=`ADDop;
					WBHop=0;
					RegWE=1;
					a3_sel=1;
					MemWE=0;
					Tnew=1;
					wd_sel=0;
					Tuse_rs = 1;
					Tuse_rt = 1;
					wd_sel=1;
				end
                `SUB : begin
					useImm=0;
					EXTop=0;
					ALUop=`SUBop;
					WBHop=0;
					RegWE=1;
					a3_sel=1;
					MemWE=0;
					Tnew=1;
					wd_sel=0;
					Tuse_rs = 1;
					Tuse_rt = 1;
					wd_sel=1;
				end
				`JR : begin
					useImm=0;
					EXTop=0;
					ALUop=0;
					WBHop = 0;
					RegWE=0;
					a3_sel=0;
					MemWE=0;
					Tnew=0;
					wd_sel=0;
					Tuse_rs = 0;
					Tuse_rt = 3;
					wd_sel=0;
				end
				`AND : begin
					useImm=0;
					EXTop=0;
					ALUop=`ANDop;
					WBHop=0;
					RegWE=1;
					a3_sel=1;
					MemWE=0;
					Tnew=1;
					wd_sel=0;
					Tuse_rs = 1;
					Tuse_rt = 1;
					wd_sel=1;
				end
				`OR : begin
					useImm=0;
					EXTop=0;
					ALUop=`ORop;
					WBHop=0;
					RegWE=1;
					a3_sel=1;
					MemWE=0;
					Tnew=1;
					wd_sel=0;
					Tuse_rs = 1;
					Tuse_rt = 1;
					wd_sel=1;
				end
				`SLT : begin
					useImm=0;
					EXTop=0;
					ALUop=`SLTop;
					WBHop=0;
					RegWE=1;
					a3_sel=1;
					MemWE=0;
					Tnew=1;
					wd_sel=0;
					Tuse_rs = 1;
					Tuse_rt = 1;
					wd_sel=1;
				end
				`SLTU : begin
					useImm=0;
					EXTop=0;
					ALUop=`SLTUop;
					WBHop=0;
					RegWE=1;
					a3_sel=1;
					MemWE=0;
					Tnew=1;
					wd_sel=0;
					Tuse_rs = 1;
					Tuse_rt = 1;
					wd_sel=1;
				end
				`MULT : begin
					useImm=0;
					EXTop=0;
					ALUop=0;
					WBHop=0;
					RegWE=0;
					a3_sel=1;
					MemWE=0;
					Tnew=0;
					wd_sel=0;
					Tuse_rs = 1;
					Tuse_rt = 1;
					wd_sel=1;
					start_o=1;
					HILOop=`MULTop;
				end
				`MULTU : begin
					useImm=0;
					EXTop=0;
					ALUop=0;
					WBHop=0;
					RegWE=0;
					a3_sel=1;
					MemWE=0;
					Tnew=0;
					wd_sel=0;
					Tuse_rs = 1;
					Tuse_rt = 1;
					wd_sel=1;
					start_o=1;
					HILOop=`MULTUop;
				end
				`DIV : begin
					useImm=0;
					EXTop=0;
					ALUop=0;
					WBHop=0;
					RegWE=0;
					a3_sel=1;
					MemWE=0;
					Tnew=0;
					wd_sel=0;
					Tuse_rs = 1;
					Tuse_rt = 1;
					wd_sel=1;
					start_o=1;
					HILOop=`DIVop;
				end
				`DIVU : begin
					useImm=0;
					EXTop=0;
					ALUop=0;
					WBHop=0;
					RegWE=0;
					a3_sel=1;
					MemWE=0;
					Tnew=0;
					wd_sel=0;
					Tuse_rs = 1;
					Tuse_rt = 1;
					wd_sel=1;
					start_o=1;
					HILOop=`DIVUop;
				end
				`MFHI : begin // 读hi
					useImm=0;
					EXTop=0;
					ALUop=0;
					WBHop=0;
					RegWE=1;
					a3_sel=1;
					MemWE=0;
					Tnew=1;
					Tuse_rs=1;
					Tuse_rt=3;
					wd_sel=1;
					start_o=0;
					HILOop=0;
					readHL=`ReadHI;
				end
				`MFLO : begin // 读lo
					useImm=0;
					EXTop=0;
					ALUop=0;
					WBHop=0;
					RegWE=1;
					a3_sel=1;
					MemWE=0;
					Tnew=1;
					Tuse_rs=1;
					Tuse_rt=3;
					wd_sel=1;
					start_o=0;
					HILOop=0;
					readHL=`ReadLO;
				end
				`MTHI : begin // 写hi
					useImm=0;
					EXTop=0;
					ALUop=0;
					WBHop=0;
					RegWE=0;
					a3_sel=0;
					MemWE=0;
					Tnew=0;
					wd_sel=0;
					Tuse_rs = 1;
					Tuse_rt = 3;
					start_o=0;
					HILOop=0;
					writeHL=`WriteHI;
				end
				`MTLO : begin // 写lo
					useImm=0;
					EXTop=0;
					ALUop=0;
					WBHop=0;
					RegWE=0;
					a3_sel=1;
					MemWE=0;
					Tnew=0;
					wd_sel=0;
					Tuse_rs = 1;
					Tuse_rt = 3;
					wd_sel=1;
					start_o=0;
					HILOop=0;
					writeHL=`WriteLO;
				end
				default: begin
					useImm=0;
					EXTop=0;
					ALUop=0;
					WBHop=0;
					RegWE=0;
					a3_sel=0;
					MemWE=0;
					Tnew=0;
					wd_sel=0;
					Tuse_rs = 3;
					Tuse_rt = 3;
					WBHop = 0;
					HILOop=0;
					start_o=0;
					readHL=0;
					writeHL=0;
				end								
                endcase
            end
            `ORI : begin
				useImm=1;
				EXTop=`ZeroExt;
				ALUop=`ORop;
				WBHop = 0;
				RegWE=1;
				a3_sel=0;
				MemWE=0;
				Tnew=1;
				Tuse_rs = 1;
				Tuse_rt = 3;
				wd_sel=1;
			end
            `LUI : begin
				useImm=1;
				EXTop=`High16;
				ALUop=`ADDop;
				WBHop = 0;
				RegWE=1;
				a3_sel=0;
				MemWE=0;
				Tnew=1;
				Tuse_rs = 3;
				Tuse_rt = 3;
				wd_sel=1;
			end
            `ADDI : begin
				useImm=1;
				EXTop=`SignExt;
				ALUop=`ADDop;
				WBHop = 0;
				RegWE=1;
				a3_sel=0;
				MemWE=0;
				Tnew=1;
				Tuse_rs = 1;
				Tuse_rt = 3;
				wd_sel=1;
			end			
            `ANDI : begin
				useImm=1;
				EXTop=`ZeroExt;
				ALUop=`ANDop;
				WBHop=0;
				RegWE=1;
				a3_sel=0;
				MemWE=0;
				Tnew=1;
				Tuse_rs = 1;
				Tuse_rt = 3;
				wd_sel=1;
			end				
            `LW : begin
				useImm=1;
				EXTop=`SignExt;
				ALUop=`ADDop;
				WBHop = `WORDop;
				RegWE=1;
				a3_sel=0;
				MemWE=0;
				Tnew=2;
				Tuse_rs = 1;
				Tuse_rt = 3;
				wd_sel=0;
			end
            `SW : begin
				useImm=1;
				EXTop=`SignExt;
				ALUop=`ADDop;
				WBHop=`WORDop;
				RegWE=0;
				a3_sel=0;
				MemWE=1;
				Tnew=0;
				Tuse_rs = 1;
				Tuse_rt = 2;
				wd_sel=0;
			end
            `LB : begin
				useImm=1;
				EXTop=`SignExt;
				ALUop=`ADDop;
				WBHop = `BYTEop;
				RegWE=1;
				a3_sel=0;
				MemWE=0;
				Tnew=2;
				Tuse_rs = 1;
				Tuse_rt = 3;
				wd_sel=0;
			end
			`SB : begin
				useImm=1;
				EXTop=`SignExt;
				ALUop=`ADDop;
				WBHop = `BYTEop;
				RegWE=0;
				a3_sel=0;
				MemWE=1;
				Tnew=0;
				Tuse_rs = 1;
				Tuse_rt = 2;
				wd_sel=0;
			end
            `LH : begin
				useImm=1;
				EXTop=`SignExt;
				ALUop=`ADDop;
				WBHop = `HALFop;
				RegWE=1;
				a3_sel=0;
				MemWE=0;
				Tnew=2;
				Tuse_rs = 1;
				Tuse_rt = 3;
				wd_sel=0;
			end
			`SH : begin
				useImm=1;
				EXTop=`SignExt;
				ALUop=`ADDop;
				WBHop = `HALFop;
				RegWE=0;
				a3_sel=0;
				MemWE=1;
				Tnew=0;
				Tuse_rs = 1;
				Tuse_rt = 2;
				wd_sel=0;
			end

            `BEQ : begin
				useImm=0;
				EXTop=0;
				ALUop=0;
				WBHop=0;
				RegWE=0;
				a3_sel=0;
				MemWE=0;
				Tnew=0;
				Tuse_rs=0;
				Tuse_rt=0;
				wd_sel=1;
			end
			`BNE : begin
				useImm=0;
				EXTop=0;
				ALUop=0;
				WBHop=0;
				RegWE=0;
				a3_sel=0;
				MemWE=0;
				Tnew=0;
				Tuse_rs=0;
				Tuse_rt=0;
				wd_sel=1;
			end

            `JAL : begin
				useImm=0;
				EXTop=0;
				ALUop=0;
				RegWE=1;
				a3_sel=2'b10;
				MemWE=0;
				Tnew=2;
				Tuse_rs = 3;
				Tuse_rt = 3;
				wd_sel=2'b10;
			end
			default: begin
				useImm=0;
				EXTop=0;
				ALUop=0;
				WBHop=0;
				RegWE=0;
				a3_sel=0;
				MemWE=0;
				Tnew=0;
				wd_sel=0;
				Tuse_rs = 3;
				Tuse_rt = 3;
				WBHop = 0;
				HILOop=0;
				start_o=0;
				readHL=0;
				writeHL=0;
			end

            //a3_sel 2'b00-rt 2'b01-rd 2'b10-32
            //wd_sel 0-mem 1-alures 2-pc+4

        endcase

    end


    // 阻塞信号
    always @(*) begin
        if ((Tuse_rs == 2'b00 && (E_Tnew == 2'b01 || E_Tnew == 2'b10) || Tuse_rs == 2'b01 && E_Tnew == 2'b10) && E_we == 1 && a1 == E_a3 && a1 != 0) begin
            stall = 1;
		end else if ((Tuse_rs == 2'b00 && (M_Tnew == 2'b01 || M_Tnew == 2'b10) || Tuse_rs == 2'b01 && M_Tnew == 2'b10) && M_we == 1 && a1 == M_a3 && a1 != 0) begin
			stall = 1;
		end else if ((Tuse_rt == 2'b00 && (E_Tnew == 2'b01 || E_Tnew == 2'b10) || Tuse_rt == 2'b01 && E_Tnew == 2'b10) && E_we == 1 && a2 == E_a3 && a2 != 0) begin
            stall = 1;
        end else if ((Tuse_rt == 2'b00 && (M_Tnew == 2'b01 || M_Tnew == 2'b10) || Tuse_rt == 2'b01 && M_Tnew == 2'b10) && M_we == 1 && a2 == M_a3 && a2 != 0) begin
            stall = 1;
        end else if ((busy == 1 || start_i == 1) && (op == `R && (funct == `MULT || funct == `MULTU || funct == `DIV || funct == `DIVU || funct == `MFHI || funct == `MFLO || funct == `MTHI || funct == `MTLO))) begin
			stall = 1;
		end else begin
            stall = 0;
        end

    end


endmodule