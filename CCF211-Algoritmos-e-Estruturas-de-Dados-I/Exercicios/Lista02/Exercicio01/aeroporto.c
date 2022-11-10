//
// Created by isabella on 22/08/2019.
//

#include "aeroporto.h"
/*
 typedef struct {
    int idAviao,vagas;
    float pesoMax,tamAviao;
    char ciaAerea[30],origemAviao[30], destinoAviao[30];
    Passageiro passageiros[qtdPassageiros];
    }Aviao;
 */
void inicializaAviao(Aviao *aviao){
    for (int i = 0; i < qtdAvioes; ++i) {
        strcpy(aviao[i].ciaAerea,"");
        strcpy(aviao[i].origemAviao,"");
        strcpy(aviao[i].destinoAviao,"");
        aviao[i].idAviao = -1;
        aviao[i].pesoMax = 0;
        aviao[i].tamAviao = 0;
        inicializaPassageiros((aviao[i]).passageiros, qtdPassageiros);
    }
}

void imprimirAviao(Aviao aviao){
    printf("\n==============AVIAO============  ID:%d\n",aviao.idAviao);
    printf("Companhia Aerea: %s\n",aviao.ciaAerea);
    printf("Peso Máximo: %f\n",aviao.pesoMax);
    printf("Tamanho aviao: %f\n",aviao.tamAviao);
    printf("Origem aviao: %s\n",aviao.origemAviao);
    printf("Destino aviao: %s\n",aviao.destinoAviao);
    for (int i = 0; i < qtdPassageiros; ++i) {
        if(strcmp(aviao.passageiros[i].cpf,"") == 0){
            return;
        } else{
            imprimirPassageiro(aviao.passageiros[i]);
        }
    }
}
/*void cadastrarAviao(Aviao *avioes,Aviao aviao){
    for (int i = 0; i < qtdAvioes; ++i) {
        if(avioes[i].idAviao == aviao.idAviao){
            printf("Avião já cadastrado.\n");
        }
        if(avioes[i].idAviao == -1){
            avioes[i].idAviao = aviao.idAviao;
            avioes[i].pesoMax = aviao.pesoMax;
            avioes[i].tamAviao = aviao.pesoMax;
            strcpy(avioes[i].ciaAerea,aviao.ciaAerea);
            strcpy(avioes[i].origemAviao,aviao.origemAviao);
            strcpy(avioes[i].destinoAviao,aviao.destinoAviao);
            return;
        }
    }}*/

void cadastrarAviao2(Aviao *avioes, int id, char *companhia, char *origem, char *destino, float tam, float pesoMaximo){
    for(int i =0; i<qtdAvioes; i++){
        if(avioes[i].idAviao == -1){
            avioes[i].idAviao = id;
            strcpy(avioes[i].ciaAerea,companhia);
            strcpy(avioes[i].destinoAviao,destino);
            strcpy(avioes[i].origemAviao,origem);
            avioes[i].pesoMax = pesoMaximo;
            avioes[i].tamAviao = tam;
            return;
        }
    }
}

int cadastrarPassageiroAviao(Aviao *aviao,Passageiro passageiro){
    if(strcmp(aviao->passageiros[qtdPassageiros-1].cpf,"") != 0)
        return 0;
    for (int i = 0; i < qtdPassageiros; ++i) {
            if(strcmp(aviao->passageiros[i].cpf,"") == 0){
                strcpy(aviao->passageiros[i].cpf,passageiro.cpf);
                strcpy(aviao->passageiros[i].nome,passageiro.nome);
                strcpy(aviao->passageiros[i].destinoPassageiro,passageiro.destinoPassageiro);
                strcpy(aviao->passageiros[i].origemPassageiro,passageiro.origemPassageiro);
                strcpy(aviao->passageiros[i].rg,passageiro.rg);
                aviao->passageiros[i].telefone = passageiro.telefone;
                return 1;
        }
    }
}
int pesquisarAviaoId(Aviao *aviao,int id){
    for (int i = 0; i < qtdAvioes; i++) {
        if(aviao[i].idAviao == id){
            return i;
        }
    }
    return  -1;
}
int pesquisarAviaoOrigemDestino(Aviao *avioes, char *origem, char *destino){
    for(int i =0; i<qtdAvioes; i++){
        if(strcmp(avioes[i].origemAviao,origem) ==  0 && strcmp(avioes[i].destinoAviao,destino) ==  0)
            return i;
        if(avioes[i].idAviao == -1)
            return -1;
    }
    return -1;
}

