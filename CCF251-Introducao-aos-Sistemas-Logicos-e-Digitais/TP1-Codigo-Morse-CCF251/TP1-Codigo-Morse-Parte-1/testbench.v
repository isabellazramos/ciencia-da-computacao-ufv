`include "m.v"

module testbench ();
    reg a,b,c,d,reset,ready;
    wire m1,m2,m3,m4,m5;

    m instancial (.a(a), .b(b), .c(c), .d(d), .m1(m1),.m2(m2),.m3(m3),.m4(m4),.m5(m5),.reset(reset),.ready(ready));

    initial begin
        $dumpfile("m.vcd");
        $dumpvars(0, testbench);
        $display("a b c d = m1 m2 m3 m4 m5");
        $monitor("%b%b%b%b = %b %b %b %b %b",a,b,c,d,m1,m2,m3,m4,m5);
    end

    //always @ ( * ) begin
    //  #1; clock = ~clock;
    //end

    initial begin
        //#1; clock = 4'b1;
        //#1; reset = 1'b1;
        //#1; reset = 1'b0;
            reset =1;
        #1; reset =0;
        #1;ready=0; a=0; b=0; c=0; d=1; ready=1;
        #1;ready=0; a=0; b=0; c=1; d=0; ready=1;
        #1;ready=0; a=0; b=0; c=1; d=1; ready=1;
        #1;ready=0; a=0; b=1; c=0; d=0; ready=1;
        #1;ready=0; a=0; b=1; c=0; d=1; ready=1;
        #1;ready=0; a=0; b=1; c=1; d=0; ready=1;
        #1;ready=0; a=0; b=1; c=1; d=1; ready=1;
        #1;ready=0; a=1; b=0; c=0; d=0; ready=1;
        #1;ready=0; a=1; b=0; c=0; d=1; ready=1;
        #1;ready=0; a=0; b=0; c=0; d=0; ready=1;

        $finish;
    end
// vvp executavel ou ./executavel
//iverilog monitoria.v testbench.v -o executavel -Wall

endmodule
