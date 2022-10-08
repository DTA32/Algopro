#include<stdio.h>

int main(){
    long long int t,i,n,j;
    scanf("%lld",&t);
    for (i = 1;i<=t;i++){
        scanf("%lld",&n);
        printf("Case #%lld:\n",i);
        for (j = 1;j<=n;j++){
            printf("%lld ",j);
            if (j % 3 == 0||j % 5 == 0){
                if(j % 15 == 0){
                    printf("Lili\n");
                }
                else{
                printf("Jojo\n");
                }
            }
            else{
                printf("Lili\n");
            }
        }
    }

    return 0;
}