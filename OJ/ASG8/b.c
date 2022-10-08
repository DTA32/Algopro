#include<stdio.h>

int main(){
    long long int n,i,max = 0,maxNow = 0;
    scanf("%lld",&n);
    long long int arr[n];
    for (i = 0;i < n;i++){
        scanf("%lld",&arr[i]);
    }
    for (i = 0;i < n;i++){
        if(arr[i] > 0){
            max = max + arr[i];
        }
    }
    printf("%lld\n",max);
}