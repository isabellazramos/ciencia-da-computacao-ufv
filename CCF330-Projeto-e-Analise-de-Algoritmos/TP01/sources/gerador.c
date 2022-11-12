#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void modoFacil()
{//Labirintos de 5x5 até 10x10
    srand( (unsigned)time(NULL) ); //srand para que os valores gerados não se repitam
    int linha = 0, coluna = 0, quantidadeChave = 0, celula = 0, alunoLinha = 0, alunoColuna = 0;
    char nomeArquivo[30];
    FILE *arquivo;
    linha = 5 + rand() % 6; //gera um numero aleatorio para a linha
    alunoLinha = rand() % linha; //aluno em posição aleatória da linha
    coluna = 5 + rand() %6;
    alunoColuna = rand() % coluna;
    quantidadeChave = rand() % 3; //numero aleatorio de chaves 
    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArquivo);
    arquivo = fopen(nomeArquivo, "w"); //abrindo arquivo com permissão de escrita 
    
    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo!\n");
    }
    else{
        fprintf(arquivo, "%d %d %d \n", linha, coluna, quantidadeChave);//primeira linha do arquivo
        for (int i = 0; i < linha; i++){
            for (int j = 0; j < coluna; j++){
                if (i == alunoLinha && j == alunoColuna){
                 celula = 0; //quando chegar na posição[i][j] correspondente à posição que o aluno está, escreve o celula 0 (aluno)
                }
                else if (i == rand() % linha && j == rand() % coluna){ //porta ou parede
                 celula = 2 + rand() % 2; //soma 1 para não cair onde está o aluno
                }
                else{
                 celula = 1; //caminho "livre"
                }
                fprintf(arquivo, "%d", celula);
            }
            fputc('\n', arquivo); //adiciona ao final de cada linha uma quebra de linha
        }
        fclose(arquivo);
    }
}

void modoMedio()
{//Labirintos de 10x10 até 25x25
    srand( (unsigned)time(NULL) ); //srand para que os valores gerados não se repitam
    int linha = 0, coluna = 0, quantidadeChave = 0, celula = 0, alunoLinha = 0, alunoColuna = 0;
    char nomeArquivo[30];
    FILE *arquivo;
    linha = 10 + rand() % 16; //gera um numero aleatorio para a linha
    alunoLinha = 10 + rand() % 10; //aluno em posição aleatória da linha
    while(alunoLinha > linha){
        alunoLinha = 10 + rand() % 16; // aluno em posição aleatória da linha
    }
    coluna = 10 + rand() % 16;
    alunoColuna = rand() % coluna; //aluno em posição aleatoria da coluna
    quantidadeChave = (rand() % linha + rand() % coluna) * 2; //numero aleatorio de chaves
    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArquivo);
    arquivo = fopen(nomeArquivo, "w"); //abrindo arquivo com permissão de escrita

    if (arquivo == NULL){
        printf("Erro ao abrir o arquivo!\n");
    }
    else{
        fprintf(arquivo, "%d %d %d \n", linha, coluna, quantidadeChave); //primeira linha do arquivo
        for (int i = 0; i < linha; i++){
            for (int j = 0; j < coluna; j++){
                if (i == alunoLinha && j == alunoColuna){
                    celula = 0; //quando chegar na posição[i][j] correspondente à posição que o aluno está, escreve 0 (aluno)
                }
                else{
                    celula = 1 + rand() % 3; //soma 1 para não cair onde está o aluno
                }
                fprintf(arquivo, "%d", celula);
            }
            fputc('\n', arquivo); //adiciona ao final de cada linha uma quebra de linha
        }
        fclose(arquivo);
    }
}

void modoDificil()
{//Labirintos de 25x25 até 50x50
    srand( (unsigned)time(NULL) ); //srand para que os valores gerados não se repitam
    int linha = 0, coluna = 0, quantidadeChave = 0, celula = 0, alunoLinha = 0, alunoColuna = 0;
    char nomeArquivo[30];
    FILE *arquivo;
    linha = 25 + rand() % 26; //gera um numero aleatorio para a linha
    alunoLinha = linha -1; //aluno na ultima posição da linha
    coluna = 25 + rand() % 26;
    alunoColuna = rand() % coluna - 1; //aluno na posição aleatoria da coluna
    quantidadeChave = rand() % linha + rand() % coluna; //numero aleatorio de chaves 
    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArquivo);
    arquivo = fopen(nomeArquivo, "w"); //abrindo arquivo com permissão de escrita 
    
    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo!\n");
    }
    else{
        fprintf(arquivo, "%d %d %d \n", linha, coluna, quantidadeChave);//primeira linha do arquivo
        for (int i = 0; i < linha; i++){
            for (int j = 0; j < coluna; j++){
                if (i == alunoLinha && j == alunoColuna){
                 celula = 0; //quando chegar na posição[i][j] correspondente à posição que o aluno está, escreve o celula 0 (aluno)
                }
                else{
                 celula = 1 + rand() % 3;
                }
                fprintf(arquivo, "%d", celula);
            }
            fputc('\n', arquivo); //adiciona ao final de cada linha uma quebra de linha
        }
        fclose(arquivo);
    }




}