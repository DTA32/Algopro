#include<stdio.h>

long long a,b,c,d,e,f,g,h,i,j,k,l,m,n,o;

int main(){
    scanf("(%lld+%lld)x(%lld-%lld)\n",&a,&b,&c,&d);
    scanf("(%lld+%lld)x(%lld-%lld)\n",&e,&f,&g,&h);
    scanf("(%lld+%lld)x(%lld-%lld)",&i,&j,&k,&l);
    m = ((a+b)*(c-d));
    n = ((e+f)*(g-h));
    o = ((i+j)*(k-l));
    printf("%lld %lld %lld\n",m,n,o);
    return 0;
}