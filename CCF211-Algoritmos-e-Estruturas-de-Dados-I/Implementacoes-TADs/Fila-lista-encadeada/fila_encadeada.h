//
// Created by isabella on 10/10/2019.
//
#include <stdio.h>
#include <stdlib.h>
#ifndef FILA_ENCADEADA_FILA_ENCADEADA_H
#define FILA_ENCADEADA_FILA_ENCADEADA_H

typedef struct tItem{
    int resultado;
}tItem;

typedef struct Celula *Apontador;
typedef struct Celula{
    tItem item;
    struct Celula *pProx;
}tCelula;

typedef struct tFila{
    Apontador pFrente;
    Apontador pTras;
}tFila;

void fazFilaVazia(tFila *pFila);
int filaEhVazia(tFila *pFila);
int filaEnfileira(tFila *pFila, tItem *pItem);
int filaDesinfileira(tFila *pFila,tItem *pItem);
void imprimeFila(tFila pFila);
#endif //FILA_ENCADEADA_FILA_ENCADEADA
