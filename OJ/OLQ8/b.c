#include<stdio.h>

void main(){
    int t,i;
    long long int n,m,j,diff,k;
    scanf("%d",&t);
    for(i = 0;i < t;i++){
        diff = 0;
        scanf("%lld",&n);
        long long int arr[n];
        // long long int test[n];
        for (m = 0;m < n;m++){
            scanf("%lld",&arr[m]);
        }
        for (j = 0;j<n;j++){
            for (k = 0;k < j;k++){
                if (arr[j] == arr[k]){
                    break;
                }
            }
            if (j == k){
                diff++;
            }
        }
        printf("Case #%d: %lld\n",i+1,diff);
    }
}