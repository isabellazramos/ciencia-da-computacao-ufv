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
		case (control)
			3'b000: begin
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
			3'b001: begin
				tisabella <= isabella;
			end
			3'b010: begin
				tclaudio <= claudio;
			end
			3'b011: begin
				tfilipe <= filipe;
			end
			3'b100: begin
				tguilherme <= guilherme;
			end
			3'b101: begin
				tnulo <= nulo;
			end
		endcase
	end

		else if(~finish) begin
			case(estado) //inicio case

				4'b0000: begin //1
					if((digit == 4'b0011) & (valid)) begin//3
						estado <= 4'b0001;
					end
					else begin //voto nulo
						estado <= 4'b0101;
					end
				end
				//fim 1ºnumvoto

				//inicio 2ºnumvoto
				4'b0001: begin //2
					if((digit == 4'b0100) & (valid)) begin //4
						estado <= 4'b0010;
					end
					else if((digit == 4'b0101) & (valid)) begin //5
						estado <= 4'b0010;
					end
					else begin //voto nulo
						estado <= 4'b0110;
					end
				end
				//fim 2ºnuvoto

				4'b0010: begin //3
					if((digit == 4'b1001) & (valid)) begin //9
						estado <= 4'b1000;
					end
					else if((digit == 4'b0111) & (valid)) begin //7
						estado <= 4'b0011;
					end
					else if((digit == 4'b0000) & (valid)) begin //0
						estado <= 4'b0011;
					end
					else begin
						estado <= 4'b0100;
					end
				end

				4'b1000: begin //4
					if((digit == 4'b0010) & (valid)) begin //2
						claudio <= claudio + 8'b00000001;
						votestatus <= 1;
						estado <= 4'b0000;
					end
					else begin
						nulo <= nulo + 8'b00000001;
						votestatus <= 0;
						estado <= 4'b0000;
					end
				end


				4'b0011: begin //4
					if((digit == 4'b1001) & (valid)) begin //9
						guilherme <= guilherme + 8'b00000001;
						votestatus <= 1;
						estado <= 4'b0000;
					end
					else if((digit == 4'b0100) & (valid)) begin //4
						isabella <= isabella + 8'b00000001;
						votestatus <= 1;
						estado <= 4'b0000;
					end
					else if((digit == 4'b0010) & (valid)) begin//2
						filipe <= filipe + 8'b00000001;
						votestatus <= 1;
						estado <= 4'b0000;
					end
					else begin
						nulo <= nulo + 8'b00000001;
						votestatus <= 0;
						estado <= 4'b0000;
					end
				end

				4'b0101: begin //5
					if(valid) begin
						estado <= 4'b0110;
					end
				end

				4'b0110: begin //6
					if(valid) begin
						estado <= 4'b0100;
					end
				end

				/*4'b0111: begin //7
					if(valid)begin
						estado <= 4'b0100;
					end
				end*/

				4'b0100: begin //4
					if(valid) begin
						nulo <= nulo + 8'b00000001;
						votestatus <= 0;
						estado <= 4'b0000;
					end
				end
			endcase //fim case
		end

	end
endmodule
