#include <stdio.h>

double fpc(float temp){
    float c;
    c = (temp - 32)/1.8;
    return(c);
}

double fpk(float temp){
    float k;
    k = (temp + 459.67)*(5/9);
    return (k);
}

double cpf(float temp){
    float f;
    f = (1.8*temp)+32;
    return (f);
}

double cpk(float temp){
    float k;
    k=temp+273;
    return (k);
}

double kpf(float temp){
    float f;
    f=(1.8*(temp-273))+32;
    return (f);
}

double kpc(float temp){
    float c;
    c =(temp-273);
    return(c);
}

int main(){
    float temp;
    double conversao;
    int alt;
    printf("Digite a temperatura:");
    scanf("%f",&temp);
    printf("Digite o numero indicado da conversao:\n 1-Fahrenheit para Celsius\n 2-Fahrenheit para Kelvin\n 3-Celsius para Fahrenheit\n 4-Celsius para Kelvin\n 5-Kelvin para Fahrenheit\n 6-Kelvin para Celsius\n");
    scanf("%d",&alt);
    switch(alt){
        case 1: (alt ==1);
            conversao= fpc(temp);
            printf("%lf",conversao);
        break;
        case 2: (alt ==2);
            conversao= fpk(temp);
            printf("%lf",conversao);
        break;
        case 3: (alt ==3);
            conversao= cpf(temp);
            printf("%lf",conversao);
        break;
        case 4: (alt ==4);
            conversao= cpk(temp);
            printf("%lf",conversao);
        break;
        case 5: (alt ==5);
            conversao= kpf(temp);
            printf("%lf",conversao);
        break;
        case 6: (alt==6);
            conversao = kpc(temp);
            printf("%lf",conversao);
        break;
    }
return 0;
}
