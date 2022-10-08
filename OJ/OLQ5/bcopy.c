#include<stdio.h>

int i;
long long int n;

int main(){
    scanf("%d",&n);
    int a[n],b[n];
    for (i = 0;i < n;i++){
        scanf("%lld",&a[i]);
    }
    for (i = 0;i < n;i++){
        scanf("%lld",&b[i]);
    }
    for (i = 0;i < n;i++){
        b[i] = b[a[i]];
    }
    for (i = 0;i < n-1;i++){
        printf("%lld ",b[i]);
    }
    return 0;
}