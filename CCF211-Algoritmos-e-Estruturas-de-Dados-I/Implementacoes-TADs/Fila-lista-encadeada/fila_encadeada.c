//
// Created by isabella on 10/10/2019.
//
#include "fila_encadeada.h"
void fazFilaVazia(tFila *pFila){
    pFila->pFrente = (Apontador)malloc(sizeof(tCelula));
    pFila->pTras = pFila->pFrente;
    pFila->pFrente->pProx = NULL;
}

int filaEhVazia(tFila *pFila){
    return (pFila->pFrente == pFila->pTras);
}
int filaEnfileira(tFila *pFila, tItem *pItem){
    Apontador pNovo;
    pNovo = (Apontador)malloc(sizeof(tCelula));
    //if(pNovo == NULL) return 0;
    pFila->pTras->pProx = pNovo;
    pFila->pTras = pNovo;
    pNovo->item = *pItem;
    pNovo->pProx = NULL;

}
int filaDesinfileira(tFila *pFila,tItem *pItem){
    Apontador pAux;
    if(filaEhVazia(pFila)) return 0;
    pAux = pFila->pFrente;
    pFila->pFrente= pFila->pFrente->pProx;
    *pItem = pFila->pFrente->item;
    free(pAux);
    return 1;
}
void imprimeFila(tFila pFila){
    Apontador aux;
    aux = pFila.pFrente->pProx;
    while (aux!=NULL){
        printf("%d\n",aux->item.resultado);
        aux=aux->pProx;
    }
}