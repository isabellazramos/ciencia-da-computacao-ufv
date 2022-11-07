//Exercicio20
#include <stdio.h>

int somar(int vetor[20]){
    int soma,i;
    soma=0;
    for (i=0;i<20;i++){
        soma = soma+(vetor[i]*vetor[i]);
    }
    return (soma);
}

int main(){
    int vetor[20],i,resp;
    for(i=0;i<20;i++){
        scanf("%d",&vetor[i]);}
    resp = somar(vetor);
    printf("%d",resp);
}
