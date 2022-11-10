#ifndef TP1AEDES_TAD_MATESPARCA_H
#define TP1AEDES_TAD_MATESPARCA_H
#include "TAD_Produto.h"

typedef struct Celula *Apontador;

typedef struct Celula{
    Apontador direita, abaixo;
    int linha, coluna;
    TLisprod lisprod;
}TCelula;

typedef struct{
    Apontador principal;
}TLista;

int InicializaMatriz(TLista *lista); //Inicializa matriz completa
int InicializaLinha(TLista *lista, int i); //Inicializa linha da matriz
int InicializaColuna(TLista *lista, int j); //Inicializa coluna da matriz

void InsereMatriz(TLista *lista, int coluna, int linha, TProdutos *produtos);

void ImprimeMatrizC(TLista *lista, int j);
void ImprimeMatrizL(TLista *lista, int i);
void ImprimeMatriz(TLista *lista);

void LeMatriz(FILE *ptr_arq, TLista *lista, int qtd_i, int qtd_j, TProdutos *produtos);
int qtdCompraporProduto(TLista *lista, int coluna);
int qtdCompraporCliente(TLista *lista, int linha);

#endif //TP1AEDES_TAD_MATESPARCA_H
