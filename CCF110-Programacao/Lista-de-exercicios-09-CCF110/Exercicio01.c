#include <stdio.h>
#include <math.h>

double positivo (int a, int b, int c){
    double positivo1;
    positivo1 = ((-b)+ sqrt(pow(b,2)-4*a*c))/2*a;
    return positivo1;
}

double negativo (int a, int b, int c){
    double negativo1;
    negativo1 = ((-b)- sqrt(pow(b,2)-4*a*c))/2*a;
    return negativo1;
}

double delta (int a, int b, int c){
    double delta1;
    delta1 = sqrt(pow(b,2)-4*a*c);
    return delta1;
}

int main(){

int a,b,c;
double pos,neg,del;
scanf("%d %d %d",&a,&b,&c);
pos=positivo(a,b,c);
neg=negativo(a,b,c);
del=delta(a,b,c);
printf("%lf Positivo\n",pos);
printf("%lf Negativo\n",neg);
printf("%lf Delta\n",del);

return 0;
}
