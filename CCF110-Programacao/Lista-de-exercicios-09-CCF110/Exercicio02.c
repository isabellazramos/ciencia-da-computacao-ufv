#include <stdio.h>
#include <math.h>

int num (int a){
if(a%2==0){
    return 0;
}
if(a%2!=0){
    return 1;
}
}

main(){
int a;
scanf("%d",&a);
printf("%d",num(a));
}
