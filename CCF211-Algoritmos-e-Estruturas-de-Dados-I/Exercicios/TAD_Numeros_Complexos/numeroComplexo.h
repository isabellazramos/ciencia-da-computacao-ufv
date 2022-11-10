//
// Created by isabella on 21/08/2019.
//

#ifndef TAD_NUMEROS_COMPLEXOS_NUMEROCOMPLEXO_H
#define TAD_NUMEROS_COMPLEXOS_NUMEROCOMPLEXO_H

#include <stdio.h>

typedef struct {
    int campoReal;
    int campoImaginario;
}numeroComplexo;

void atribuiNumeroComplexo(numeroComplexo *numComp,int a,int b);
void imprimeNumeroComplexo(numeroComplexo numComp);
void copiaNumeroComplexo(numeroComplexo *numComp2,numeroComplexo *numComp1);
void somaNumeroComplexo(numeroComplexo *numComp1,numeroComplexo *numComp2,numeroComplexo *soma);
void testaEhReal(numeroComplexo *numComp);

#endif //TAD_NUMEROS_COMPLEXOS_NUMEROCOMPLEXO_H
