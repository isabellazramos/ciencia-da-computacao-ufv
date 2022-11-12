#include "../header/ShiftAndAproximado.h"

void ShiftAndAproximado(Texto T, long n, Padrao P, long m, long k, int Op[]){

    long mascara[MAXCHAR], i, j, Rinsere, Ranterior, Rnovo;
    long R[NUMAXERRO + 1];
    for(i = 0; i < MAXCHAR; i++){
        // Preparando a máscara
        mascara[i] = 0;
    }
    for(i = 1; i <= m; i++){
        mascara[P[i - 1] + 127] |= 1 << (m - i); // |= atribuição por operações lógicas
    }
    R[0] = 0;
    Rinsere = 1 << (m-1);
    for(j = 1; j <= k; j++){
        R[j] = (1 << (m - j)) | R[j - 1];
    }
    //Pesquisa:
    for (i = 0; i < n; i++){
        Ranterior = R[0];
        Rnovo = ((((unsigned long)Ranterior) >> 1) | Rinsere) & mascara[T[i] + 127];
        R[0] = Rnovo;
        for(j = 1; j<= k; j++){
            //Ranterior em (Ranterior*Op[0]) corresponde à operação de inserção, o Ranterior seguinte corresponde à operação de substituição em(Ranterior*Op[2]).
            //Rnovo corresponde à operação de remoção.
            //Cada posição do vetor Op (operações) corresponde a uma operação sendo ativada (1) ou não (0).
            //As posições para determinada operação serão ativadas durante execução.
            Rnovo = ((((unsigned long)R[j]) >> 1) & mascara[T[i] + 127]) | (Ranterior*Op[0]) | (((unsigned long) ((Ranterior*Op[2])) | (Rnovo*Op[1])) >> 1);
            Ranterior = R[j];
            R[j] = Rnovo | Rinsere;
        }
        if((Rnovo & 1) != 0){
            printf("Posicao do casamento: %10ld\n", i + 1);
        }
    }
    
}
