//
// Created by isabella on 16/08/2019.
//
//Faça um algoritmo que calcule quantos litros de combustível um carro irá gastar em uma viagem, sabendo
//que ele faz 16km/L. Deverão ser fornecidos o tempo gasto na viagem e a velocidade média

#include <stdio.h>
#include "listaExercicios.h"

int main(){
    float litros = litrosCombustivel(1,16);
    printf("%f\n",litros);
}
