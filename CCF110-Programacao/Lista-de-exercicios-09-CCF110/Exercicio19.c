//Exercicio19
#include <stdio.h>

int op(int a){
    if(a<0){
        printf("Negativo");
    }
    if(a>0){
        printf("Positivo");
    }
}

int main(){
    int a;
    scanf("%d",&a);
    op(a);

}
