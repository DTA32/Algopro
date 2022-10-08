#include<stdio.h>

int a,b,c;

int main(){
    scanf("%d",&a);
    int b = a+a;
    printf("%d plus %d is %d\n",a,a,b);
    int c = b-1;
    printf("minus one is %d\n",c);
    return 0;
}