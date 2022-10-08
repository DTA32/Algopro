#include<stdio.h>

long long int t,i,n,j,k,l,falsecase;

int main(){
    scanf("%lld",&t);
    for (i = 0;i<t;i++){
        scanf("%lld",&n);
        long long int x[n],y[n];
        for (j = 0;j<n;j++){
            scanf("%lld",&x[j]);
        }
        for (k = 0;k<n;k++){
            scanf("%lld",&y[k]);
        }
        for (l = 0;l<n;l++){
            if (x[l]<y[l]){
                falsecase += 1;
            }
            else{
                falsecase += 0;
            }
        }
        printf("Case #%lld: ",i+1);
        printf("%lld\n",falsecase);
    }

    return 0;
}