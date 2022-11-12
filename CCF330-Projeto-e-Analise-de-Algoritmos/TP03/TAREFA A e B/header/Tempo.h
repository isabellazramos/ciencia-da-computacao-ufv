#include <stdio.h>
#include <time.h>

typedef struct{
    clock_t TempoInicial;
    clock_t TempoFinal;
    double TempoTotal;
}TipoTempo;

void IniciarTempo(TipoTempo *tempo);
void PararTempo(TipoTempo *tempo);
double TempoTotal(TipoTempo tempo);