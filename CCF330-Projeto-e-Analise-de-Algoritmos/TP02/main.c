#include "headers/caverna.h"

int main(){
    FILE *arquivo;
    char nomeArquivo[30], caractereArquivo;
    int linhaArquivo, colunaArquivo, vidaArquivo;
    int inteiroArquivo;
    int option = 0;
    Caverna caverna;
    TipoVida qtdVida;
    while (1)
    {
        int i = 0, j = 0;
        printf("Digite o nome do arquivo:\n");
        scanf("%s",nomeArquivo);
        arquivo = fopen(nomeArquivo,"r");
        while (!arquivo)
        {
            printf("Erro ao ler o arquivo!\n");
            printf("Digite o nome do arquivo novamente: ");
            scanf("%s", nomeArquivo);
            arquivo = fopen(nomeArquivo, "r");
        }
        fscanf(arquivo,"%d %d %d\n", &linhaArquivo, &colunaArquivo, &vidaArquivo);
        caverna = InicializarCaverna(linhaArquivo,colunaArquivo,&qtdVida,vidaArquivo);

        char linha[colunaArquivo*5];
        const char s[2] = " ";
        char *token;
                     
        while (!feof(arquivo) && !ferror(arquivo))
        {
            for (int i = 0; i < linhaArquivo; i++)
            {
                for (int j = 0; j < colunaArquivo; j++)
                {
                    fscanf(arquivo, "%s", linha);

                    if(linha){
                        token = strtok(linha,s);
                        char aux[100];
                        strcpy(aux, token);
                        while (token != NULL)
                        {
                            if(strcmp(aux,"F") == 0)
                            {
                                PreencherCaverna(caverna,i,j,2);
                            }
                            else if(strcmp(aux,"I") == 0)
                            {
                                PreencherCaverna(caverna,i,j,1);
                            }
                            else{
                                int aux1 = atoi(aux);
                                PreencherCaverna(caverna,i,j,aux1);
                            }
                        token = strtok(NULL, s);
                        }
                    }
                
                 }

            }
            
        }

        printf("Arquivo carregado com sucesso!!\n");
        fclose(arquivo);
        int linhaAluno = LinhaPosicaoAtual(caverna,linhaArquivo,colunaArquivo);
        int colunaAluno = ColunaPosicaoAtual(caverna,linhaArquivo,colunaArquivo);

        int **CavernaAux = PreencherMatrizSecundaria(caverna,linhaArquivo,colunaArquivo);

        ImprimirCaverna(caverna,linhaArquivo,colunaArquivo);
        ImprimirCaverna(CavernaAux,linhaArquivo,colunaArquivo);

        MovimentaEstudante(caverna,CavernaAux,linhaAluno,colunaAluno,linhaArquivo,colunaArquivo, &qtdVida);
        break;
    }
    
}
