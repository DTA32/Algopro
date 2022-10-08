#include<stdio.h>

unsigned short int a,b,c,d,e,f,g,h,i,j,k,l;
float m,n,o;

int main(){
    scanf("%d %d %d %d\n",&a,&b,&c,&d);
    scanf("%d %d %d %d\n",&e,&f,&g,&h);
    scanf("%d %d %d %d",&i,&j,&k,&l);
    float m = (((a/1)*2)+((b/2)*4)+((c/3)*6)+((d/4)*4));
    float n = (((e/1)*2)+((f/2)*4)+((g/3)*6)+((h/4)*4));
    float o = (((i/1)*2)+((j/2)*4)+((k/3)*6)+((l/4)*4));
    printf("%.2f\n",m);
    printf("%.2f\n",n);
    printf("%.2f\n",o);
    return 0;
}

