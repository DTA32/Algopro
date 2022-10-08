#include<stdio.h>

int main(){
    long long int a,b,c,k,i;
    scanf("%lld %lld",&a,&b);
    scanf("%lld",&k);
    for(i = 1;i < k;i++){
        c = a + b;
        a = b;
        b = c;
    }
    printf("%lld\n",c);
}