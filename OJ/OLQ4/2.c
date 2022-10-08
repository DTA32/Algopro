#include<stdio.h>
#include<stdlib.h>

long int a,b,c,d,e,f;

int main(){
    scanf("%ld%ld\n",&a,&b);
    scanf("%ld%ld\n",&c,&d);
    scanf("%ld%ld",&e,&f);
    printf("%ld\n",(a/b)<<b);
    printf("%ld\n",(c/d)<<d);
    printf("%ld\n",(e/f)<<f);
    return 0;
}