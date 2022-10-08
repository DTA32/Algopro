#include<stdio.h>

int main(){
    int t,i;
    scanf("%d",&t);
    for(i = 0;i < t;i++){
        long long int n[21];
        int reqindex,j;
        scanf("%d %lld %lld",&reqindex,&n[0],&n[1]);
        printf("Case #%lld: ",i+1);
        if(reqindex == 0 || reqindex == 1){
            printf("%lld\n",n[reqindex]);
        }
        else{
            for(j = 2;j <= reqindex;j++){
                n[j] = n[j-1] - n[j-2];
            }
            printf("%lld\n",n[reqindex]);
        }
    }
}