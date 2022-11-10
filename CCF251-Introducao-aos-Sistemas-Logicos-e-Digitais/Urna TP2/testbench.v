`include "urnaeletronica.v"
module testbench();
reg clock,valid,finish;
reg [3:0]digit;
reg [2:0]control;
wire [7:0]tisabella;
wire [7:0]tclaudio;
wire [7:0]tfilipe;
wire [7:0]tguilherme;
wire [7:0]tnulo;
wire votestatus;

urnaeletronica instancial(.votestatus(votestatus), .control(control), .clock(clock), .valid(valid), .finish(finish), .digit(digit), .tisabella(tisabella), .tclaudio(tclaudio), .tfilipe(tfilipe), .tguilherme(tguilherme), .tnulo(tnulo));

initial begin
  $dumpfile("urnaeletronica.vcd");
  $dumpvars(0, testbench);
  $display("-----Urna Eletronica-----");
  $monitor("- Votos para Isabella: %d\n- Votos para Claudio: %d\n- Votos para Filipe: %d\n- Votos para Guilherme: %d\n- Votos nulos:%d\n", tisabella, tclaudio, tfilipe, tguilherme, tnulo);
end

initial begin

// Inserindo dígitos para Isabella
  #1; clock = 0;
  #1; clock = 1; finish = 0; valid = 0;digit = 4'b0011; valid = 1;
  #1; clock = 0;
  #1; clock = 1; valid = 0; digit = 4'b0100; valid = 1;
  #1; clock = 0;
  #1; clock = 1; valid = 0; digit = 4'b0111; valid = 1;
  #1; clock = 0;
  #1; clock = 1; valid = 0; digit = 4'b0100; valid = 1;

  // Inserindo dígitos para Cláudio
  #1; clock = 0;
  #1; clock = 1; valid = 0; digit = 4'b0011; valid = 1;
  #1; clock = 0;
  #1; clock = 1; valid = 0; digit = 4'b0100; valid = 1;
  #1; clock = 0;
  #1; clock = 1; valid = 0; digit = 4'b1001; valid = 1;
  #1; clock = 0;
  #1; clock = 1; valid = 0; digit = 4'b0010; valid = 1;

// Inserindo dígitos para Filipe
  #1; clock = 0;
  #1; clock = 1; valid = 0; digit = 4'b0011; valid = 1;
  #1; clock = 0;
  #1; clock = 1; valid = 0; digit = 4'b0101; valid = 1;
  #1; clock = 0;
  #1; clock = 1; valid = 0; digit = 4'b0000; valid = 1;
  #1; clock = 0;
  #1; clock = 1; valid = 0; digit = 4'b0010; valid = 1;

// Inserindo dígitos para Guilherme
  #1; clock = 0;
  #1; clock = 1; valid = 0; digit = 4'b0011; valid = 1;
  #1; clock = 0;
  #1; clock = 1; valid = 0; digit = 4'b0101; valid = 1;
  #1; clock = 0;
  #1; clock = 1; valid = 0; digit = 4'b0000; valid = 1;
  #1; clock = 0;
  #1; clock = 1; valid = 0; digit = 4'b1001; valid = 1;

// Inserindo dígitos para Nulo
  #1; clock = 0;
  #1; clock = 1; valid = 0; digit = 4'b0011; valid = 1;
  #1; clock = 0;
  #1; clock = 1; valid = 0; digit = 4'b0101; valid = 1;
  #1; clock = 0;
  #1; clock = 1; valid = 0; digit = 4'b0000; valid = 1;
  #1; clock = 0;
  #1; clock = 1; valid = 0; digit = 4'b1111; valid = 1;


  #1; clock = 0;
  #1; clock = 1; finish = 1; clock = 0;//Finalizando a votação
  #1; clock = 1 ;control = 3'b001; //mostrando votos de Isabella
  #1; clock = 0;
  #1; clock = 1; control = 3'b010; //mostrando votos de Cláudio
  #1; clock = 0;
  #1; clock = 1; control = 3'b011; //mostrando votos de Filipe
  #1; clock = 0;
  #1; clock = 1; control = 3'b100; //mostrando votos de Guilherme
  #1; clock = 0;
  #1; clock = 1; control = 3'b101; //mostrando votos nulos
  #1; clock = 0;
  #1; clock = 1; control = 3'b000; //zerando os votos
  #1;
  $finish;
end

endmodule
