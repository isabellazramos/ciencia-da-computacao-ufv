`include "rdc.v"
module testbench();

  reg I0, I1, I2 ,Clk, Load;
  wire FF1, FF2, FF3;

rdc instancial(.Clk(Clk), .FF1(FF1), .FF2(FF2), .FF3(FF3), .I0(I0), .I1(I1), .I2(I2), .Load(Load));

initial begin
    $dumpfile("rdc.vcd");
    $dumpvars(0,testbench);
    Clk=0;
end

always #1 Clk = ~Clk;

initial begin
  #1;Load = 1;
  #1;I0 = 0; I1=0; I2=1;
  #10;Load=0;
  #20;$finish;
end

endmodule
