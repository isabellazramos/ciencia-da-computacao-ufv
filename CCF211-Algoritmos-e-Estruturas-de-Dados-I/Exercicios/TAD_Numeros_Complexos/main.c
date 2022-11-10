#include "numeroComplexo.h"

int main() {
    numeroComplexo num1, num2,soma;
    int a,b,op;

    printf("Digite a parte real");
    scanf("%d",&a);
    printf("Digite a parte imaginario");
    scanf("%d",&b);
while(op != 5){
    printf("-------------------MENU------------------\n");
    printf("1 - atribui valores\n"
           "2 - imprime valores\n"
           "3 - copia valores\n"
           "4 - soma valores\n"
           "5 -sair");
    scanf("%d",&op);
    switch (op){
        case 1:
            atribuiNumeroComplexo(&num1,a,b);
        case 2:
            imprimeNumeroComplexo(num1);
    }
}

    atribuiNumeroComplexo(&num1,a,b);
    imprimeNumeroComplexo(num1);
    copiaNumeroComplexo(&num2,&num1);
    imprimeNumeroComplexo(num2);
    somaNumeroComplexo(&num1,&num2,&soma);
    return 0;
}