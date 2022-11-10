module rdc(Clk, FF1, FF2, FF3, I0, I1, I2, Load);
  input wire Clk, I0, I1, I2, Load;
  output reg FF1, FF2, FF3;
  always @(posedge Clk) begin
    if(Load) begin
      FF1 <= I0;
      FF2 <= I1;
      FF3 <= I2;
    end

    else begin
      FF3 <= FF2;
      FF2 <= FF1;
      FF1 <= FF3;
    end

  end
endmodule
