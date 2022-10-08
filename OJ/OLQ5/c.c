#include<stdio.h>

long long int i,n,q,a,d,j;
long long int b;

int main(){
    scanf("%lld",&n);
    long long int c[n];
    for (i = 0;i<n;i++){
        scanf("%lld",&c[i]);
    }
    scanf("%lld",&q);
    for (i = 0;i<q;i++){
        scanf("%lld %lld",&a,&b);
        c[(a-1)] = b;
        printf("Case #%lld: ",i+1);
        for (j = 0;j<n;j++){
            printf("%lld",c[j]);
            if(j<n-1){
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}