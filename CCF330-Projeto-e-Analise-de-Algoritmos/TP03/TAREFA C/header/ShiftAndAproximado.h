#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Defines para a correta utilização do Shif And Aproximado
#define MAXCHAR 256
#define MAXTAMTEXTO 1000
#define MAXTAMPADRAO 10
#define NUMAXERRO 10

typedef char Texto[MAXTAMTEXTO];
typedef char Padrao[MAXTAMPADRAO];

void ShiftAndAproximado(Texto T, long n, Padrao P, long m, long k, int Op[]);