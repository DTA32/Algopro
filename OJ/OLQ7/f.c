#include<stdio.h>

int main(){
    long long int n,i,sum_even = 0,sum_odd = 0;
    long long int min = 100001;
    scanf("%lld",&n);
    long long int arr[n];
    for (i = 0; i<n;i++){
        scanf("%lld",&arr[i]);
        if (arr[i]%2 == 0){
            sum_even+=arr[i];
        }
        else{
            sum_odd += arr[i];
            if (arr[i]<min){
                min = arr[i];
            }
        }
        if(i == n-1 && sum_odd%2!=0){
            sum_odd -= min;
        }
    }
    printf("%lld\n", sum_even+sum_odd);

    return 0;
}