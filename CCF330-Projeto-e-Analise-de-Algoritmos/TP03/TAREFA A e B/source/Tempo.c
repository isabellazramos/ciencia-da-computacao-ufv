#include "../header/Tempo.h"

void IniciarTempo(TipoTempo *tempo)
{
    tempo->TempoInicial = clock();
}

void PararTempo(TipoTempo *tempo)
{
    tempo->TempoFinal = clock();
    tempo->TempoTotal = (double)(tempo->TempoFinal - tempo->TempoInicial)/CLOCKS_PER_SEC;
}

double TempoTotal(TipoTempo tempo){
    return tempo.TempoTotal;
}