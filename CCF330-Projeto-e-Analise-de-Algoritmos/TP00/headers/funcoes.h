#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>
#define LINHA 20
#define COLUNA 80

typedef struct
{
     char matriz[LINHA][COLUNA];
}structMatriz;

void inicializaMatriz(structMatriz *matriz);
void imprimeMatriz(structMatriz matriz);
void criaAsterisco(structMatriz *matriz, int quantidade);
void criaSoma(structMatriz *matriz, int quantidade);
void criaLetraX(structMatriz *matriz, int quantidade);
void criaAleatorias(structMatriz *matriz, int quantidade);
void criaObraAluno(structMatriz *matriz, int quantidade);
void criaObraSorrindo(structMatriz *matriz, int quantidade);
void criaObraPiscando(structMatriz *matriz, int quantidade);
void criaObraDormindo(structMatriz *matriz, int quantidade);
void criaObraSurpresa(structMatriz *matriz, int quantidade);
int verificaQuantidade(int quantidade);
int verificaQuantidade2(int quantidade);