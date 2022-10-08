#include<stdio.h>

long int a,b,c,i;

int main(){
    scanf("%ld %ld",&a,&b);
    for (long int i = a; i<=b; i++){
        c = c+i;
    }
    printf("%ld\n",c);
    return 0;
}