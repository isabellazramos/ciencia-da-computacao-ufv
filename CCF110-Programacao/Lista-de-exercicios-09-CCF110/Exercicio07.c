
#include <stdio.h>

float calculo(int cpf){
     int vetor[11];
     int vetor2[11];
     int i,n,soma,quociente,resto;
     n=10;
     soma=0;
     for( i=1;i<10;i++){
        vetor[i]= cpf%10;
        cpf= cpf/=10;
     }
     for( i=1;i<10;i++){
        printf("%d",vetor[i]);
     }
     return vetor;
}

int main(){
    int cpf;
    scanf("%d",&cpf);

return 0;
}
