#include <stdio.h>
int inverso(num){
int numeros[3];
int i,x,variavel;
    variavel=1;
	for (i = 0; i < 3; i++)
	{
	   numeros[i] = num % 10;
	   num /= 10;
	}

    variavel=numeros[0]*100;
    variavel=variavel + numeros[1]*10;
    variavel=variavel + numeros[2]*1;
    return(variavel);
}
int main(){
    int inv,num;
    scanf("%d%", &num);
    inv=inverso(num);
    printf("%d",inv);
return 0;
}
