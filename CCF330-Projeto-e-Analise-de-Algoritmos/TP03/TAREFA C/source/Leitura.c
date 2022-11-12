#include "../header/Leitura.h"

char *Leitura(char *input){
    FILE *arquivo;
    char Palavra[30];
    char *Texto = (char*)calloc(1000000,sizeof(char)); //armazenamento de texto. Texto maximo suportado: 1000000
    arquivo = fopen(input,"r");

    if(arquivo == NULL)
    {
        printf("Ocorreu um erro para ler o arquivo.\n");
        return NULL;
    }
    else
    {
        strcpy(Texto,"\0");
        strcpy(Palavra,"\0");
        while (fscanf(arquivo, "%s", Palavra) != EOF)
        {
            strcat(Texto,Palavra); //Cada palavra que é lida será concatenada na variavel Texto
            strcat(Texto," "); //depois de cada palavra temos um espaço
            strcpy(Palavra,"\0"); //Palavra como vazia para que possa ler palavra por palavra
        }
        strcat(Texto,"\0"); // /0 concatenado ao fim de Texto para indicar o final do texto
        return Texto; //endereço da variável é retornado
    }
}