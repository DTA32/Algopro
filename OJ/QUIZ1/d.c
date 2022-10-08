#include<stdio.h>

int main(){
    long long int t,n,p,q,i,j;
    scanf("%lld",&t);
    for(i = 1;i<=t;i++){
        scanf("%lld",&n);
        long long int set[n];
        for (j = 0;j<n;j++){
            scanf("%lld",&set[j]);
        }
        scanf("%lld %lld",&p,&q);
        printf("Case #%lld : ",i);
        if (set[p-1] == set[q-1]){
            printf("Draw\n");
        }
        else if (set[p-1] > set[q-1]){
            printf("Bibi\n");
        }
        else{
            printf("Lili\n");
        }
    }

    return 0;
}