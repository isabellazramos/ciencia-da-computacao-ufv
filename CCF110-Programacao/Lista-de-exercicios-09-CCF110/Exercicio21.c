//Exercicio21
#include<stdio.h>

float calc(float a, float b, float c){
    if((a==b)&&(b==c)){
        printf("Equilatero");
    }
    else if((a!=b)&&(b!=c)){
        printf("Escaleno");
    }
    else{
        printf("Isóceles");
    }
return 0.0;
}

int main(){
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    calc(a,b,c);
return 0;
}
