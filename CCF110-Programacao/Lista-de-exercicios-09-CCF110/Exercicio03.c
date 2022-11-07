#include<stdio.h>
int primos(x){
int i,d ;
for(i=1;i<=x;i++){
    if (x%i==0){
        d++;
    }}
if (d==2){
    return (0);}
else{
    return(1);}
}
int main(){
int x,v;
scanf("%d", &x);
v=primos(x);
if (v==0){
    printf("numero primo");}
else{
    printf("nao primo");}

return 0;
}

