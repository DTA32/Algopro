#include<stdio.h>

int main(){
    long long int t,i,inp1,inp2;
    scanf("%lld",&t);
    for (i = 0;i<t;i++){
        scanf("%lld %lld",&inp1,&inp2);
        long long int res = 0,multip = 1,bit_sum;
        while (inp1 || inp2){
            bit_sum = (inp1 % 10) + (inp2 % 10);
            bit_sum %= 10;
            res = (bit_sum * multip) + res;
            inp1 /= 10;
            inp2 /= 10;
            multip *= 10;
        }
        printf("Case #%lld: %lld\n",i+1,res);
    }

    return 0;
}