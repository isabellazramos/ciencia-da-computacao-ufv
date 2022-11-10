//
// Created by isabella on 16/08/2019.
//
//Faça um algoritmo que lê as idades de pessoas até que a entrada seja um número negativo. Depois calcule
//a média das idades e mostre na tela, a maior, a menor e a média das idades
#include "listaExercicios.h"
#include <stdio.h>

int main(){
    int idade, maior,menor,soma, *soma_p,n;
    float media;
    soma_p = &soma;
    soma = 0;
    scanf("%d",&idade);
    lerIdades(idade,soma_p);
    menor = idade;
    maior = idade;
    n = 1;
    while(free) {
        scanf("%d", &idade);
        if (idade < 0){
            break;
        }
        lerIdades(idade, soma_p);
        n++;
        if (maior < idade) {
            maior = idade;
        }
        if (menor > idade) {
            menor = idade;
        }
    }
    media = (*soma_p)/n;
    printf("A maior idade eh %d\nA menor idade eh %d\nA media das idades eh %f\n",maior,menor,media);
    return 0;
}