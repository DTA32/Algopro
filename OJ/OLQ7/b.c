#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int t,i;
    long long int x,p,j;
    scanf("%d",&t);
    for (i = 0;i<t;i++){
        long long int count = 0;
        long long int bin[33];
        memset(bin,0,sizeof(bin));
        scanf("%lld %lld",&x,&p);
        if (x == 0){
            long long int bin[33] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 , 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        }
        for (j = 0;x>0;j++){
            if (x == 0){
                break;
            }
            bin[j] = x%2;
            x = x/2;
        }
        printf("%lld\n",bin[p]);
    }
    return 0;
}