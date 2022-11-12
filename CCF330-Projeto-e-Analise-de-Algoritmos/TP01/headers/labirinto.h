#ifndef LABIRINTO_H
#define LABIRINTO_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "dados.h"


typedef struct labirinto
{
    int quantidadeChaves;
}TipoItem;

typedef int **Labirinto;

int **InicializarLabirinto(int linha, int coluna,TipoItem *item, int chave);
void PreencherLabirinto(int **Labirinto, int linha, int coluna, int valor);
void ImprimirLabirinto(int **Labirinto, int linha, int coluna);
int EhParede(int **Labirinto, int linha, int coluna);
int EhPorta(int **Labirinto, int linha, int coluna);
int ChegouNoFim(int **Labirinto, int linha, int coluna);
void MarcarCaminho(int **Labirinto, int linha, int coluna);
int ColunaPosicaoAtual(int **Labirinto, int linha, int coluna);
int LinhaPosicaoAtual(int **Labirinto, int linha, int coluna);
int PosicaoInicial(int **Labirinto, int linha, int coluna);
int ForaDaMatriz(int i, int j, int linha, int coluna);
int CaminhoMarcado(int **Labirinto, int linha, int coluna);
int AbrirPorta(int **Labirinto, int linha, int coluna);
int MovimentaEstudante(int **Labirinto, TipoItem *item, int i, int j, int linha, int coluna, TipoDados *dados);
int MovimentaEstudanteAnalise(int **Labirinto, TipoItem *item, int i, int j, int linha, int coluna, TipoDados *dados, long long int *numRec);

#endif