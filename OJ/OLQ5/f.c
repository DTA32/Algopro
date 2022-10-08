#include<stdio.h>
#include<limits.h>

int main (){
    long long int t,n,i,j,max,k,l;
    scanf("%lld",&t);
    for (i = 0;i<t;i++){
        scanf("%lld",&n);
        long long int num[n];
        for (j = 0;j<n;j++){
            scanf("%lld",&num[j]);
        }
        long long int max = 0;
        int sum = 0;
        for (k = 0; k<n;k++){
            for (l = 0;l<n;l++){
                if (k != l){
                    sum = num[k] + num[l];
                    if (max<sum){
                        max = sum;
                    }
                }   
            } 
        }
        printf("Case #%lld: %lld\n",i+1,max);
    }

    return 0;
}