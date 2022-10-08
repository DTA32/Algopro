#include<stdio.h>
#include<stdlib.h>
//catatan: outputnya address

long long int t,i,j,k,l,m,n,x;

int main(){
    scanf("%lld",&t);
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
        printf("Case #%lld:",i+1);
        for(n = 0;n<x;n++){
            printf(" %lld",sum[n]);
        }
        printf("\n");
    }

    return 0;
}