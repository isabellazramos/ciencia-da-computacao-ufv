#include <stdio.h>

int recursiva(int n1,int n2){
    int i;
    if (n1<=n2){
    if (n1%5==0){
        printf("%d\n",n1);
        }
        recursiva(n1+1,n2);
    }
}

int main(){
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    recursiva(n1,n2);
return 0;
}

