module multiplexer_test;
reg[3:0] input1;
reg[3:0] input2;
reg[3:0] input3;
reg[3:0] input4;
reg[1:0] sel;
wire[3:0] out;

multiplexer uut(
    .input1(input1),
    .input2(input2),
    .input3(input3),
    .input4(input4),
    .sel(sel),
    .out(out)
    
);
initial begin
    $dumpfile("multiplexer_test.vcd");
    $dumpvars(0, multiplexer_test);  

    //1
    input1=4'b1000;
    input2=4'b0100;
    input3=4'b0010;
    input4=4'b0001;
    #1
    sel=2'b00; 
    #2
    sel=2'b01; 
    $finish;
end
endmodule 





    