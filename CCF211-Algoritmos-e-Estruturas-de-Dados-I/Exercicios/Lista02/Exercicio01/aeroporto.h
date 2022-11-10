//
// Created by isabella on 22/08/2019.
//

#ifndef TAD_AEROPORTO_AEROPORTO_H
#define TAD_AEROPORTO_AEROPORTO_H
#define qtdAvioes 10
#include <stdio.h>
#include <string.h>
#include "passageiro.h"

typedef struct {
    int idAviao,vagas;
    float pesoMax,tamAviao;
    char ciaAerea[30],origemAviao[30], destinoAviao[30];
    Passageiro passageiros[qtdPassageiros];
}Aviao;

void inicializaAviao(Aviao *aviao);
void imprimirAviao(Aviao aviao);
//void cadastrarAviao(Aviao *avioes,Aviao aviao);
void cadastrarAviao2(Aviao *avioes, int id, char *companhia, char *origem, char *destino, float tam, float pesoMaximo);
int cadastrarPassageiroAviao(Aviao *aviao,Passageiro passageiro);
int pesquisarAviaoId(Aviao *aviao,int id);
int pesquisarAviaoOrigemDestino(Aviao *avioes, char *origem, char *destino);

#endif //TAD_AEROPORTO_AEROPORTO_H
