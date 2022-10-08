#include<stdio.h>

int main(){
    long long int t,n,i,j,k,l,m;
    scanf("%lld",&t);
    for (i = 0;i < t;i++){
        scanf("%lld",&n);
        long long int map[n][n];
        long long int sum;
        for (j = 0;j < n;j++){
            for (k = 0;k < n;k++){
                scanf("%lld",&map[j][k]);
            }
        }
        printf("Case #%lld:",i+1);
        for (l = 0;l < n;l++){
            sum = 0;
            for (m = 0;m < n;m++){
                sum = sum + map[m][l];
            }
            printf(" %lld",sum);
        }
        printf("\n");
    }

    return 0;
}