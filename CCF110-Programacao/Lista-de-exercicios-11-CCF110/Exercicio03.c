#include <stdio.h>

int main()
{
    int a;
    FILE *numero, *pares;
    pares = fopen("pares.txt","a");
    if((numero=fopen("numeros.txt","w+")) == NULL)
    {
        printf("Nao foi possivel abrir o arquivo\n");
        return;
    }
    else
    {
        fputs("10\n",numero);
        fputs("27\n",numero);
        fputs("53\n",numero);
        fputs("14\n",numero);
        fputs("12\n",numero);
        fputs("57\n",numero);
        fputs("18\n",numero);
        fputs("24\n",numero);
        fputs("25\n",numero);
        fputs("16\n",numero);
        fputs("32\n",numero);
    }
    fclose(numero);
    numero = fopen("numeros.txt","r+");
    while(fscanf(numero,"%d",&a)!= EOF)
    {
        if(a%2==0)
        {
            fprintf(pares,"%d \n",a);
        }
    }
    fclose(pares);
    return 0;
}
