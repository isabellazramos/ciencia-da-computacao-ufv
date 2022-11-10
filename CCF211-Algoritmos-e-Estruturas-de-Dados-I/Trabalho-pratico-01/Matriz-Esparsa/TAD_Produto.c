#include "TAD_Produto.h"

void InicializaProd(TLisprod *lisprod){
    lisprod->Primeiro = (Apontadorp)malloc(sizeof(TCelprod));
    lisprod->Ultimo = lisprod->Primeiro;
    lisprod->Ultimo->prox = NULL;
    lisprod->qtdprod = 0;
}

int Insere(TLisprod *lisprod, TProdutos *produtos){
    lisprod->Ultimo->prox = (Apontadorp)malloc(sizeof(TCelprod));
    lisprod->Ultimo = lisprod->Ultimo->prox;
    lisprod->Ultimo->produtos = *produtos;
    lisprod->Ultimo->prox = NULL;
    lisprod->qtdprod += lisprod->Ultimo->produtos.qtdproduto;

    return (lisprod->qtdprod);
}

void Imprime(TLisprod *lisprod){
    Apontadorp aux;
    aux = lisprod->Primeiro->prox;
    while(aux != NULL){
        printf("%s %d ", aux->produtos.datacompra, aux->produtos.qtdproduto);
        aux = aux->prox;
    }
}