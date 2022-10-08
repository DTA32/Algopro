#include<stdio.h>
#include<stdbool.h>

int main(){
    int t,i;
    scanf("%d",&t);
    for(i = 0;i < t;i++){
        long long int n,diff = 0,j,k;
        scanf("%lld",&n);
        long long int arr[n];
        bool check[1500001] = {false};
        for (j = 0;j < n;j++){
            scanf("%lld",&arr[j]);
            check[arr[j]] = true;
        }
        for (k = 0;k < 1500001;k++){
            if(check[k] == true){
                diff++;
            }
        }
        printf("Case #%d: %lld\n",i+1,diff);
    }
}