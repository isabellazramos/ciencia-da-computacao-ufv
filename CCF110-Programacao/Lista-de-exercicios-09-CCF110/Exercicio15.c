//Exercicio15
#include <stdio.h>

int menor (int a,int b, int c){
    int m;

    if((a<b)&&(a<c)){
        m=a;
    }
    if((b<a)&&(b<c)){
        m=b;
    }
    if((c<a)&&(c<b)){
        m=c;
    }
    if((a==c)&&(a==b)){
        m=a;
    }
    if((a==c)&&(a<b)){
       m=a;
       }
    if((a==c)&&(b<a)){
       m=b;
       }
    if((a==b)&&(a<c)){
        m=a;
    }
    if((a==b)&&(c<a)){
        m=c;
    }
    if((b==c)&&(b<a)){
        m=b;
    }
    if((b==c)&&(a<b)){
        m=a;
    }
return m;
}
int main(){
    int a,b,c,resp;
    scanf("%d %d %d",&a,&b,&c);
    resp=menor(a,b,c);
    printf("%d",resp);
}
