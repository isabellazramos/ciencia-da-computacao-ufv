#include <stdio.h>

float nota50(troco){
        int notas50;
        notas50= (troco /= 50);
        return(notas50);
}
float nota20(troco){
        int notas20;
        troco=troco%50;
        notas20= (troco /= 20);
        return(notas20);
}

float nota10(troco){
        int notas10;
        troco=troco%50;
        troco=troco%20;
        notas10= (troco /= 10);
      return(notas10);
    }

float nota5(troco){
       int notas5;
        troco=troco%50;
        troco=troco%20;
        troco=troco%10;
        notas5= (troco /= 5);
      return(notas5);

}

float nota2(troco){
        int notas2;
        troco=troco%50;
        troco=troco%20;
        troco=troco%10;
        troco=troco%5;
        notas2= (troco /= 2);
        return (notas2);
}

float nota1(troco){
     int notas1;
        troco=troco%50;
        troco=troco%20;
        troco=troco%10;
        troco=troco%5;
        troco=troco%2;
        notas1= (troco /= 1);
        return (notas1);

}

int main(){
    int troco,n50,n20,n10,n5,n2,n1;
    printf("Digite o valor do troco:");
    scanf("%d",&troco);
    n50=nota50(troco);
    n20=nota20(troco);
    n10=nota10(troco);
    n5=nota5(troco);
    n2=nota2(troco);
    n1=nota1(troco);
    printf("\n%d Notas de 50\n %d Notas de 20\n %d Notas de 10\n %d Notas de 5\n %d Notas de 2\n %d Notas de 1\n",n50,n20,n10,n5,n2,n1);
return 0;
}
