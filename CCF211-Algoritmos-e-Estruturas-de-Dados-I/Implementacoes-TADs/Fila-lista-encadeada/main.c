#include "fila_encadeada.h"

int main() {
    tFila fila;
    tItem item,retorno;
    int op = 0;

    while (1){
        printf("-------------MENU-----------\n"
               "1 - Iniciar fila\n"
               "2 - Enfileirar\n"
               "3 - Desinfileirar\n"
               "4 - Imprimir fila\n"
               "5 - Sair\n"
               "------------------------------\n");
        scanf("%d",&op);
        if(op == 1){
            fazFilaVazia(&fila);
        }
        else if(op == 2){
            printf("Digite o valor a ser enfileirado:");
            scanf("%d",&item.resultado);
            filaEnfileira(&fila,&item);
        }
        else if(op == 3){
            filaDesinfileira(&fila,&retorno);
            printf("%d foi retirado da fila.\n", retorno.resultado);
        }
        else if(op == 4){
            imprimeFila(fila);
        }
        else if(op == 5){
            break;
        }
    }

}