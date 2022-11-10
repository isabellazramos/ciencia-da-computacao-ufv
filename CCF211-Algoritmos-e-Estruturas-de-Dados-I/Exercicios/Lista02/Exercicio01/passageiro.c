//
// Created by isabella on 23/08/2019.
//
#include "passageiro.h"

void inicializaPassageiros(Passageiro *passageiros, int tam){
    for (int i = 0; i < tam; ++i) {
        strcpy(passageiros[i].cpf,"");
        strcpy(passageiros[i].nome,"");
        strcpy(passageiros[i].rg,"");
        strcpy(passageiros[i].origemPassageiro,"");
        strcpy(passageiros[i].destinoPassageiro,"");
    }
}
void imprimirPassageiro(Passageiro passageiro){
    printf("\n =========================================== \n");
    printf("Nome: %s\n",passageiro.nome);
    printf("CPF: %s\n",passageiro.cpf);
    printf("RG: %s\n",passageiro.rg);
    printf("Telefone: %d\n",passageiro.telefone);
    printf("Origem: %s\n",passageiro.origemPassageiro);
    printf("Destino: %s\n",passageiro.destinoPassageiro);
    printf("\n =========================================== \n");
}
void cadastrarPassageiro(Passageiro *passageiros,Passageiro passageiro){
    for (int i = 0; i < passageirosTotais; ++i) {
        if(strcmp(passageiros[i].cpf,passageiro.cpf)== 0){
            printf("Passageiro já cadastrado.\n");
            break;
        }
    }
    for (int i = 0; i < passageirosTotais; ++i) {
        if(strcmp(passageiros[i].nome,"")== 0){
            strcpy(passageiros[i].nome, passageiro.nome);
            strcpy(passageiros[i].cpf, passageiro.cpf);
            strcpy(passageiros[i].rg, passageiro.rg);
            strcpy(passageiros[i].origemPassageiro, passageiro.origemPassageiro);
            strcpy(passageiros[i].destinoPassageiro, passageiro.destinoPassageiro);
            passageiros[i].telefone = passageiro.telefone;
            break;
        }

    }
}
int pesquisarPassageiro(Passageiro *passageiros, char *nome){
    for(int i =0; i<passageirosTotais; i++){
        if(strcmp(passageiros[i].nome, nome) == 0)
            return i;
    }
    return -1;
}


