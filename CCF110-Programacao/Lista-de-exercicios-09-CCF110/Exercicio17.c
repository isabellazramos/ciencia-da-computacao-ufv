//Exercicio17
#include <stdio.h>

double soma(float vetor[15]){
    float somar;
    int i;
    somar=0;
    for(i=0;i<15;i++){
        somar=somar+vetor[i];
    }
    return(somar);
}

int main(){
    float vetor[15],resp;
    int i;
    for (i=0;i<15;i++){
        scanf("%f",&vetor[i]);
    }
resp =soma(vetor);
printf("%f",resp);
}
