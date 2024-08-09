module encoder(
    input logic in1,
    input logic in2,
    input logic in3,
    input logic in4,
    input logic clk, 
    output logic [3:0]out,
    input logic reset
);

always_ff @(posedge clk or negedge reset) begin
    if (reset == 0) begin
    assign out= {in1,in2,in3,in4}
    end
end
endmodule

