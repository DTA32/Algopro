#include<stdio.h>

int t,i,j,k,l,m,n;
long long int x;

int main(){
    scanf("%d",&t);
    for (i = 0;i < t;i++){
        scanf("%lld",&x);
        long long int arr[x][x];
        long long int sum[x];
        for (j = 0;j<x;j++){
            for (k = 0;k<x;k++){
                scanf("%lld",&arr[j][k]);
            }
        }
        for (m = 0;m<x;m++){
            for (l = 0;l<x;l++){
                sum[m] += arr[l][m];
            }
        }
        printf("Case #%d:",i+1);
        for(n = 0;n<x;n++){
            printf(" %lld",sum[n]);
        }
        printf("\n");
    }

    return 0;
}