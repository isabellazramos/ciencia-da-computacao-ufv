//Exercicio12
#include <stdio.h>

int x(h,m,s){
    int soma,aux;
    soma=0;
    soma =soma+ h*3600;
    soma = soma + m*60;
    soma = soma+s;
    return(soma);
}

int main(){
    int h,m,s,a;
    printf("Digite as horas, minutos e segundos, separados por um espaço: ");
    scanf("%d %d %d",&h,&m,&s);
    a=x(h,m,s);
    printf("%d",a);
return 0;
}
