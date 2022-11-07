//Exercicio11
#include <stdio.h>

double triangulo(float a, float b, float c){
    float area;
    area=(a+b+c)/2;
    return(area);
}

int main(){
    float a,b,c,resp;
    scanf("%f %f %f",&a,&b,&c);
    resp=triangulo(a,b,c);
    printf("%f",resp);
}
