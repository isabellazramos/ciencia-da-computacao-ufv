//
// Created by isabella on 12/10/2019.
//
#include "pilha.h"

void fazPilhaVazia(tPilha *pPilha){
    pPilha->iTopo = 0;
}
void empilhaPilha(tPilha *pPilha, tItem *fase){

    pPilha->vItem[pPilha->iTopo] = *fase;
    pPilha->iTopo++;
}
int desempilhaPilha(tPilha *pPilha, tItem *fase){
    if(pPilha->iTopo == 0) return 0;
    *fase = pPilha->vItem[pPilha->iTopo-1];
    pPilha->iTopo--;
}
int tamanhoPilha(tPilha *pPilha){
    return (pPilha->iTopo);
}

void imprimePilha(tPilha pPilha){
    for (int i = 0; i < pPilha.iTopo; ++i) {
        printf("%s",pPilha.vItem[i].letra);
    }
}
