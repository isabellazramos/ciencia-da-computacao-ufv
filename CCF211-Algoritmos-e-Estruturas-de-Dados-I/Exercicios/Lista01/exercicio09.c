//
// Created by isabella on 20/08/2019.
//
#include "listaExercicios.h"
//O correio deseja separar o peso das caixas em 2 conjuntos: caixas leves e pesadas, para facilitar o
//transporte e melhor alocação das caixas. Para isso, você foi contratado para desenvolver um subsistema
//(função) que receberá 10 caixas e deverá informar as 5 mais pesadas, armazenando-as em um vetor A e as
//5 menos pesadas armazenando-as em um vetor B. Ao processar as 10 caixas, imprima o vetor A e o vetor
//B

int main(){
    int caixas[10],pesada[5],leve[5];
    int *p,*pe,*le;
    for (int i = 0; i < 10; ++i) {
        scanf("%d",&caixas[i]);
    }
    p = &caixas[0];
    ordenaVetor(p);
    pe = &pesada[0];
    le = &leve[0];
    caixasPesadasELeves(p,pe,le);
    imprimirCaixas(pe,le);
    for (int i = 0; i < 10; ++i) {
        printf("%d\n",caixas[i]);
    }
}