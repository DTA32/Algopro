#include<stdio.h>
#include<math.h>

int main(){
    long long int t,n,i,j,fact;
    scanf("%lld",&t);
    for(i=0;i<t;i++){
        fact = 0;
        scanf("%lld",&n);
        for (j = 1;j <= sqrt(n);j++){
            if(n%j==0){
                fact += 2;
            }
            if (j*j == n){
                fact--;
            }
        }
        printf("Case #%lld: %lld\n",i+1,fact);
    }
    return 0;
}