//
// Created by isabella on 23/08/2019.
//

#ifndef TAD_AEROPORTO_PASSAGEIRO_H
#define TAD_AEROPORTO_PASSAGEIRO_H
#define passageirosTotais 100
#define qtdPassageiros 50
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[30],cpf[15],rg[14];
    int telefone;
    char origemPassageiro[20], destinoPassageiro[20];
}Passageiro;

void inicializaPassageiros(Passageiro *passageiro, int tam);
void imprimirPassageiro(Passageiro passageiro);
void cadastrarPassageiro(Passageiro *passageiros,Passageiro passageiro);
int pesquisarPassageiro(Passageiro *passageiro,char *nome);
#endif //TAD_AEROPORTO_PASSAGEIRO_H
