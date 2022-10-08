#include<stdio.h>

int i,j,n,friends,a,b,k,sum;

int main(){
    scanf("%d",&n);
    int views[n];
    for (i = 0; i < n; i++){
        scanf("%d",&views[i]);
    }
    scanf("%d",&friends);
    for (j = 1; j <= friends;j++){
        scanf("%d %d",&a,&b);
        for (k = a-1; k <=b-1; k++){
            sum = sum + views[k];
        }
        printf("Case #%d: %d\n",j,sum);
        sum = 0;
    }

    return 0;
}