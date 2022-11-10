//
// Created by isabella on 20/08/2019.
//
#include "listaExercicios.h"

int main(){
    int num,resp;
    printf("Digite o numero que deseja calcular o fatorial:");
    scanf("%d",&num);
    resp = calculaFatorial(num);
    printf("A resposta é: %d",resp);
}
