#include "../header/ShiftAnd.h"

void ShiftAndExato(char *T, long n, char *P, long m) //
{ 
    long Mascara[MAXCHAR], R = 0;

    for (int i = 0; i < MAXCHAR; i++) 
        Mascara[i] = 0;

    for (int i = 1; i <= m; i++) 
        Mascara[P[i-1] + 127] |= 1 << (m - i);

    for (int i = 0; i < n; i++) 
        {
            R = ((((unsigned long)R) >> 1) | 
            (1 << (m - 1))) & Mascara[T[i] + 127];
            if ((R & 1) != 0)
            printf(" Casamento na posicao %3ld\n", i - m + 2);
        }
}