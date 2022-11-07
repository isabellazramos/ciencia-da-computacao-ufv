#include <stdio.h>

int op(int vetor[5]){

    int i;
    for(i=0;i<5;i++){
        if(vetor[i]%3==0){
            printf("%d",vetor[i]);
        }
    }

}

int main(){
    int vetor[5];
    int i;
    for (i=0;i<5;i++){
        scanf("%d",&vetor[i]);
    }
    op(vetor);
}
