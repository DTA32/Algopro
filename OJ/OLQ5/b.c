#include<stdio.h>
// catatan: udah bener outputnya tapi wrong answer
int main(){
    long long int n,i,j,k;
    scanf("%lld",&n);
    long long int a[n],b[n];
    for (i = 0;i < n;i++){
        scanf("%lld",&a[i]);
    }
    for (j = 0;j < n;j++){
        scanf("%lld",&b[a[j]]);
    }
    for (k = 0;k < n;k++){
        printf("%lld",b[k]);
        if (k<n-1){
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}