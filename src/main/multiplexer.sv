module multiplexer(
    input wire [3:0] input1,
    input wire [3:0] input2,
    input wire [3:0] input3,
    input wire [3:0] input4,
    input wire [1:0] sel,
    output reg [3:0] out,
    input wire clk,
    input wire rst_n
);

always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
        out <= 4'b0000; // Set output to zero when reset is active
    end else begin
        case (sel)
            2'b00: out <= input1;
            2'b01: out <= input2;
            2'b10: out <= input3;
            2'b11: out <= input4;
            default: out <= 4'b0000; // Default case
        endcase
    end
end

endmodule