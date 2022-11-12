#include "../headers/funcoes.h"
#include "../headers/menu.h"

int verificaQuantidade(int quantidade){
    if(quantidade > 100){
        printf("A quantidade de figuras agora eh 100.\n");
        return 100;
    } else{
        return quantidade;
    }
}
int verificaQuantidade2(int quantidade){
    if(quantidade < 0){
        return 0;
    } else{
        return quantidade;
    }
}


void inicializaMatriz(structMatriz *matriz){
      for(int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
            if(i == 0 || i == LINHA-1){
                matriz->matriz[i][j] = '-';
                continue;
            }
            if(j == 0 || j == COLUNA-1){
                matriz->matriz[i][j] = '|';
                continue;
            }
            else{
                matriz->matriz[i][j] = ' ';
            }
    }
  }
}

void imprimeMatriz(structMatriz matriz){
    for(int i = 0; i < LINHA; i++){
        printf("\n");
        for(int j = 0; j < COLUNA; j++){
            printf("%c", matriz.matriz[i][j]);
        }
    }
}

void criaAsterisco(structMatriz *matriz, int quantidade){
    int linha,coluna;
    srand(time(NULL));
    quantidade = verificaQuantidade(quantidade);
    for (int i = 0; i < quantidade; ++i) {
        while (1){

            linha = 1 + (rand()%LINHA-2);
            coluna = 1 + (rand()%COLUNA-2);
            if(matriz->matriz[linha][coluna] == ' ') {
                break;
            }
        }
        matriz->matriz[linha][coluna] = '*';
    }
}

void criaSoma(structMatriz *matriz, int quantidade){
    int  linha, coluna;
    srand(time(NULL));
    quantidade = verificaQuantidade(quantidade);
    for (int i = 0; i < quantidade; ++i) {
        while (1){
            linha = 1 + (rand()%LINHA-2);
            coluna = 1 + (rand()%COLUNA-2);
            if(matriz->matriz[linha][coluna] == ' ' && matriz->matriz[linha+1][coluna] == ' ' && matriz->matriz[linha-1][coluna] == ' ' && matriz->matriz[linha][coluna-1] ==  ' ' && matriz->matriz[linha][coluna+1] == ' '){
                break;
            }
        }
        matriz->matriz[linha][coluna] = '*';
        matriz->matriz[linha+1][coluna] = '*';
        matriz->matriz[linha-1][coluna] = '*';
        matriz->matriz[linha][coluna+1] = '*';
        matriz->matriz[linha][coluna-1] = '*';
    }
}

void criaLetraX(structMatriz *matriz, int quantidade){
    int  linha, coluna;
    srand(time(NULL));
    quantidade = verificaQuantidade(quantidade);
    for (int i = 0; i < quantidade; ++i) {
        while (1){
            linha = 1 + (rand()%LINHA-2);
            coluna = 1 + (rand()%COLUNA-2);
            if(matriz->matriz[linha][coluna] == ' ' && matriz->matriz[linha+1][coluna+1] == ' ' && matriz->matriz[linha-1][coluna-1] == ' ' && matriz->matriz[linha+1][coluna-1] ==  ' ' && matriz->matriz[linha-1][coluna+1] == ' '){
                break;
            }
        }
        matriz->matriz[linha][coluna] = '*';
        matriz->matriz[linha+1][coluna+1] = '*';
        matriz->matriz[linha-1][coluna-1] = '*';
        matriz->matriz[linha-1][coluna+1] = '*';
        matriz->matriz[linha+1][coluna-1] = '*';
    }
}

void criaAleatorias(structMatriz *matriz, int quantidade){
    srand(time(NULL));
    int asterisco,soma,letrax;

    quantidade = verificaQuantidade(quantidade);

    asterisco = (rand()%quantidade);
    asterisco = verificaQuantidade2(asterisco);
    soma = rand()%(quantidade-asterisco);
    soma = verificaQuantidade2(soma);
    letrax = quantidade - (asterisco + soma);
    letrax = verificaQuantidade2(letrax);
    printf("Asterisco: %d \n Soma: %d \n Letra X: %d\n",asterisco,soma,letrax);

    criaAsterisco(matriz,asterisco);
    criaSoma(matriz,soma);
    criaLetraX(matriz,letrax);


}

void criaObraAluno(structMatriz *matriz, int quantidade){
    srand(time(NULL));
    int sorrindo,piscando, dormindo, surpresa;

    quantidade = verificaQuantidade(quantidade);

    sorrindo = (rand()%quantidade);
    sorrindo = verificaQuantidade2(sorrindo);
    piscando = rand()%(quantidade-sorrindo);
    piscando = verificaQuantidade2(piscando);
    dormindo = rand()%(quantidade-piscando);
    dormindo = verificaQuantidade2(dormindo);
    surpresa = quantidade - (piscando + sorrindo + dormindo);
    surpresa = verificaQuantidade2(surpresa);
    printf("Sorrindo:%d \n Piscando:%d \n Dormindo:%d \n Surpresa:%d \n",sorrindo,piscando, dormindo,surpresa);
    criaObraSorrindo(matriz,sorrindo);
    criaObraPiscando(matriz,piscando);
    criaObraDormindo(matriz,dormindo);
    criaObraSurpresa(matriz,surpresa);
}

void criaObraSorrindo(structMatriz *matriz, int quantidade){
    srand(time(NULL));
    int linha, coluna;
    quantidade = verificaQuantidade(quantidade);
    for (int i = 0; i < quantidade; ++i) {
        while (1) {
            linha = 1 + (rand() % LINHA - 2);
            coluna = 1 + (rand() % COLUNA - 2);
            if (matriz->matriz[linha][coluna] == ' ' && matriz->matriz[linha][coluna+1] == ' ' && matriz->matriz[linha][coluna+2] == ' '&&
                matriz->matriz[linha][coluna+3] == ' ' && matriz->matriz[linha][coluna+4] == ' ' && matriz->matriz[linha][coluna+5] == ' '&&
                matriz->matriz[linha][coluna+6] == ' ') {
                break;
            }
        }
        matriz->matriz[linha][coluna] = '(';matriz->matriz[linha][coluna+1] = '*';matriz->matriz[linha][coluna+2] = '^';matriz->matriz[linha][coluna+3] = '-';
        matriz->matriz[linha][coluna+4] = '^';matriz->matriz[linha][coluna+5] = '*';matriz->matriz[linha][coluna+6] = ')';
    }
}

void criaObraPiscando(structMatriz *matriz, int quantidade){
    srand(time(NULL));
    int linha, coluna;
    quantidade = verificaQuantidade(quantidade);
    for (int i = 0; i < quantidade; ++i) {
        while (1) {
            linha = 1 + (rand() % LINHA - 2);
            coluna = 1 + (rand() % COLUNA - 2);
            if (matriz->matriz[linha][coluna] == ' ' && matriz->matriz[linha][coluna+1] == ' ' && matriz->matriz[linha][coluna+2] == ' '&&
                matriz->matriz[linha][coluna+3] == ' ' && matriz->matriz[linha][coluna+4] == ' ') {
                break;
            }
        }
        matriz->matriz[linha][coluna] = '(';matriz->matriz[linha][coluna+1] = '^';matriz->matriz[linha][coluna+2] = '_';matriz->matriz[linha][coluna+3] = '~';
        matriz->matriz[linha][coluna+4] = ')';
    }
}

void criaObraDormindo(structMatriz *matriz, int quantidade){
    srand(time(NULL));
    int linha, coluna;
    quantidade = verificaQuantidade(quantidade);
    for (int i = 0; i < quantidade; ++i) {
        while (1) {
            linha = 1 + (rand() % LINHA - 2);
            coluna = 1 + (rand() % COLUNA - 2);
            if (matriz->matriz[linha][coluna] == ' ' && matriz->matriz[linha][coluna+1] == ' ' && matriz->matriz[linha][coluna+2] == ' '&&
                matriz->matriz[linha][coluna+3] == ' ' && matriz->matriz[linha][coluna+4] == ' '&& matriz->matriz[linha][coluna+5] == ' '&& matriz->matriz[linha][coluna+6] == ' '&& matriz->matriz[linha][coluna+7] == ' ') {
                break;
            }
        }
        matriz->matriz[linha][coluna] = '(';matriz->matriz[linha][coluna+1] = '-';matriz->matriz[linha][coluna+2] = '_';matriz->matriz[linha][coluna+3] = '-';
        matriz->matriz[linha][coluna+4] = ')';matriz->matriz[linha][coluna+5] = 'z';matriz->matriz[linha][coluna+6] = 'z';matriz->matriz[linha][coluna+7] = 'Z';
    }
}

void criaObraSurpresa(structMatriz *matriz, int quantidade){
    srand(time(NULL));
    int linha, coluna;
    quantidade = verificaQuantidade(quantidade);
    for (int i = 0; i < quantidade; ++i) {
        while (1) {
            linha = 1 + (rand() % LINHA - 2);
            coluna = 1 + (rand() % COLUNA - 2);
            if (matriz->matriz[linha][coluna] == ' ' && matriz->matriz[linha][coluna+1] == ' ' && matriz->matriz[linha][coluna+2] == ' '&&
                matriz->matriz[linha][coluna+3] == ' ' && matriz->matriz[linha][coluna+4] == ' '&& matriz->matriz[linha][coluna+5] == ' '&& matriz->matriz[linha][coluna+6] == ' ') {
                break;
            }
        }
        matriz->matriz[linha][coluna] = '<';matriz->matriz[linha][coluna+1] = '(';matriz->matriz[linha][coluna+2] = 'O';matriz->matriz[linha][coluna+3] = 'o';
        matriz->matriz[linha][coluna+4] = 'O';matriz->matriz[linha][coluna+5] = ')';matriz->matriz[linha][coluna+6] = '>';
    }
}
