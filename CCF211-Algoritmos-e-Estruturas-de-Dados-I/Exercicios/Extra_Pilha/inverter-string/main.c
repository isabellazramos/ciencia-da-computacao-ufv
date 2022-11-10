#include <stdio.h>
#include <string.h>
#include "pilha.h"

void empilharString(tPilha *pilha1, tItem *item, char *frase1){
    for (int i = 0; i < strlen(frase1); ++i) {
        item->letra[0] = frase1[i];
        empilhaPilha(pilha1,item);
    }
}
void empilharStringAoContrario(tPilha *pilha1, tPilha *pilha2){
    for (int j = pilha1->iTopo-1; j >= 0 ; --j) {
        empilhaPilha(pilha2,&pilha1->vItem[j]);
    }
}

int main() {
    char frase[50];
    int tamanho;

    printf("Digite uma frase:");
    gets(frase);
    tamanho = strlen(frase);
    char frase1[tamanho];

    tPilha pilha1,pilha2;
    tItem item;
    fazPilhaVazia(&pilha1);
    fazPilhaVazia(&pilha2);
    strcpy(frase1,frase);

    empilharString(&pilha1,&item,frase1);
    empilharStringAoContrario(&pilha1,&pilha2);

    imprimePilha(pilha1);
    printf("\n");
    imprimePilha(pilha2);
}
