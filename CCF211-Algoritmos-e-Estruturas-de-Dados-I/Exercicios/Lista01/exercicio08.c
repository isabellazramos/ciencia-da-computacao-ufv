//
// Created by isabella on 20/08/2019.
//
//A empresa Robobot te contratou para que você auxilie uma equipe a desenvolver um sistema para analisar
//os dados de sites de compra a fim de descobrir as tendências de compras de cada estado brasileiro
//cruzando com o perfil socioeconômico daquela região. Para isso você deverá desenvolver um subprograma
//(função) que irá receber um estado brasileiro, o cpf do comprador, o nome e o preço do produto comprado
//por estes sites. Ela deverá armazenar esses dados em uma estrutura que será, ao final, sua base de dados.
//Quando o programa principal receber ‘fim’ como estado brasileiro ele deverá chamar outro subprograma que
//irá imprimir todas as estruturas e encerrar. Assuma que o seu vetor de estruturas tenha tamanho 4 e que
//todas serão preenchidas.

#include "listaExercicios.h"

int main() {
    char estado[15];
    int cpf;
    char nomeproduto[20];
    float precoproduto;
    struct perfilSocioeconomico perfil,perfil2[4];
    for (int i = 0; i < 4; ++i) {
        printf("Digite o estado brasileiro:");
        scanf("%s", perfil.estadoBrasileiro);
        printf("Digite o CPF do comprador:");
        scanf("%d", &perfil.cpf);
        printf("Digite o nome do produto:");
        scanf("%s", &perfil.nomeProdutoComprado);
        printf("Digite o preço do produto:");
        scanf("%f", &perfil.precoProdutoComprado);
        escreveBaseDeDados(perfil,perfil2,i);
    }
    imprimirBaseDeDados(perfil2);
}
