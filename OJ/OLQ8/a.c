#include<stdio.h>

void main(){
    int i,t;
    long long int n,m,o;
    scanf("%d",&i);
    for (t = 0; t < i; t++){
        scanf("%lld %lld %lld",&n,&m,&o);
        printf("Case #%d: ",t+1);
        if (n + m <= o || n + o <= m || m + o <= n){
            printf("No\n");
        }
        else{
            printf("Yes\n");
        }
    }
}