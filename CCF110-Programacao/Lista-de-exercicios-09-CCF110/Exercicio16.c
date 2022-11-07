//Exercicio16
#include <stdio.h>

int ordem(int vetor[10]){
    int aux,i,j;
    aux=0;
    for(i=1;i<10;i++){
        for(j=1;j<10;j++){
            if(vetor[j]<vetor[j-1]){
                aux=vetor[j];
                vetor[j]=vetor[j-1];
                vetor[j-1]=aux;
        }
    }
}
for(i=0;i<10;i++){
printf("%d \n",vetor[i]);
}
}

int main(){
    int vetor[10],i;

    for(i=0;i<10;i++){
        scanf("%d",&vetor[i]);
    }
   ordem(vetor);
}
