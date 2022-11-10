//
// Created by isabella on 20/08/2019.
//

#include <stdio.h>
#include "listaExercicios.h"

//Uma floricultura deseja cadastrar os tipos de flores que possui em estoque. Cada flor lhe é atribuída um
//código de identificação único, um nome, um preço, um país de origem, a quantidade em estoque e uma
//coloração predominante. Desenvolva um sistema que leia e armazene os atributos de N flores, o sistema
//deve parar de ler ao receber um código de identificação negativo. Após isso, o usuário pode pesquisar o
//nome de uma flor que deseja e o sistema deverá retornar todas as informações daquela flor bem como
//informar se possui ou não em estoque. O sistema deve parar após o usuário digitar “sair” como nome da
//flor. Assuma N menor ou igual a 10

/** -NOME
 *  -PREÇO
 *  PAÍS DE ORIGEM
 *  QTD
 *  COLORAÇÃO
 **/

int main(){
    int n = 0,id,b = 0;
    struct tFlor tipoDeFlor[10];
    for (int i = 0; i < 10; ++i) {
        printf("Digite o código de identificação da %dº planta:",i+1);
        scanf("%d",&tipoDeFlor[i].id);
        if(tipoDeFlor[i].id < 0){
            break;
        }
        printf("Digite o nome da %dº planta:",i+1);
        scanf("%s",&tipoDeFlor[i].nome);
        if(strcmp(tipoDeFlor[i].nome,"sair") == 0){
            break;
        }
        printf("Digite o preço da %dº planta:",i+1);
        scanf("%f",&tipoDeFlor[i].preco);
        printf("Digite o país de origem da %dº planta:",i+1);
        scanf("%s",&tipoDeFlor[i].paisOrigem);
        printf("Digite a quantidade disponível da %dº planta no estoque:",i+1);
        scanf("%s",&tipoDeFlor[i].qtdEstoque);
        printf("Digite a coloração predominante da %dº planta:",i+1);
        scanf("%s",&tipoDeFlor[i].coloracaoPredominante);
        printf("---------------------------------------------\n");
        n++;
    }
    while (b != 2){
    printf("------------- PESQUISAR PLANTAS -------------\n");
    printf("Digite o id da planta que gostaria de buscar:\n");
    scanf("%d",&id);
    for (int j = 0; j < 10; ++j) {
        if (id == tipoDeFlor[j].id){
            printf("- ID: %d\n- NOME: %s\n- PREÇO: %f\n- PAIS DE ORIGEM: %s\n- QUANTIDADE EM ESTOQUE: %d\n- COLORAÇÃO PREOMINANTE: %s\n",tipoDeFlor[j].id,tipoDeFlor[j].nome,tipoDeFlor[j].preco,tipoDeFlor[j].paisOrigem,tipoDeFlor[j].qtdEstoque,tipoDeFlor[j].coloracaoPredominante);
        }
    }
    printf("Deseja procurar mais uma planta?\n"
           "1 - Sim\n"
           "2 - Não\n");
    scanf("%d",&b);}
}