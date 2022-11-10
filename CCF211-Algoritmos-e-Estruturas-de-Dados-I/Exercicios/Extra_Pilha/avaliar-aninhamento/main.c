#include <stdio.h>
#include <string.h>
#include "pilha.h"

void empilharString(tPilha *pilha1, tItem *item, char *frase1,int *ida, int *volta){
    ida = volta = 0;
    char a[2];
    char b[2];
    char valid[2];
    strcpy(a,"(");
    strcpy(b,")");
    for (int i = 0; i < strlen(frase1); ++i) {
        item->letra[0] = frase1[i];
        strcpy(valid,item->letra);

        if(strcmp(a,valid) == 0){
            ida++;
        }
        if(strcmp(b,valid) == 0){
            volta++;
        }
        empilhaPilha(pilha1,item);
    }
    if(ida == volta){
        printf("O aninhamento esta correto.");
    } else{
        printf("O aninhamento não esta correto.");
    }
}


int main() {
    char frase[50];
    int tamanho,ida,volta;
    printf("Digite uma equação:");
    gets(frase);
    tamanho = strlen(frase);
    char equacao[tamanho];

    tPilha pilha1;
    tItem item;
    fazPilhaVazia(&pilha1);
    strcpy(equacao, frase);

    empilharString(&pilha1, &item, equacao, &ida, &volta);

}
