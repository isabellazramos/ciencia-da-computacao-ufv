#include "../headers/caverna.h"
#include <limits.h>

int **InicializarCaverna(int linha, int coluna, TipoVida *qtdVida, int vida){
    
    int **CavernaRetorno;

    CavernaRetorno = (int**)calloc((linha+1),sizeof(int*));
    for(int i = 0; i < linha; i++)
    {
        CavernaRetorno[i] = (int*)calloc((coluna+1),sizeof(int));
    }
    qtdVida->vidaTotal = vida;
    return CavernaRetorno;
}

int **InicializarCavernaAuxiliar(int linha,int coluna){
  int **CavernaRetornoAux;

    CavernaRetornoAux = (int**)calloc((linha+1),sizeof(int*));
    for(int i = 0; i < linha; i++)
    {
        CavernaRetornoAux[i] = (int*)calloc((coluna+1),sizeof(int));
    }
    return CavernaRetornoAux;
}

void PreencherCaverna(int **Caverna, int linha, int coluna, int valor)
{
    Caverna[linha][coluna] = valor;
}

void ImprimirCaverna(int **Caverna,int linha, int coluna)
{
    printf("\n");
    for(int i = 0; i < linha; i++)
    {
      for(int j = 0; j < coluna; j++)
      {
        printf("%d ",Caverna[i][j]);
      }
    printf("\n");
  }
}

int Maior(int a,int b){
  if(a>=b){
    return a;
  }
  return b;
}

int ForaDaMatriz(int i, int j, int linha, int coluna)
{
    if(j >= coluna || i >= linha || j < 0 || i < 0)
    {
        return 1;
    }
    return 0;
}

int LinhaPosicaoAtual(int **Caverna, int linha, int coluna)
{
    for(int i = 0; i < linha; i++)
    {
        for(int j = 0; j < coluna; j++)
        {
            if (Caverna[i][j] == 1)
            {
                return i;
            }
            
        }
    }
}

int ColunaPosicaoAtual(int **Caverna, int linha, int coluna)
{
    for(int i = 0; i < linha; i++)
    {
        for(int j = 0; j < coluna; j++)
        {
            if (Caverna[i][j] == 1)
            {
               return j;
            }
            
        }
    }
}

int **PreencherMatrizSecundaria(int **Caverna, int linha, int coluna){
   int **CavernaRetornoAux;

    CavernaRetornoAux = (int**)calloc((linha+1),sizeof(int*));
    for(int i = 0; i < linha; i++)
    {
        CavernaRetornoAux[i] = (int*)calloc((coluna+1),sizeof(int));
    }
  
    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
          
            if(Caverna[i][j] == 2){
                CavernaRetornoAux[i][j] -= 2;
            }
            if(Caverna[i][j] == 1){
                CavernaRetornoAux[i][j] -= 1;
            }
            
            if(ForaDaMatriz(i-1,j,linha,coluna) && !ForaDaMatriz(i,j-1,linha,coluna)){
                CavernaRetornoAux[i][j] += CavernaRetornoAux[i][j-1] + Caverna[i][j];
            }
            
            else if(!ForaDaMatriz(i-1,j,linha,coluna) && ForaDaMatriz(i,j-1,linha,coluna)){
                CavernaRetornoAux[i][j] += CavernaRetornoAux[i-1][j] + Caverna[i][j];
            }
            
            else if(ForaDaMatriz(i-1,j,linha,coluna) && ForaDaMatriz(i,j-1,linha,coluna)){
                CavernaRetornoAux[i][j] += CavernaRetornoAux[i][j] + Caverna[i][j];
            }
            else if(i!=0 || j!=0){
                CavernaRetornoAux[i][j] += Maior(CavernaRetornoAux[i-1][j],CavernaRetornoAux[i][j-1])  + Caverna[i][j] ;
            }
        }
    }
    return CavernaRetornoAux;
}

int MovimentaEstudante(int **Caverna,int **CavernaAux, int i, int j, int linha, int coluna, TipoVida *vida){

    printf("\n%d %d", i, j);

    if(Caverna[i][j] == 2)
    {
      vida->vidaTotal += 0;
      //printf("Vida: %d", vida->vidaTotal);
    }
    else if(Caverna[i][j] == 1)
    {
      vida->vidaTotal += 0;
      //printf("Vida: %d", vida->vidaTotal);
    }
    else{
      vida->vidaTotal += Caverna[i][j];
      //printf(" Vida: %d", vida->vidaTotal);
    }
    if(vida->vidaTotal <= 0){
      printf("\nImpossível");
      return 0;
    }
    if(Caverna[i][j] == 2)
    {
      return 1;
    }
    if(ForaDaMatriz(i-1,j,linha,coluna) && !ForaDaMatriz(i,j-1,linha,coluna))
    {
      return MovimentaEstudante(Caverna,CavernaAux,i,j-1,linha,coluna, vida);
    }
    else if(!ForaDaMatriz(i-1,j,linha,coluna) && ForaDaMatriz(i,j-1,linha,coluna))
    {
      return MovimentaEstudante(Caverna,CavernaAux,i-1,j,linha,coluna, vida);
    }
    if(Caverna[i-1][j] == 2)
    {
      return MovimentaEstudante(Caverna,CavernaAux,i-1,j,linha,coluna, vida);
    }
    else if(Caverna[i][j-1] == 2)
    {
      return MovimentaEstudante(Caverna,CavernaAux,i,j-1,linha,coluna, vida);
    }
    else if(CavernaAux[i-1][j] >= CavernaAux[i][j-1])
    {
      return MovimentaEstudante(Caverna,CavernaAux,i-1,j,linha,coluna, vida);
    }
    else if(CavernaAux[i-1][j] < CavernaAux[i][j-1])
    {
      return MovimentaEstudante(Caverna,CavernaAux,i,j-1,linha,coluna, vida);
    }
    
}