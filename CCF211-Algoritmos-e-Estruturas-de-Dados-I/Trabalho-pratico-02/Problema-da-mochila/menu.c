#include "includes/menu.h"
#include "includes/knapsack.h"


void mainMenu(Item *items){
  int op, n, flag;
  Backpack ans;
  Item *res;
  double time_spent;
  /* int k = 0;
   op = 1;
   int cases[7] = {5, 10, 20, 30, 50, 80, 100};
*/
  while(true){

    printf("Digite a operação desejada:\n");
    printf("1 - Receber input de um arquivo\n");
    printf("2 - Resolver Knapsack\n");
    printf("3 - Desalocar memória\n");
    printf("0 - Sair do programa\n");
    scanf("%d", &op);
    switch(op){
      case 1:
        n = inputItems(&(items));
        storeItems(n, &res);

        /*n = cases[k];
        storeItems(cases[k], &items);
        storeItems(n, &res);
        for(int j = 0; j< n; j++){
          items[j].weight = rand()%15;
          items[j].value = rand()%15;
        }

        flag = 1;
        k++;
        op++;
        if(k==3) op= 0;
        */
        break;
      case 2:
        time_spent = 0.0;
        clock_t begin = clock();

        setBackpack(&ans, 0);

        for(int i = 1; i<=n ; ++i) printKnapsack(&ans, res, items, n, i);

        printf("\n\nQUANTIDADE DE ITENS NO INPUT: %d\n", n);
        printf("%d ITENS NA MOCHILA:\n", ans.qtd);

        for(int j =0; j<ans.qtd; j++) printf("PESO: %d, VALOR: %d\n", res[j].weight, res[j].value);

        printf("PESO DA MOCHILA: %d\nVALOR CONTIDO NA MOCHILA: %d\n", ans.weight, ans.value);

        clock_t end = clock();
        time_spent += (double) (end - begin)/ CLOCKS_PER_SEC;
        printf("TEMPO DE EXECUÇÃO: %lf\n\n", time_spent);
        //op++;
        break;
      case 3:
        printf("\nITENS DESALOCADOS\n");
        if(flag){
          freeItems(&items);
          freeItems(&res);
        }
        //flag = 0;
        // op = 1;
        break;
      case 0:
        printf("\n\nPROGRAMA ENCERRADO\n");
        if(flag){
          freeItems(&items);
          freeItems(&res);
        }
        return;
        break;
      default:
        break;
    }
  }
}

int inputItems(Item **items){
  FILE *ptrFile;
  char filename[30];
  int count = 0;
  int n;

  printf("\n\nDigite o nome do arquivo que deseja encontrar no formato \"nome_do_arquivo\".txt\n");
  scanf("%s", filename);
  printf("\n");

  ptrFile=fopen(filename, "r+");

  if(ptrFile == NULL){
    printf("\n\nARQUIVO NÃO ENCONTRADO.\n\n" );
  }else{
    while(!feof(ptrFile)){
      if(count==0){
        fscanf(ptrFile, "%d", &n);
        storeItems(n, &(*items));
        count++;
      }else{
        fscanf(ptrFile,"%d%d", &(*items)[count-1].weight, &(*items)[count-1].value);
        count++;
      }
    }
    fclose(ptrFile);
  }
  return n;
}
