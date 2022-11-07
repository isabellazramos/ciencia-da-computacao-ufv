#include <stdio.h>

int main(){
    int mat;
    char nome[30];
    float nota1,nota2,nota3,media;
    FILE *alunos;
    alunos = fopen("alunos.txt","w+");
    fputs("333 Isabella 7 8 9\n",alunos);
    fputs("354 Paula 7 4 4\n",alunos);
    fputs("378 João 7 0 2\n",alunos);
    fclose(alunos);
    alunos = fopen("alunos.txt","r+");
    while(fscanf(alunos, "%d %s %f %f %f",&mat,nome,&nota1,&nota2,&nota3)!=EOF){
            media=(nota1+nota2+nota3)/3;
            printf("Matricula %d ",mat);
            printf("Nome %s ",nome);
            printf("Media %f",media);

            if(media>=8.5){
                printf(" Excelente\n");
            }
            else if((media>=7.0)&&(media<8.5)){
                printf(" Bom\n");
            }
            else if(media<7.0){
                printf(" Preocupante\n");
            }
    }
fclose(alunos);
return 0;
}
