#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int vidaTotal;
}TipoVida;

typedef int **Caverna;

int **InicializarCaverna(int linha, int coluna, TipoVida *qtdVida, int vida);
void PreencherCaverna(int **Caverna, int linha, int coluna, int valor);
void ImprimirCaverna(int **Caverna,int linha, int coluna);
int Maior(int a,int b);
int LinhaPosicaoAtual(int **Caverna, int linha, int coluna);
int ChegouNoFim(int **Caverna, int linha, int coluna);
int ForaDaMatriz(int i, int j, int linha, int coluna);
int ColunaPosicaoAtual(int **Caverna, int linha, int coluna);
int **InicializarCavernaAuxiliar(int linha,int coluna);
int MovimentaEstudante(int **Caverna,int **CavernaAux, int i, int j, int linha, int coluna, TipoVida *vida);
int Inicio(int **Caverna, int linha, int coluna);
int **PreencherMatrizSecundaria(int **Caverna, int linha, int coluna);
int VerificaSaidaCaverna(int **CavernaAux,int i,int j,int linha,int coluna, TipoVida vida);