#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef KNAPSACK_H_
#define KNAPSACK_H_

typedef int Weight;
typedef int Value;


typedef struct item{
  Value value;
  Weight weight;
  int qtd;
} Item;

typedef struct item Backpack;

void knapsack(Backpack *ans, Item *items , Item *res, Backpack backpack[], int start, int end, int index, int size) ;
void storeItems(int n, Item **itens);
void printKnapsack(Backpack *ans, Item *res, Item *items, int n, int size);
void setBackpack(Backpack *backpack, int size);
Backpack sumAttributes(Backpack backpack[], int size);
void freeItems(Item **items);


#endif
