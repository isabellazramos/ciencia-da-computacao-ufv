#include "../headers/dados.h"
#include <stdio.h>
#include <stdlib.h>

void IniciarDados(TipoDados *dados)
{
    dados->qntMovimento = -1; //-1 para desconsiderar a movimentação quando o estudante está parado
    dados->colunaChegou = 0;
    dados->consegueSair = 0;
}

void ImprimirDados(TipoDados dados)
{
    if(dados.consegueSair == 1){
        printf("\nO estudante se movimentou %d vezes e chegou na coluna %d da primeira linha.\n", dados.qntMovimento, dados.colunaChegou);
    }
    else{
        printf("\nO estudante se movimentou %d vezes e percebeu que o labirinto nao tem saida.\n", dados.qntMovimento);
    }
}

void DadosFinal(TipoDados *dados, int i)
{
    dados->qntMovimento ++;
    dados->colunaChegou = i;
    dados->consegueSair = 1;
}