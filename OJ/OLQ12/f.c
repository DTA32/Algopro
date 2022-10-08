#include<stdio.h>

unsigned long long func(unsigned long long m){
    unsigned long long res, n = 1;
    for(;;){
        res = (n*(n + 1)*(2*n + 1)) / 6;
        if (res >= m){
            return n;
        }
    n++;
    }
}

int main(){
    unsigned long t,i;
    unsigned long long m;
    scanf("%lu",&t);
    for(i = 0;i < t;i++){
        scanf("%llu",&m);
        printf("Case #%llu: ",i+1);
        printf("%llu\n",func(m));
    }
}