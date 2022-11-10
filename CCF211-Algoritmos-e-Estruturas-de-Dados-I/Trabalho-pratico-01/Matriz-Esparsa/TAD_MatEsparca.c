#include "TAD_MatEsparca.h"
int InicializaColuna(TLista *lista, int j) {
    Apontador aux;
    int next;
    aux = lista->principal;
    for (next = 0; next < j; next++){
    aux->direita = (Apontador) malloc(sizeof(TCelula));
    aux = aux->direita;
    aux->linha = 0;
    aux->coluna = -1;
    aux->direita = lista->principal;
    aux->abaixo = aux;
    }
    return 1;
}
int InicializaLinha(TLista *lista, int i){
    Apontador aux;
    int next;
    aux = lista->principal;
    for (next = 0; next < i; ++next){
        aux->abaixo = (Apontador) malloc(sizeof(TCelula));
        aux = aux->abaixo;
        aux->linha = -1;
        aux->coluna = 0;
        aux->abaixo = lista->principal;
        aux->direita = aux;
    }
    return 1;
}
int InicializaMatriz(TLista *lista){
    //Criação da célula cabeça principal
    lista->principal = (Apontador) malloc(sizeof(TCelula));
    lista->principal->direita = lista->principal;
    lista->principal->abaixo = lista->principal;
    lista->principal->linha = -1;
    lista->principal->coluna = -1;

    return 1;
}

void ImprimeMatrizC(TLista *lista, int j){
    Apontador aux;
    int next;
    aux = lista->principal->direita;
    for(next = 0; next < j; ++next){
        printf("%d\n", aux->linha);
        printf("%d\n", aux->coluna);
        printf("\n");
        aux = aux->direita;
    }
}

void ImprimeMatrizL(TLista *lista, int i){
    Apontador aux;
    int next;
    aux = lista->principal;
    for(next = 0; next < i+1; ++next){
        printf("%d\n", aux->linha);
        printf("%d\n", aux->coluna);
        printf("\n");
        aux = aux->abaixo;
    }
}

void InsereMatriz(TLista *lista, int coluna, int linha,TProdutos *produtos){
    Apontador newcel;
    Apontador aux;
    int next;
    newcel = (Apontador)malloc(sizeof(TCelula));
    newcel->linha = linha;
    newcel->coluna = coluna;
    InicializaProd(&newcel->lisprod);
    Insere(&newcel->lisprod, produtos);

    // percorre coluna
    aux = lista->principal->direita;

    for(next = 1; next < coluna; next++){
        aux = aux->direita;
    }
    while(linha >= aux->abaixo->linha && aux->linha < aux->abaixo->linha && aux->abaixo->coluna != -1){
        if(linha == aux->abaixo->linha && aux->abaixo->coluna == coluna) {
            Insere(&aux->abaixo->lisprod, produtos);
            free(newcel);
            return;
        }
        aux = aux->abaixo;
    }
    newcel->abaixo = aux->abaixo;
    aux->abaixo = newcel;

    //percorre linha
    aux = lista->principal->abaixo;

    for(next = 1; next < linha; next++){
        aux = aux->abaixo;
    }
    while(coluna >= aux->direita->coluna && aux->coluna < aux->direita->coluna && aux->direita->linha != -1){
        if(linha == aux->direita->linha && aux->direita->coluna == coluna) {
            Insere(&aux->abaixo->lisprod, produtos);
            free(newcel);
            return;
        }
        aux = aux->direita;
    }
    newcel->direita = aux->direita;
    aux->direita = newcel;


}

void ImprimeMatriz(TLista *lista){
    Apontador aux;
    aux = lista->principal->abaixo;
    while (aux->coluna != -1){

        aux = aux->direita;
        if(aux->coluna == 1){
            printf("\nCliente: %d\n",aux->linha);
        }

        if(aux->linha == -1){
            printf("\n");
            aux = aux->abaixo;
        }else {
            printf("Produto %d: ",aux->coluna);
            Imprime(&aux->lisprod);
        }

    }
}

void LeMatriz(FILE *ptr_arq, TLista *lista, int qtd_i, int qtd_j, TProdutos *produtos) {
    int i, j, qtd;
    char data[11];
    char caracter;
    int checkfunctionC, checkfunctionL;

    //Células cabeça criadas a partir da principal de acordo com o número de linhas e colunas
    //Linhas
    checkfunctionC = InicializaColuna(lista, qtd_j);
    //colunas
    checkfunctionL = InicializaLinha(lista, qtd_i);

    if (checkfunctionL == 1 && checkfunctionC == 1) {
        printf("Linha inicializada com sucesso...\n");
        printf("Coluna inicializada com sucesso...\n");
        printf("Matriz inicializada com sucesso!\n");
    } else {
        printf("Matriz não inicializada\n");
    }
    while (!feof(ptr_arq)){
        fscanf(ptr_arq, "%d %d", &i, &j);
        caracter = fgetc(ptr_arq);
        while(caracter != '\n'){
            fscanf(ptr_arq, " %s %d", data, &qtd);
            strcpy(produtos->datacompra, data);
            produtos->qtdproduto = qtd;
            InsereMatriz(lista, j, i, produtos);
            caracter = fgetc(ptr_arq);
            if(feof(ptr_arq)){
                break;
            }
        }
    }
}

int qtdCompraporProduto(TLista *lista, int coluna){
    int next, qtdcompra;
    Apontador aux;
    Apontadorp pAux;
    qtdcompra = 0;
    aux = lista->principal;
    for (next = 0; next < coluna; next++) {
        aux = aux->direita;
    }
    while(aux->abaixo->linha != 0 && aux->abaixo->coluna != -1){
        aux = aux->abaixo;
        pAux = aux->lisprod.Primeiro;
        while (pAux->prox != NULL){
            pAux = pAux->prox;
            qtdcompra++;
        }
    }

    return qtdcompra;
}
int qtdCompraporCliente(TLista *lista, int linha){
    int next, qtdcompra;
    Apontador aux;
    Apontadorp pAux;
    aux = lista->principal;
    qtdcompra = 0;
    for (next = 0; next < linha; next++) {
        aux = aux->abaixo;
    }
    while(aux->direita->linha != -1 && aux->direita->coluna != 0){
        aux = aux->direita;
        pAux = aux->lisprod.Primeiro;
        while(pAux->prox != NULL){
            pAux = pAux->prox;
            qtdcompra++;
        }
    }

    return qtdcompra;
}






