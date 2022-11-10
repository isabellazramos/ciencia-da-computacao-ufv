//
// Created by isabella on 17/08/2019.
//

//Faça um algoritmo que seja capaz de identificar se uma matriz é uma matriz identidade ou não.

#include "listaExercicios.h"
#include <stdio.h>

int main(){
    int n;
    printf("Digite o tamanho da matriz\n");
    scanf("%d",&n);
    int matriz[n][n];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("Digite valores para a matriz\n");
            scanf("%d",&matriz[i][j]);
        }
    }
    identificadorMatrizId(n,matriz);

}