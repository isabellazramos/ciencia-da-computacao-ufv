module m(red,a,b,c,d,m1,m2,m3,m4,m5,reset,ready);
    input wire a,b,c,d, reset, ready;
    output reg m1,m2,m3,m4,m5,red;

    always @ (*) begin //*= todas as entradas
				m1=0;
            m2=0;
            m3=0;
            m4=0;
            m5=0;
				red=0; 
				//leds inicializam apagados.
				
          if(reset | {a,b,c,d} >= 4'b1010) begin
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
			 //condição para valores maiores ou iguais a 10.
			 if({a,b,c,d} >= 4'b1010) begin
				red=1;
			end
    end
endmodule
