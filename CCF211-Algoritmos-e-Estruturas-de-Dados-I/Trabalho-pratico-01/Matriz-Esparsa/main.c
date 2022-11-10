#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "TAD_MatEsparca.c"
#include "TAD_Produto.c"

int main() {
    //Declaração de variaveis
    int linha, coluna, qtdcompra;
    TLisprod lisprod;
    TProdutos produtos;
    TLista lista;
    int cod_op;
    char nome_arq[100];
    int qtdi, qtdj;

    //Entrada por Arquivo
    FILE *ptr_arq;
    printf("Insira o nome do arquivo:\n");
    scanf("%s", nome_arq);
    printf("%s\n", nome_arq);

    ptr_arq = fopen(nome_arq, "r");
    if (ptr_arq == NULL) {
        printf("Erro na abertura!\n");
        exit(1);
    }

    //Inicializa lista
    InicializaProd(&lisprod);//inicializa celula cabeça da lista de produtos
    //Inicializa Matriz
    InicializaMatriz(&lista);//inicializa celula cabeça principal


    fscanf(ptr_arq, "%d %d", &qtdi, &qtdj); //valores para inicializar a matriz
    LeMatriz(ptr_arq, &lista, qtdi, qtdj, &produtos);
    fclose(ptr_arq);


    do{
        printf("Entre com a operacao desejada:\n");
        printf("*****************************************\n");
        printf("| Codigos de operacao:                  |\n");
        printf("| 1 - Imprime Matriz                    |\n");
        printf("| 2 - Imprime cabecas                   |\n");
        printf("| 3 - Qtd compra por cliente            |\n");
        printf("| 4 - Qtd compra por produto            |\n");
        printf("| 0 - Encerra                           |\n");
        printf("*****************************************\n");
        fflush(stdin);
        scanf("%d", &cod_op);
        if(cod_op == 1){
            ImprimeMatriz(&lista);
        }
        else if(cod_op == 2){
            ImprimeMatrizL(&lista, qtdi);
            ImprimeMatrizC(&lista, qtdj);
        }
        else if(cod_op == 3){
            printf("Digite o cliente que deseja pesquisar:\n");
            scanf("%d", &linha);
            qtdcompra = qtdCompraporCliente(&lista, linha);
            printf("%d compras foram feitas desse determinado cliente.\n", qtdcompra);
        }
        else if(cod_op == 4){
            printf("Digite o produto que deseja pesquisar:\n");
            scanf("%d", &coluna);
            qtdcompra = qtdCompraporProduto(&lista, coluna);
            printf("%d compras foram feitas desse determinado produto.\n", qtdcompra);
        }

    }while(cod_op != 0);


    return 0;
}