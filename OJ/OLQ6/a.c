#include<stdio.h>

int t,n,i,j,k,l,m;

int main(){
    scanf("%d",&t);
    for (i=0;i<t;i++){
        scanf("%d",&n);
        long long int a[n],b[n],c[n];
        for (j=0;j<n;j++){
            scanf("%lld",&a[j]);
        }
        for (k=0;k<n;k++){
            scanf("%lld",&b[k]);
        }
        for (l=0;l<n;l++){
            c[l]=a[l]-b[l];
        }
        printf("Case #%d:",i+1);
        for (m=0;m<n;m++){
            printf(" %lld",c[m]);
        }
        printf("\n");
    }
    
    return 0;
}