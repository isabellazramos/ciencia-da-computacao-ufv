//
// Created by isabella on 05/09/2019.
//
#include <stdio.h>
#include <stdlib.h>
#ifndef LISTAARRANJO_LISTAARRANJO_H
#define LISTAARRANJO_LISTAARRANJO_H
#define InicioArranjo 0
#define MaxTam 100

typedef struct {
    int chave;
}TItem;

typedef struct {
    TItem item[MaxTam];
    int primeiro,ultimo;
}TLista;

void fazListaVazia(TLista *pLista);
int listaEhVazia(TLista *pLista);
int insereLista(TLista *pLista, int chave);
int retiraLista(TLista *pLista, int posicao, TItem *pItem);
void imprimeLista(TLista *pLista);

#endif //LISTAARRANJO_LISTAARRANJO_H
