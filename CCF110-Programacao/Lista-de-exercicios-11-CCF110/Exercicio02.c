#include <stdio.h>

int main()
{
    FILE *votos;
    int cand1=0;
    int cand2=0;
    int cand3=0;
    int cand4=0;
    int cand5=0;
    int cand;

    votos = fopen("votos.txt","w+");
    fputs("1\n",votos);
    fputs("2\n",votos);
    fputs("5\n",votos);
    fputs("4\n",votos);
    fputs("3\n",votos);
    fputs("2\n",votos);
    fputs("2\n",votos);

    fclose(votos);
    votos = fopen("votos.txt","r+");
    while(fscanf(votos,"%d",&cand)!=EOF)
    {
        if(cand==1)
        {
            cand1= cand1+1;
        }
        else if(cand==2)
        {
            cand2= cand2+1;
        }
        else if(cand==3)
        {
            cand3= cand3+1;
        }
        else if(cand==4)
        {
            cand4= cand4+1;
        }
        else if(cand==5)
        {
            cand5= cand5+1;
        }
    }
    if((cand1>cand2)&&(cand1>cand3)&&(cand1>cand4)&&(cand1>cand5))
    {
        printf("O candidato numero um ganhou com %d votos\n",cand1);
    }
    if((cand2>cand1)&&(cand2>cand3)&&(cand2>cand4)&&(cand2>cand5))
    {
        printf("O candidato numero dois ganhou com %d votos\n",cand2);
    }
    if((cand3>cand2)&&(cand3>cand1)&&(cand3>cand4)&&(cand3>cand5))
    {
        printf("O candidato numero tres ganhou com %d votos\n",cand3);
    }
    if((cand4>cand2)&&(cand4>cand3)&&(cand4>cand1)&&(cand4>cand5))
    {
        printf("O candidato numero quatro ganhou com %d votos\n",cand4);
    }
    if((cand5>cand2)&&(cand5>cand3)&&(cand5>cand1)&&(cand5>cand4))
    {
        printf("O candidato numero cinco ganhou com %d votos\n",cand5);
    }

    fclose(votos);
    return 0;
}
