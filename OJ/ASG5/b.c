#include<stdio.h>

int i,t,n,j;
long long int sum,arr[100];

int main(){
    scanf("%d",&t);
    for (i=1; i<=t; i++){
        scanf("%d",&n);
        for (j=0; j<n; j++){
            scanf("%lld",&arr[j]);
            sum = sum + arr[j];
        }
        printf("Case #%d: %lld\n",i,sum);
        sum = 0;
    }
    return 0;
}