#include<stdio.h>

int AtoB(int x, int y){
    int result;
    if(x == y){
        result = y;
    }
    else if(x == 1){
        result = x;
    }
    else if(x % 2 == 0){
        result = AtoB(x/2, y);
    }
    else if(x % 2 != 0){
        result = AtoB(x*3+1, y);
    }
    return result;
}

int main(){
    long long int t,a,b,i;
    scanf("%lld",&t);
    for(i = 0;i < t;i++){
        scanf("%lld %lld",&a,&b);
        printf("Case #%lld: ",i+1);
        if(AtoB(a,b) == b){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
}