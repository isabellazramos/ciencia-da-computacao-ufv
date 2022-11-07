//exercicio 09
#include <stdio.h>
#include <stdlib.h>

float nota(float mat[10][5]){
	float soma[10], media[10];
	int k, l, n;
	for (k=1; k<=10; k++){
		for (l=1; l<=5; l++){
			soma[k] += mat[k][l];
		}
	}
	for (k=1; k<=10; k++){
		media[k] = soma[k]/5;
		if (media[k]>=60){
			printf("Aluno %d: %.2f Aprovado\n", k, media[k]);
		}
		else{
			printf("Aluno %d: %.2f Reprovado\n", k, media[k]);
		}
	}
	return 0.0;
}

int main(){
	float m[10][5];
	int i, j;
	for (i=1; i<=10; i++){
		printf("Digite as notas do aluno %d:\n", i);
		for (j=1; j<=5; j++){
			scanf("%f", &m[i][j]);
		}
	}
	nota(m);
	return 0;
}
