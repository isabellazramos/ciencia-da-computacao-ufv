//Exercicio 10
#include <stdio.h>
float polegadas;
double conversaop(float metros){

    polegadas = metros*39.37;
    return(polegadas);
}

double conversaope(float metros){
    float pes;
    pes = polegadas*12;
    return(pes);
}

int main(){
    float metros,pol,pe;
    printf("Digite o valor em metros:");
    scanf("%f",&metros);
    pol=conversaop(metros);
    pe=conversaope(metros);
    printf("Polegadas: %.3f \n Pes: %.3f \n",pol,pe);
    return 0;
}
