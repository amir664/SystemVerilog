module adder_test;
reg [3:0] a;
reg [3:0] b;
wire [3:0] c;

adder uut(
    .a(a),
    .b(b),
    .c(c)
);

initial begin
    // Open VCD file
    $dumpfile("adder_test.vcd");
    // Dump all variables
    $dumpvars(0, adder_test);
    
    // Test case 1
    a = 4'b0011; 
    b = 4'b1000;
    #10;
    $display("a=%b, b=%b, c=%b", a, b, c);
    
    // Test case 2
    a = 4'b0001; 
    b = 4'b0100;
    #10;
    $display("a=%b, b=%b, c=%b", a, b, c);
   
    // Test case 3
    a = 4'b0101; 
    b = 4'b1000;
    #10;
    $display("a=%b, b=%b, c=%b", a, b, c);

    $finish;
end
endmodule
