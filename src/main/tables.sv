module tables(
    input logic[3:0] num,
    input logic reset,
    input logic clk ,
    output logic[8:0] out
);
/* verilator lint_off WIDTHEXPAND */
reg[3:0] counter;
reg[3:0] store;

always_ff @(posedge clk or negedge reset) begin

    if (reset == 0 )  begin
        out=num*counter;
        counter += 1;
    end
end
endmodule
/* verilator lint_off WIDTHEXPAND */

