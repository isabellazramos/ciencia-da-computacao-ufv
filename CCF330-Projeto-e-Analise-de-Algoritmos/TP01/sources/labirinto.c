#include "../headers/labirinto.h"
#include "../headers/dados.h"

//criando matriz do labirinto
int **InicializarLabirinto(int linha, int coluna,TipoItem *item, int chave)
{
    int **LabirintoRetorno;

    LabirintoRetorno = (int**)calloc((linha+1),sizeof(int*));
    for (int i = 0; i < linha; i++)
    {
        LabirintoRetorno[i] = (int*)calloc((coluna+1),sizeof(int));
    }
    item->quantidadeChaves = chave;
    return LabirintoRetorno;
}

//preenchendo o labirinto com os valores do arquivo
void PreencherLabirinto(int **Labirinto, int linha, int coluna, int valor)
{   
    if(valor == 0)
    {
        Labirinto[linha][coluna] = 0;
    }
    else if(valor == 1)
    {
        Labirinto[linha][coluna] = 1;
    }
    else if(valor == 2)
    {
        Labirinto[linha][coluna] = 2;
    }
    else if(valor == 3)
    {
        Labirinto[linha][coluna] = 3;
    }
}

//imprimir labirinto
void ImprimirLabirinto(int **Labirinto, int linha, int coluna)
{
    printf("\n");
    for(int i = 0; i < linha; i++)
    {
      for(int j = 0; j < coluna; j++)
      {
        if(Labirinto[i][j] == -1)
        {
            printf("* ");
        }else
        {
          printf("%d ",Labirinto[i][j]);
        }
      }
    printf("\n");
  }
}

//verificando se a célula da matriz é uma parede
int EhParede(int **Labirinto, int linha, int coluna)
{
    if(Labirinto[linha][coluna] == 2)
    {
        return 1;
    }
    return 0;
}

//verificando se a célula da matriz é uma porta
int EhPorta(int **Labirinto, int linha, int coluna)
{
    if(Labirinto[linha][coluna] == 3)
    {
        return 1;
    }
    return 0;
}

//mudar o valor da porta para célula vazia
int AbrirPorta(int **Labirinto, int linha, int coluna)
{
    Labirinto[linha][coluna] = 1;
}

//verificando se chegou na primeira linha da matriz
int ChegouNoFim(int **Labirinto, int linha, int coluna)
{
    if(linha <= 0 && !EhParede(Labirinto, linha, coluna))
    {
        return 1;
    }
    return 0;
}

//marcando o caminho passado pelo aluno
void MarcarCaminho(int **Labirinto, int linha, int coluna)
{
    Labirinto[linha][coluna] = -1;
}

int CaminhoMarcado(int **Labirinto, int linha, int coluna)
{
    if (Labirinto[linha][coluna] == -1)
    {
        return 1;
    }
    return 0;
}

//recuperando a coluna que o aluno se encontra
int ColunaPosicaoAtual(int **Labirinto, int linha, int coluna)
{
    for(int i = 0; i < linha; i++)
    {
        for(int j = 0; j < coluna; j++)
        {
            if (Labirinto[i][j] == 0)
            {
               return j;
            }
            
        }
    }
}

//recuperando a linha que o aluno se encontra
int LinhaPosicaoAtual(int **Labirinto, int linha, int coluna)
{
    for(int i = 0; i < linha; i++)
    {
        for(int j = 0; j < coluna; j++)
        {
            if (Labirinto[i][j] == 0)
            {
                return i;
            }
            
        }
    }
}

//verificando se a celula é a posição inicial do aluno
int PosicaoInicial(int **Labirinto, int linha, int coluna)
{
    if(Labirinto[linha][coluna] == 0)
    {
        return 1;
    }
    return 0;
}

//verificar se foi acessado um local fora da matriz
int ForaDaMatriz(int i, int j, int linha, int coluna)
{
    if(j >= coluna || i >= linha || j < 0)
    {
        return 1;
    }
    return 0;
}

//backtracking
int MovimentaEstudante(int **Labirinto, TipoItem *item, int i, int j, int linha, int coluna, TipoDados *dados){
    if(ChegouNoFim(Labirinto, i, j))
    {
        DadosFinal(dados, j);
        printf("Linha: %d Coluna: %d\n", i, j);
        MarcarCaminho(Labirinto,i,j);
        return 1;
    }

    if(ForaDaMatriz(i,j,linha,coluna))
    {   
        dados->consegueSair = 0;//ultrapassou
        return 0;
    }

    if(!EhParede(Labirinto, i, j) && !EhPorta(Labirinto,i,j))
    {
        dados->qntMovimento ++;
        printf("Linha: %d Coluna: %d\n", i, j);
    }

    if(EhPorta(Labirinto, i, j) && item->quantidadeChaves >0)
    {
        dados->qntMovimento ++;
        printf("Linha: %d Coluna: %d\n", i, j);
        item->quantidadeChaves--;
        AbrirPorta(Labirinto,i,j);
    }

    if(!CaminhoMarcado(Labirinto,i,j) && !EhPorta(Labirinto,i,j) && !EhParede(Labirinto,i,j))
    {
        MarcarCaminho(Labirinto,i,j);

        if(MovimentaEstudante(Labirinto, item, i-1, j, linha, coluna, dados)); //para cima
        else
        {
            if(MovimentaEstudante(Labirinto, item, i, j-1,linha, coluna, dados)); //para esquerda
            else
            {
                if(MovimentaEstudante(Labirinto, item, i+1, j, linha, coluna, dados)); //para baixo
                else{
                    if(MovimentaEstudante(Labirinto, item, i, j+1, linha, coluna, dados)); // para direita
                    else
                    {
                        return 0;
                    }
                }
            }
        }
    }
    else
    {
        return 0;
    }
}

//nao tenho certeza se precisaria ser long int pra contar as recursões
//backtracking modo análise 
int MovimentaEstudanteAnalise(int **Labirinto, TipoItem *item, int i, int j, int linha, int coluna, TipoDados *dados, long long int *numRec)
{
    *numRec = *numRec + 1; //contar as recursões
    if(ChegouNoFim(Labirinto, i, j))
    {
        DadosFinal(dados, j);
        printf("Linha: %d Coluna: %d\n", i, j);
        MarcarCaminho(Labirinto,i,j);
        return 1;
    }

    if(ForaDaMatriz(i,j,linha,coluna))
    {   
        dados->consegueSair = 0;//ultrapassou
        return 0;
    }

    if(!EhParede(Labirinto, i, j) && !EhPorta(Labirinto,i,j))
    {
        dados->qntMovimento ++;
        printf("Linha: %d Coluna: %d\n", i, j);
    }

    if(EhPorta(Labirinto, i, j) && item->quantidadeChaves >0)
    {
        dados->qntMovimento ++;
        printf("Linha: %d Coluna: %d\n", i, j);
        item->quantidadeChaves--;
        AbrirPorta(Labirinto,i,j);
    }

    if(!CaminhoMarcado(Labirinto,i,j) && !EhPorta(Labirinto,i,j) && !EhParede(Labirinto,i,j))
    {
        MarcarCaminho(Labirinto,i,j);

        if(MovimentaEstudanteAnalise(Labirinto, item, i-1, j, linha, coluna, dados, numRec)); //para cima
        else
        {
            if(MovimentaEstudanteAnalise(Labirinto, item, i, j-1,linha, coluna, dados, numRec)); //para esquerda
            else
            {
                if(MovimentaEstudanteAnalise(Labirinto, item, i+1, j, linha, coluna, dados, numRec)); //para baixo
                else{
                    if(MovimentaEstudanteAnalise(Labirinto, item, i, j+1, linha, coluna, dados, numRec)); // para direita
                    else
                    {
                        return 0;
                    }
                }
            }
        }
    }
    else
    {
        return 0;
    }
}