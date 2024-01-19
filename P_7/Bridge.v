module Bridge(
    input [31:0] temp_data_addr, 
    input [31:0] temp_data_wdata, 
    input [3:0] temp_data_byteen,
    input [31:0] temp_inst_addr,
    output reg [31:0] temp_data_rdata,

    output reg [31:0] m_data_addr,
    output reg [31:0] m_data_wdata,
    output reg [3:0] m_data_byteen,
    output reg [31:0] m_inst_addr,
    input [31:0] m_data_rdata,

    output reg [31:0] TC0_addr,
    output reg TC0_we,
    output reg [31:0] TC0_wdata,
    input [31:0] TC0_rdata,

    output reg [31:0] TC1_addr,
    output reg TC1_we,
    output reg [31:0] TC1_wdata,
    input [31:0] TC1_rdata
);
    
    always @(*) begin
        m_data_wdata = temp_data_wdata;
        TC0_wdata = temp_data_wdata;
        TC1_wdata = temp_data_wdata;

        m_data_addr = temp_data_addr;
        TC0_addr = temp_data_addr[31:0];
        TC1_addr = temp_data_addr[31:0];

        m_inst_addr = temp_inst_addr;

        if (temp_data_addr >= 32'h7f00 && temp_data_addr <= 32'h7f0b) temp_data_rdata = TC0_rdata;
        else if (temp_data_addr >= 32'h7f10 && temp_data_addr <= 32'h7f1b) temp_data_rdata = TC1_rdata;
        else temp_data_rdata = m_data_rdata;

        if (|temp_data_byteen) begin
            if (temp_data_addr >= 32'h7f00 && temp_data_addr <= 32'h7f0b) begin
                m_data_byteen = 0;
                TC1_we = 0;
                TC0_we = 1;
            end else if (temp_data_addr >= 32'h7f10 && temp_data_addr <= 32'h7f1b) begin
                m_data_byteen = 0;
                TC1_we = 1;
                TC0_we = 0;
            end else begin
                m_data_byteen = temp_data_byteen;
                TC1_we = 0;
                TC0_we = 0;
            end
        end else begin
            m_data_byteen = 0;
            TC1_we = 0;
            TC0_we = 0;
        end
    end



endmodule