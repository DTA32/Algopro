#include<stdio.h>

int main(){
    long long int t,i;
    scanf("%lld",&t);
    for (i = 0;i < t;i++){
        long long int a,b,c;
        long long int temp = 0;
        double percent = 0.00;
        scanf("%lld %lld %lld",&a,&b,&c);
        percent = b / 100.00;
        temp = a * percent;
        printf("Case #%lld: ",i+1);
        if (temp > c){
            printf("%lld\n",c);
        }
        else{
            printf("%lld\n",temp);
        }
    }
}