
#include "includes/knapsack.h"

Backpack sumAttributes(Backpack backpack[], int size){
  Backpack ans;

  setBackpack(&ans, size);

  for(int i =0; i<size; i++){
    ans.value += backpack[i].value;
    ans.weight += backpack[i].weight;
  }
  return ans;
}

void knapsack(Backpack *ans, Item *items , Item res[], Backpack backpack[], int start, int end, int index, int size) {

  Backpack compare;

  if(index == size){
    setBackpack(&compare, size);
    compare = sumAttributes(backpack, size);
    
    if(compare.value>= ans->value && compare.weight <=40){
      *ans = compare;
      for(int i =0; i<size; ++i){
        res[i].weight = backpack[i].weight;
        res[i].value = backpack[i].value;
      }
    }
    return;
  }

  for(int i=start; i<=end && end-i+1 >= size-index; i++) {
    backpack[index].value = items[i].value;
    backpack[index].weight = items[i].weight;

    knapsack(ans, items, res, backpack, i+1, end, index+1, size);
  }
}

void storeItems(int n, Item **items){
  (*items) = (Item*) malloc(n*sizeof(Item));
}

void freeItems(Item **items){
  free(*items);
}

void printKnapsack(Backpack *ans, Item *res, Item *items, int n, int size){

  Backpack backpack[size];
  knapsack(ans, items, res, backpack, 0, n-1, 0, size);
}

void setBackpack(Backpack *backpack, int size){
  backpack -> value = 0;
  backpack -> weight = 0;
  backpack -> qtd = size;
}
