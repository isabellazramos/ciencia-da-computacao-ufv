#include <stdio_ext.h>
#include <stdio.h>
#include "aeroporto.h"

void setAviao(Aviao *aviao){
    cadastrarAviao2(aviao,3651,"TAM","EUA","BR",10.5,9000.57);
    cadastrarAviao2(aviao,5136,"AZUL","BR","EUA",10.5,9000.57);
    cadastrarAviao2(aviao,3751,"MAR","ING","BR",10.5,9000.57);
    cadastrarAviao2(aviao,5137,"CADENC","BR","ING",10.5,9000.57);
    cadastrarAviao2(aviao,3656,"TAM","EUA","AUST",10.5,9000.57);
    cadastrarAviao2(aviao,5636,"GOL","AUST","EUA",10.5,9000.57);
}

void opcao1(Aviao *aviao, Passageiro *passageiros) {
    Passageiro passageiroTemporario;

    printf("------OPCAO 01-----\n");
    printf("Origem:");
    scanf("%s",passageiroTemporario.origemPassageiro);
    printf("Destino:");
    scanf("%s",passageiroTemporario.destinoPassageiro);

    int aviaoDisponivel = pesquisarAviaoOrigemDestino(aviao,passageiroTemporario.origemPassageiro,passageiroTemporario.destinoPassageiro);
    printf("%d",aviaoDisponivel);

    if (aviaoDisponivel == -1) {
        printf("Não há nenhum avião disponivel!\n");
    } else {
        printf("Nome: ");
        scanf("%s",passageiroTemporario.nome);
        printf("CPF: ");
        scanf("%s",passageiroTemporario.cpf);
        printf("RG: ");
        scanf("%s",passageiroTemporario.rg);
        printf("Telefone: ");
        scanf(" %d", &passageiroTemporario.telefone);

        if(cadastrarPassageiroAviao(&aviao[aviaoDisponivel],passageiroTemporario) == 0){
            printf("Avioes Lotados\n");
        }
        else{
            cadastrarPassageiro(passageiros,passageiroTemporario);
            printf("Tudo certo!\n");
        }
}}

void opcao2(Aviao *aviao){
    int idAviao;
    printf("Digite o identificador do aviao:");
    scanf("%d",&idAviao);
    int verifica = pesquisarAviaoId(aviao,idAviao);
    if(verifica == -1){
        printf("Aviao não encontrado.\n");
    }else{
        imprimirAviao(aviao[verifica]);
    }
}

void opcao3(Passageiro *passageiro){
    char nomePassageiro[30];
    printf("Informe o nome do passageiro:");
    scanf("%s",nomePassageiro);
    int verifica = pesquisarPassageiro(passageiro,nomePassageiro);
    if(verifica == -1){
        printf("Passageiro não encontrado.\n");
    }else{
        imprimirPassageiro(passageiro[verifica]);
    }
}

int main() {
    int op;
    Aviao avioes[qtdAvioes];
    Passageiro passageiros[passageirosTotais];

    inicializaPassageiros(passageiros, passageirosTotais);
    inicializaAviao(avioes);
    setAviao(avioes);

    while (1) {
        printf("============= MENU ============\n");
        printf("1 - Cadastrar passageiro\n");
        printf("2 - Pesquisar aviao\n");
        printf("3 - Pesquisar passageiro\n");
        printf("4 - Sair\n");
        scanf("%d", &op);
        if (op == 1) {
            opcao1(avioes, passageiros);
        } else if (op == 2) {
            opcao2(avioes);
        } else if (op == 3) {
            opcao3(passageiros);
        } else if (op == 4) {
            printf("BAAAAAAAY");
            break;
        } else {
            printf("Opcao Invalida\n");
        }
        printf("\n\n");

    }
    return 0;
}
