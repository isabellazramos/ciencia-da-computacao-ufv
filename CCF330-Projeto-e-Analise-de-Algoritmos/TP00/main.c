#include "headers/funcoes.h"
#include "headers/menu.h"

int main(){
    int opMenu = -1;
    int qtdFiguras,opRepeticao;
	structMatriz matriz;

    while (opMenu !=0){
        inicializaMatriz(&matriz);
        menuPrincipal();
        scanf("%d",&opMenu);

        if(opMenu == 1){
            printf("Digite a quantidade de figuras (menor ou igual a zero para aleatorio):");
            scanf("%d",&qtdFiguras);
            qtdFiguras = verificaMenorQueZero(qtdFiguras);
            criaAsterisco(&matriz,qtdFiguras);
            imprimeMatriz(matriz);

            opRepeticao = 1;

            while (opRepeticao !=0){
                printf("\n\n Deseja criar um novo quadro com essas configuracoes?\n"
                       "- Digite 1 para SIM\n"
                       "- Digite 0 para NAO\n");
                scanf("%d", &opRepeticao);

                if(opRepeticao ==1) {
                    inicializaMatriz(&matriz);
                    criaAsterisco(&matriz, qtdFiguras);
                    imprimeMatriz(matriz);
                }else{
                    break;
                }

            }
        }
        else if(opMenu == 2){
            printf("Digite a quantidade de figuras (menor ou igual a zero para aleatorio):");
            scanf("%d",&qtdFiguras);
            qtdFiguras = verificaMenorQueZero(qtdFiguras);
            criaSoma(&matriz,qtdFiguras);
            imprimeMatriz(matriz);

            opRepeticao = 1;

            while (opRepeticao !=0){
                printf("\n\n Deseja criar um novo quadro com essas configuracoes?\n"
                       "- Digite 1 para SIM\n"
                       "- Digite 0 para NAO\n");
                scanf("%d", &opRepeticao);

                if(opRepeticao ==1) {
                    inicializaMatriz(&matriz);
                    criaSoma(&matriz, qtdFiguras);
                    imprimeMatriz(matriz);
                }else{
                    break;
                }

            }
        }
        else if(opMenu == 3){
            printf("Digite a quantidade de figuras (menor ou igual a zero para aleatorio):");
            scanf("%d",&qtdFiguras);
            qtdFiguras = verificaMenorQueZero(qtdFiguras);
            criaLetraX(&matriz,qtdFiguras);
            imprimeMatriz(matriz);

            opRepeticao = 1;

            while (opRepeticao !=0){
                printf("\n\n Deseja criar um novo quadro com essas configuracoes?\n"
                       "- Digite 1 para SIM\n"
                       "- Digite 0 para NAO\n");
                scanf("%d", &opRepeticao);

                if(opRepeticao ==1) {
                    inicializaMatriz(&matriz);
                    criaLetraX(&matriz, qtdFiguras);
                    imprimeMatriz(matriz);
                }else{
                    break;
                }

            }
        }
        else if (opMenu == 4){
            printf("Digite a quantidade de figuras (menor ou igual a zero para aleatorio):");
            scanf("%d",&qtdFiguras);
            qtdFiguras = verificaMenorQueZero(qtdFiguras);
            criaAleatorias(&matriz,qtdFiguras);
            imprimeMatriz(matriz);

            opRepeticao = 1;

            while (opRepeticao !=0){
                printf("\n\n Deseja criar um novo quadro com essas configuracoes?\n"
                       "- Digite 1 para SIM\n"
                       "- Digite 0 para NAO\n");
                scanf("%d", &opRepeticao);

                if(opRepeticao ==1) {
                    inicializaMatriz(&matriz);
                    criaAleatorias(&matriz, qtdFiguras);
                    imprimeMatriz(matriz);
                }else{
                    break;
                }

            }
        }else if(opMenu == 5){
            printf("Digite a quantidade de figuras (menor ou igual a zero para aleatorio):");
            scanf("%d",&qtdFiguras);
            qtdFiguras = verificaMenorQueZero(qtdFiguras);
            criaObraAluno(&matriz,qtdFiguras);
            imprimeMatriz(matriz);

            opRepeticao = 1;

            while (opRepeticao !=0){
                printf("\n\n Deseja criar um novo quadro com essas configuracoes?\n"
                       "- Digite 1 para SIM\n"
                       "- Digite 0 para NAO\n");
                scanf("%d", &opRepeticao);

                if(opRepeticao ==1) {
                    inicializaMatriz(&matriz);
                    criaObraAluno(&matriz, qtdFiguras);
                    imprimeMatriz(matriz);
                }else{
                    break;
                }

            }
        }
    }

}