//exercicio08

#include <stdio.h>

double media(float nota1,float nota2,float nota3){
    float media_n;
    media_n=(nota1+nota2+nota3)/3;
    return(media_n);
}

int main(){
float nota1, nota2, nota3,media_n;
    printf("Digite as tres notas:");
    scanf("%f %f %f",&nota1,&nota2,&nota3);
    media_n=media(nota1,nota2,nota3);
    printf("%.3f",media_n);
return 0;
}
