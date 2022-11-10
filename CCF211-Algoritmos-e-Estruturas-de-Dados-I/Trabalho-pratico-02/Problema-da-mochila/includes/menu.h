#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
#include "knapsack.h"

#ifndef MENU_H_
#define MENU_H_

#define true 1

void mainMenu(Item *items);
int inputItems(Item **items);

#endif
