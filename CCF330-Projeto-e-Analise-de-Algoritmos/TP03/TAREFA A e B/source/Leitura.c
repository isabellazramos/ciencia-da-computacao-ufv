#include "../header/Leitura.h"

char *Leitura(char *input){
    FILE *arquivo;
    char Palavra[30];
    char *Texto = (char*)calloc(100000,sizeof(char));
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
            strcat(Texto,Palavra);
            strcat(Texto," ");
            strcpy(Palavra,"\0");
        }
        strcat(Texto,"\0");
        return Texto;
    }
}