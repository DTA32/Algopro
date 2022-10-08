#include<stdio.h>

long long int a,b,c,d;

int main(){
    scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
    if ((a*b)==(c-d)){
        printf("True\n");
    }
    else{
        printf("False\n");
    }
    return 0;
}