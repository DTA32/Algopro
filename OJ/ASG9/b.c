#include<stdio.h>

long long int diff;

int Fib(int n) {
    int f;
    diff++;
    if (n==0){
        f = 0;
    }
    else if (n==1){
        f = 1;
    }
    else{
        f = Fib(n-2) + Fib (n-1);
    }
   return f;
}

int main(){
    long long int t,n,i;
    scanf("%lld",&t);
    for(i = 0;i < t;i++){
        scanf("%lld",&n);
        Fib(n);
        printf("Case #%lld: %lld\n",i+1,diff);
        diff = 0;
    }
}