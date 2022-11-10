//
// Created by isabella on 21/08/2019.
//
#include "numeroComplexo.h"

void atribuiNumeroComplexo(numeroComplexo *numComp1,int a,int b){
    numComp1 ->campoReal = a;
    numComp1 ->campoImaginario = b;
}
void imprimeNumeroComplexo(numeroComplexo numCom1){
       printf("%d + %di\n",numCom1.campoReal,numCom1.campoImaginario);
}
void copiaNumeroComplexo(numeroComplexo *numComp2,numeroComplexo *numComp1){
    numComp2->campoReal = numComp1->campoReal;
    numComp2->campoImaginario = numComp1->campoImaginario;
}
void somaNumeroComplexo(numeroComplexo *numComp1,numeroComplexo *numComp2,numeroComplexo *soma){
    soma->campoReal = (numComp1->campoReal + numComp2->campoReal);
    soma->campoImaginario = (numComp1->campoImaginario + numComp1->campoImaginario);
}
void testaEhReal(numeroComplexo *numComp){
    if (numComp->campoImaginario == 0){
        printf("Numero é real.\n");
    }
}