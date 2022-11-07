//Exercicio14
#include <stdio.h>

double operacao(int a, int b, char c)
{
    float conta;
    if(c=='/'){
        conta = a/b;
    }
    if(c=='-'){
        conta = a-b;
    }
    if(c=='+'){
        conta = a+b;
    }
    if(c=='*'){
        conta = a*b;
    }

    return(conta);
}

int main(){
    int a,b;
    char c;
    float resp;
    scanf("%d %c %d",&a,&c,&b);
    resp=operacao(a,b,c);
    printf("%f",resp);

}
