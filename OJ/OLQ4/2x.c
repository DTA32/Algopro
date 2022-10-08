#include<stdio.h>

int main(){
    long long a1,a2,b1,b2,c1,c2;
    scanf("%lld %lld",&a1,&a2);
    scanf("%lld %lld",&b1,&b2);
    scanf("%lld %lld",&c1,&c2);
    printf("%lld\n",((a1/a2)<<a2));
    printf("%lld\n",((b1/b2)<<b2));
    printf("%lld\n",((c1/c2)<<c2));
    return 0;
}