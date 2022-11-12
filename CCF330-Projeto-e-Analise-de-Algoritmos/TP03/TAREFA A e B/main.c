#include "header/Leitura.h"
#include "header/ShiftAnd.h"
#include "header/BMH.h"
#include "header/Tempo.h"


#define DEBUG 1

int main(){
    TipoTempo tempo;
    double Total;
    char Input[30];
    char *Padrao = (char*)malloc(sizeof(char));

    printf("Digite o nome do arquivo de entrada:\n");
    scanf("%s", Input);
    char *Texto = Leitura(Input);
    printf("Entre com o padrão:\n");
    scanf("%s",Padrao);
    int tamPadrao = strlen(Padrao);   
    
    printf("\nAlgoritmo Shift-And: \n");
    if(DEBUG)
    {
        IniciarTempo(&tempo);
        ShiftAndExato(Texto,strlen(Texto),Padrao,tamPadrao);
        PararTempo(&tempo);
        printf("Tempo de execução: %lf",TempoTotal(tempo));
    }
    else
    {
        printf("\nAlgoritmo Shift-And: \n");
        ShiftAndExato(Texto,strlen(Texto),Padrao,tamPadrao);
    }
    
    printf("\nAlgoritmo BMH: \n");
    if(DEBUG)
    {
        IniciarTempo(&tempo);
        BMH(Texto,strlen(Texto),Padrao,tamPadrao);
        PararTempo(&tempo);
        printf("Tempo de execução: %lf",TempoTotal(tempo));
    }
    else
    {
        printf("\nAlgoritmo BMH: \n");
        BMH(Texto,strlen(Texto),Padrao,tamPadrao);
    }
    
    free(Texto); 
    return 0;
}