//
// Created by isabella on 05/09/2019.
//
#include "listaArranjo.h"

void fazListaVazia(TLista *pLista){
    pLista->primeiro = InicioArranjo;
    pLista->ultimo = pLista->primeiro;
}

int listaEhVazia(TLista *pLista){
    if(pLista->ultimo == pLista ->primeiro){
        return 1; // lista é vazia
    }else{
        return 0; // lista não é vazia
    }
}

int insereLista(TLista *pLista, int chave){
    if(pLista->ultimo == MaxTam){
        return 0; // lista está cheia
    }
    pLista->item[pLista->ultimo].chave = chave;
    pLista->ultimo +=1;
    return 1;
}
int retiraLista(TLista *pLista, int posicao, TItem *pItem){
    int cont;
    if(listaEhVazia(pLista) || posicao >= pLista->ultimo || posicao <0 ){
        return 0; //lista vazia || indice nao existente || posicao negativa
    }

    *pItem = pLista->item[posicao]; //retirar valor
    for (cont = posicao + 1;cont <= pLista->ultimo; cont++) {
        pLista->item[cont-1] = pLista->item[cont];
    }
    pLista->ultimo -=1;
    return 1;
}
void imprimeLista(TLista *pLista){
    for (int i = pLista->primeiro; i < pLista->ultimo; ++i) {
        printf("%d ",pLista->item[i].chave);
    }
}
