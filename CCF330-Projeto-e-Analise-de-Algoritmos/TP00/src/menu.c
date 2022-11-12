//
// Created by Isabella on 12/02/2021.
//

#include "../headers/menu.h"
#include "../headers/funcoes.h"

void menuPrincipal(){
    printf("\n\nPROGRAMA GERADOR DE OBRA DE ARTE:\n"
           "=================================\n"
           "Escolha o tipo de figura basica a ser usada para criar a obra:\n"
           "1 - asterisco simples.\n"
           "2 - simbolo de soma com asteriscos.\n"
           "3 - letra X com asteriscos.\n"
           "4 - figuras aleatorias\n"
           "5 - obra do aluno\n"
           "===================================\n"
           "DIGITE 0 PARA SAIR DO PROGRAMA\n"
           "===================================\n");
    printf("Digite o tipo de figura basica desejada:");
}

int verificaMenorQueZero(int quantidade){
    if(quantidade <= 0){
        srand(time(NULL));
        quantidade = 1+(rand()%99);
        printf("A quantidade de figuras agora eh: %d",quantidade);
        return quantidade;
    }
    else{
        return quantidade;
    }
}