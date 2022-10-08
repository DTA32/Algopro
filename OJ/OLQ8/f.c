#include<stdio.h>

void main(){
    long long int t,n,i;
    long long int a,b,c,d;
    scanf("%lld",&t);
    for (i = 0;i<t;i++){
        scanf("%lld",&n);
        long long int arr[n][n];
        for (a = 0;a<n;a++){
            for (b = 0;b<n;b++){
                scanf("%lld",&arr[a][b]);
            }
        }
        printf("Case #%lld:",i+1);
        for (d = 0;d<n;d++){
            long long int temp = 0;
            for (c = 0;c<n;c++){
                temp += arr[c][d];
            }
            printf(" %lld",temp);
        }
        printf("\n");
    }
}