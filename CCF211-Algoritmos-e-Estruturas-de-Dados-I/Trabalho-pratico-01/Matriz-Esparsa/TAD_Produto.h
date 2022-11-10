#ifndef TP1AEDES_TAD_PRODUTO_H
#define TP1AEDES_TAD_PRODUTO_H

typedef struct celula *Apontadorp;

typedef struct {
    char datacompra[11];
    int qtdproduto;
}TProdutos;

typedef struct celula{
    TProdutos produtos;
    Apontadorp prox;
}TCelprod;

typedef struct{
    Apontadorp Primeiro, Ultimo;
    int qtdprod;
}TLisprod;

void InicializaProd(TLisprod *lisprod);
int Insere(TLisprod *lisprod, TProdutos *produtos);
void Imprime(TLisprod *lisprod);

#endif //TP1AEDES_TAD_PRODUTO_H
