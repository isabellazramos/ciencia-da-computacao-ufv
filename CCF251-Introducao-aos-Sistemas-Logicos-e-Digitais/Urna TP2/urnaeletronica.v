module urnaeletronica(control,digit,tisabella,tclaudio,tfilipe,tguilherme,tnulo,clock,valid,finish,votestatus);
	input wire clock,valid,finish;
	input wire [3:0]digit;
	input wire [2:0]control;
	output reg [7:0]tisabella = 8'b00000000;
	output reg [7:0]tclaudio = 8'b00000000;
	output reg [7:0]tfilipe = 8'b00000000;
	output reg [7:0]tguilherme = 8'b00000000;
	output reg [7:0]tnulo = 8'b00000000;
	output reg votestatus;
	reg [3:0]estado = 4'b0000;
	reg [7:0]isabella = 8'b00000000;
	reg [7:0]claudio = 8'b00000000;
	reg [7:0]filipe = 8'b00000000;
	reg [7:0]guilherme = 8'b00000000;
	reg [7:0]nulo = 8'b00000000;

		/* Isabella - 3474
		   Cláudio - 3492
		   Filipe - 3502
		   Guilherme - 3509
		*/

	always @(posedge clock) begin

	if(finish) begin
		case (control) //inicio case
			3'b000: begin //zera os resultados obtidos na eleicao
				isabella <= 8'b00000000;
				claudio <= 8'b00000000;
				filipe <= 8'b00000000;
				guilherme <= 8'b00000000;
				nulo <= 8'b00000000;
				tisabella <= 8'b00000000;
				tclaudio <= 8'b00000000;
				tfilipe <= 8'b00000000;
				tguilherme <= 8'b00000000;
				tnulo <= 8'b00000000;
			end
			3'b001: begin //atribui quantidade de votos finais para isabella
				tisabella <= isabella;
			end
			3'b010: begin //atribui quantidade de votos finais para claudio
				tclaudio <= claudio;
			end
			3'b011: begin //atribui quantidade de votos finais para filipe
				tfilipe <= filipe;
			end
			3'b100: begin //atribui quantidade de votos finais para guilherme
				tguilherme <= guilherme;
			end
			3'b101: begin //atribui quantidade de votos nulo
				tnulo <= nulo;
			end
		endcase //fim case
	end

		else if(~finish) begin
			case(estado) //inicio case

				4'b0000: begin //primeiro estado
					if((digit == 4'b0011) & (valid)) begin//comparando 3 em binário
						estado <= 4'b0001;
					end
					else begin //voto nulo
						estado <= 4'b0101; //vai para o segundo estado nulo
					end
				end
				//fim primeiro estado

				//inicio 2ºnumvoto
				4'b0001: begin //segundo estado
					if((digit == 4'b0100) & (valid)) begin //comparando 4 em binário
						estado <= 4'b0010;
					end
					else if((digit == 4'b0101) & (valid)) begin //comparando 5 em binário
						estado <= 4'b0010;
					end
					else begin //voto nulo
						estado <= 4'b0110; //vai para o terceiro estado nulo
					end
				end
				//fim segundo estado

				4'b0010: begin //terceiro estado
					if((digit == 4'b1001) & (valid)) begin //comparando 9 em binário
						estado <= 4'b1000;
					end
					else if((digit == 4'b0111) & (valid)) begin //comparando 7 em binário
						estado <= 4'b0011;
					end
					else if((digit == 4'b0000) & (valid)) begin //comparando 0 em binário
						estado <= 4'b0011;
					end
					else begin //voto nulo
						estado <= 4'b0100; //vai para o quarto estado nulo
					end
				end
				//fim terceiro estado


				4'b1000: begin //quarto estado
					if((digit == 4'b0010) & (valid)) begin //comparando 2 em binário
						claudio <= claudio + 8'b00000001; //contagem de votos para claudio
						votestatus <= 1;
						estado <= 4'b0000;
					end
					else begin //voto nulo
						nulo <= nulo + 8'b00000001; //contagem de votos nulos
						votestatus <= 0;
						estado <= 4'b0000;
					end
				end
				//fim quarto estado

				4'b0011: begin //quarto estado
					if((digit == 4'b1001) & (valid)) begin //comparando 9 em binário
						guilherme <= guilherme + 8'b00000001; //contagem de votos para guilherme
						votestatus <= 1;
						estado <= 4'b0000;
					end
					else if((digit == 4'b0100) & (valid)) begin //comparando 4 em binário
						isabella <= isabella + 8'b00000001; //contagem de votos para isabella
						votestatus <= 1;
						estado <= 4'b0000;
					end
					else if((digit == 4'b0010) & (valid)) begin //comparando 2 em binário
						filipe <= filipe + 8'b00000001; //contagem de votos para filipe
						votestatus <= 1;
						estado <= 4'b0000;
					end
					else begin //voto nulo
						nulo <= nulo + 8'b00000001; //contagem de votos nulos
						votestatus <= 0;
						estado <= 4'b0000;
					end
				end
				//fim quarto estado

				//segundo estado nulo
				4'b0101: begin
					if(valid) begin
						estado <= 4'b0110;
					end
				end
				// fim segundo estado nulo

				//terceiro estado nulo
				4'b0110: begin
					if(valid) begin
						estado <= 4'b0100;
					end
				end
				//fim terceiro estado nulo

				//quarto estado nulo
				4'b0100: begin
					if(valid) begin
						nulo <= nulo + 8'b00000001; //contagem de votos nulos
						votestatus <= 0;
						estado <= 4'b0000;
					end
				//fim quarto estado nulo

				end
			endcase //fim case
		end

	end
endmodule
