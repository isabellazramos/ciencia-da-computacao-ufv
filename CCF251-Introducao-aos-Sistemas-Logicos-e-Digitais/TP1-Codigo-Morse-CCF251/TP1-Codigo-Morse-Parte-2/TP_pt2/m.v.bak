module m(a,b,c,d,m1,m2,m3,m4,m5,reset,ready);
    input wire a,b,c,d, reset, ready;
    output reg m1,m2,m3,m4,m5;

    always @ (*) begin //*= todas as entradas
          if(reset) begin
            m1=0;
            m2=0;
            m3=0;
            m4=0;
            m5=0;
          end

          else if (ready) begin
            m1 = (b & ~c) | (~a & ~c & d) | (c & ~b);//~a & ((b & ~c) | (~c & d) | (~b & c));
            m2 = (b & ~c) | (~a & ~b & c) | (c & ~d);
            m3 = (~a & b) | (c & d);
            m4 = (~a & b) | (a & ~c & ~d);
            m5 = (a & ~c) | (d & b) | (c & b);
          //m1<=1; não bloqueante = faz receber 1 ao mesmo tempo | apenas em clock
          //m1=1; bloqueante
          end
    end
endmodule
