//exeercicio13
#include <stdio.h>
#include <math.h>
double distancia(int x1,int x2,int y1,int y2,int z1,int z2){
    float d;
    d=sqrt((pow(x2-x1,2))+(pow(y2-y1,2))+(pow(z2-z1,2)));
    return(d);

}

int main(){
    int x1,x2,y2,y1,z2,z1;
    float resp;
    scanf("%d %d %d %d %d %d",&x1,&x2,&y1,&y2,&z1,&z2);
    resp = distancia(x1,x2,y2,y1,z2,z1);
    printf("%f",resp);
}
