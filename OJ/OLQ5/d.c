#include<stdio.h>
// catatan: udah bener outputnya tapi wrong answer

int main(){
    long long int i,t,j,k,l;
    long long int n,sum,nom,sumrec,lalala;
    scanf("%lld",&t);
    for (i=0;i<t;i++){
        scanf("%lld",&n);
        long long int x[n];
        for (j=0;j<n;j++){
            scanf("%lld",&x[j]);
        }
        for (k=0;k<n;k++){
            sum = sum+x[k];
        }
        nom = 0;
        for (l=0;l<n;l++){
            lalala = x[l];
            sumrec = sum;
            if (lalala>sumrec){
                nom = nom + 1;
            }
        }
        printf("Case #%lld: %lld\n",i+1,sum);
        printf("%lld\n",nom);
        sum = 0;
        sumrec = 0;
    }
    
    return 0;
}