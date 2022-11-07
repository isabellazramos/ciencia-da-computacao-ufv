#include <stdio.h>

int recursiva(int linha,int n){
    int i;
    if (linha ==0){
        return(1);
    }
    else{
    for(i=0;i<n;i++){
        printf("* ");
    }
    printf("\n");
    recursiva(linha - 1,n);
}}

int main (){
    int n;
    scanf("%d",&n);
    recursiva(n,n);
return 0;
}
