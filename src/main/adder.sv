module adder(
    input logic [3:0]  a,
    input logic [3:0]  b,
    input logic reset,
    output logic [3:0]  c,
    input logic clk

);
always_ff @(posedge clk or negedge reset) begin
if (!reset) begin 
c = a+b;
end else begin 
    c = 0;
end
end
endmodule