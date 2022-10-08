#include<stdio.h>

int i,j,k;
long long int t,n;

int main(){
    scanf("%lld",&t);
    for (i=0;i<t;i++){
        scanf("%lld",&n);
        long long int x[n];
        for (j=0;j<n;j++){
            scanf("%lld",&x[j]);
        }
        printf("Case #%d:",i+1);
        for (k=n-1;k>=0;k--){
            printf(" %lld",x[k]);
        }
        printf("\n");
    }
    return 0;
}