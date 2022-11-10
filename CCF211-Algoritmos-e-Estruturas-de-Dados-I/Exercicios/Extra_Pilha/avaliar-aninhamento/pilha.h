//
// Created by isabella on 12/10/2019.
//
#include <stdlib.h>
#include <stdio.h>
#ifndef JOGO_FASE_PILHA_H
#define JOGO_FASE_PILHA_H
#define TAMMAX 50

typedef struct tItem{
    char letra[2];
}tItem;

typedef struct{
    tItem vItem[TAMMAX];
    int iTopo;
}tPilha;

void fazPilhaVazia(tPilha *pPilha);
void empilhaPilha(tPilha *pPilha, tItem *fase);
int desempilhaPilha(tPilha *pPilha, tItem *fase);
int tamanhoPilha(tPilha *pPilha);
void imprimePilha(tPilha pPilha);

#endif //INVERTERSTRINGPILHA_PILHA_H
