//
// Created by isabella on 16/08/2019.
//
//O Instituto Nacional de Meteorologia (INMET) deseja começar a fazer o controle dos dias de chuvas de cada
//mês durante um ano e comparar para ver se a média de chuva dos anos está diminuindo ou aumentando.
//Desenvolva um sistema que receba como entrada os dias de chuvas de 2 anos, calcule a média de dias
//chuvosos por mês dos 2 anos e retorne se a média está aumentando ou diminuindo.

#include "listaExercicios.h"
#include <stdio.h>

int main(){
    int ano1[12],ano2[12],soma1,soma2;
    int *p_ano1,*p_ano2;
    p_ano1 = ano1;
    p_ano2 = ano2;
    soma1 = soma2 = 0;
    printf("Digite informacoes meteorologicas do ano 1:");
    for (int i = 0; i < 12; ++i) {
        scanf("%d",p_ano1);
        soma1 += *p_ano1;
        p_ano1++;
    }
    printf("Digite informacoes meteorologicas do ano 2:");
    for (int i = 0; i < 12; ++i) {
        scanf("%d",p_ano2);
        soma2 += *p_ano2;
        p_ano2++;
    }
    comparacaoMeteorologica(soma1,soma2);
}
