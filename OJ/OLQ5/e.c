#include<stdio.h>

int main(){
    long long int t,n,i,j;
    long long int k,l,mode,max,m,o,c;
    scanf("%lld",&t);
    for (i = 0;i<t;i++){
        max = 0;
        scanf("%lld",&n);
        long long int elem[n],b[n],sum[n],sumr;
        for(j = 0;j<n;j++){
            scanf("%lld",&elem[j]);
        }
        for (k = 0;k<n-1;k++){
            mode = 0;
            for (l = k+1;k<n;k++){
                if (elem[k]==elem[l]){
                    mode++;
                    sum[k] = elem[l];
                }
            }
            if ((mode > max)&&(mode!=0)){
                m = 0;
                max = mode;
                b[m] = elem[k];
                m++;
            }
            else if (mode == max){
                b[m] = elem[k];
                m++;
            }
        }
        printf("ini debug %d",m);
        printf("Case #%lld: %lld\n",i+1,max);
        for (o = 0;o<m;o++){
            printf("%lld",sum[o]);
        }
        printf("\n");
    }

    return 0;  
}