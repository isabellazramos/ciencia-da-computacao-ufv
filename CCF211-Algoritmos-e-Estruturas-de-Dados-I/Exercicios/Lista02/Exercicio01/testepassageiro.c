//
// Created by isabella on 28/08/2019.
//
#include "passageiro.h"
int main(){
    //Declarar
    Passageiro passageiros[passageirosTotais];
    Passageiro passageiro;
    //Iniciar
    inicializaPassageiros(passageiros,2);

    printf("========= CADASTRO =========");
    printf("\nDigite o nome do passageiro:");
    scanf("%s",passageiro.nome);
    printf("\nDigite o cpf:");
    scanf("%s",passageiro.cpf);
    printf("\nDigite o rg:");
    scanf("%s",passageiro.rg);
    printf("\nDigite o telefone:");
    scanf("%d",&passageiro.telefone);
    printf("\nDigite o local de origem do passageiro:");
    scanf("%s",passageiro.origemPassageiro);
    printf("\nDigite o local de destino do passageiro: ");
    scanf("%s",passageiro.destinoPassageiro);

    //Cadastrar
    cadastrarPassageiro(passageiros,passageiro);
    imprimirPassageiro(passageiros[0]);
    pesquisarPassageiro(passageiros,passageiro.nome);
}
