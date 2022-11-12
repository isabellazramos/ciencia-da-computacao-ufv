#include "../header/BMH.h"

void BMH(TipoTexto T, long n, TipoPadrao P, long m)
{ 
    long i, j, k, d[MAXCHAR + 1];
    for (j = 0; j <= MAXCHAR; j++)
    {
        d[j] = m;
    }
    for (j = 1; j < m; j++)
    {
        d[P[j-1]] = m - j;
    }

    i = m;

    while (i <= n)    /*-- Pesquisa --*/
    { 
        k = i;
        j = m;
        while (T[k-1] == P[j-1] && j > 0) 
        { 
            k--; j--; 
        }

        if (j == 0)
        {
            printf("Casamento na posicao: %3ld\n", k + 1);
        }
        
        i += d[T[i-1]];
    }
}