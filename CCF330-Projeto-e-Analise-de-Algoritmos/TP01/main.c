#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "headers/labirinto.h"
#include "headers/menu.h"
#include "headers/dados.h"
#include "headers/gerador.h"

#define MODOANALISE 0 //1 ativado, 0 desativado

int main (){
    int option = -1;
    FILE *arquivo;
    char nomeArquivo[30], caractereArquivo;
    strcpy(nomeArquivo, "\0");
    int linhaArquivo, colunaArquivo, chavesArquivo;
    Labirinto labirinto;
    TipoItem item;
    TipoDados dados;
    int inteiroArquivo;
    int linhaAluno, colunaAluno;
    long long int numRecursoes;
    int opGerador;

    while (option != 0){
        int i = 0, j = 0;
        IniciarDados(&dados);
        MenuPrincipal();
        scanf("%d",&option);

        if (option == 1)
        {
            printf("Digite o nome do arquivo a ser lido: ");
            scanf("%s",nomeArquivo);
            arquivo = fopen(nomeArquivo, "r");
            while(!arquivo)
            {
                printf("Erro ao ler o arquivo!\n");
                printf("Digite o nome do arquivo novamente: ");
                scanf("%s", nomeArquivo);
                arquivo = fopen(nomeArquivo, "r");
            }
            fscanf(arquivo,"%d %d %d\n", &linhaArquivo, &colunaArquivo, &chavesArquivo); //lendo e armazenando a quantidade de linhas, colunas e chaves iniciais
            labirinto = InicializarLabirinto(linhaArquivo,colunaArquivo,&item,chavesArquivo);

             while(!feof(arquivo) && !ferror(arquivo))
             {

                caractereArquivo = fgetc(arquivo); 
                inteiroArquivo = caractereArquivo-48;

                if(inteiroArquivo == EOF)
                { 
                    break;
                }
               
                if(caractereArquivo == '\n')
                {
                    i++;
                    j = 0;
                }
                else
                {
                    PreencherLabirinto(labirinto, i, j, inteiroArquivo);
                    j++;
                }                 
            }
            printf("Arquivo carregado com sucesso!!\n");
            fclose(arquivo);
        }
        else if (option == 2) 
        {
            linhaAluno = LinhaPosicaoAtual(labirinto,linhaArquivo,colunaArquivo);
            colunaAluno = ColunaPosicaoAtual(labirinto,linhaArquivo,colunaArquivo);
            if(MODOANALISE)
            {
                numRecursoes = -1; //Desconsidera a primeira chamada do main
                MovimentaEstudanteAnalise(labirinto, &item, linhaAluno, colunaAluno, linhaArquivo, colunaArquivo, &dados, &numRecursoes);
                printf("\n============== MODO ANALISE ==============\n");
                printf("O total de chamadas recursivas foi de: %lld\n", numRecursoes);
                printf("==========================================\n");
            }
            else
            {
                MovimentaEstudante(labirinto, &item, linhaAluno, colunaAluno, linhaArquivo, colunaArquivo, &dados);
            }
            ImprimirLabirinto(labirinto,linhaArquivo,colunaArquivo);
            ImprimirDados(dados); //imprime quantas vezes o estudante se movimentou e em qual coluna ele chegou no final
            free(labirinto);
            strcpy(nomeArquivo, "\0");
        }
        else if (option  == 3)
        {
            MenuGerador();
            scanf("%d", &opGerador);
            if(opGerador == 1){
                //Modo Facil
                modoFacil();
                printf("Arquivo gerado com sucesso!!\n");
            }
            else if(opGerador == 2){
                //Modo Medio
                modoMedio();
                printf("Arquivo gerado com sucesso!!\n");
            }
            else if(opGerador == 3){
                //Modo Dificil
                modoDificil();
                printf("Arquivo gerado com sucesso!!\n");
            }
        }
    }
    return 0;
}