#include "header/ShiftAndAproximado.h"
#include "header/Leitura.h"

int main(int argc, char const *argv[]){
    int k; // k = distância de edição
    char *Padrao = (char*)malloc(sizeof(char)); //Aloca memória dinamicamnete pois não se sabe o tamanho do padrão
    char Input[30]; //variavel para nome do arquivo a ser recebido
    printf("Digite o nome do arquivo de entrada:\n");
    scanf("%s", Input);
    char *Texto = Leitura(Input); //Chamando Leitura para leitura do arquivo de entrada
    printf("Entre com o padrão:\n");
    scanf("%s",Padrao);
    int Operacoes[3]; //vetor operações para "receber" as operações possíveis (inserção, substituição e remoção)
    int P = strlen(Padrao); // tamanho do padrão recebido
    printf("Digite o tamanho de k: "); 
    scanf("%d", &k);
    if(k >= P){
        printf("k é maior ou igual ao padrão.\n");
    }
    printf("Deseja realizar a operacao de insercao?\n");
    printf("1. Sim\n");
    printf("0. Nao\n");

    do{
        scanf("%d", &Operacoes[0]); // recebe a escolha do usuario sobre a operação de inserção
        if(Operacoes[0] != 1 && Operacoes[0] != 0){
            printf("Invalido!\n");
        }
    } while (Operacoes[0] != 1 && Operacoes[0] != 0);

    printf("Deseja realizar a operacao de substituicao?\n");
    printf("1. Sim\n");
    printf("0. Nao\n");

    do{
        scanf("%d", &Operacoes[2]); // recebe a escolha do usuario sobre a operação de substituição
        if(Operacoes[2] != 1 && Operacoes[2] != 0){
            printf("Invalido!\n");
        }
    } while (Operacoes[2]!= 1 && Operacoes[2] != 0);

    printf("Deseja realizar a operacao de remocao?\n");
    printf("1. Sim\n");
    printf("0. Nao\n");

    do{
        scanf("%d", &Operacoes[1]); // recebe a escolha do usuario sobre a operação de remoção
        if(Operacoes[1] != 1 && Operacoes[1] != 0){
            printf("Invalido!\n");
        }
    } while (Operacoes[1] != 1 && Operacoes[1] != 0);

    printf("\n Algoritmo Shift-And Aproximado: \n");
    ShiftAndAproximado(Texto, strlen(Texto), Padrao, P, k, Operacoes); // Chamada do Algoritmo Shift-And Aproximado
    return 0;
    

}