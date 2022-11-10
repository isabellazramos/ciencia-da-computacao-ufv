//
// Created by isabella on 29/08/2019.
//
#include "aeroporto.h"
int main(){
    Aviao avioes[qtdAvioes];
    Aviao aviao[3];
    inicializaAviao(avioes);
    /*
 typedef struct {
    int idAviao,vagas;
    float pesoMax,tamAviao;
    char ciaAerea[30],origemAviao[30], destinoAviao[30];
    Passageiro passageiros[qtdPassageiros];
    }Aviao;
 */
    for (int i = 0; i < 3; ++i) {
        printf("========= CADASTRO =========");
        printf("\nDigite o ID do Avião");
        scanf("%d",&aviao[i].idAviao);
        printf("\nDigite o peso maximo suportado:");
        scanf("%f",&aviao[i].pesoMax);
        printf("\nDigite o tamanho do aviao:");
        scanf("%f",&aviao[i].tamAviao);
        printf("\nDigite a companhia aerea");
        scanf("%s",aviao[i].ciaAerea);
        printf("\nDigite o local de origem do aviao:");
        scanf("%s",aviao[i].origemAviao);
        printf("\nDigite o local de destino do passageiro: ");
        scanf("%s",aviao[i].destinoAviao);
        cadastrarAviao(avioes,aviao[i]);
    }
    for (int i = 0; i < 3; ++i) {
        imprimirAviao(aviao[i]);
    }




    return 0;
}