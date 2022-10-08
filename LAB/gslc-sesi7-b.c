#include<stdio.h>

int gcd(int a, int b){
    int c;
    if(b == 0){
        return a;
    }
    else{
        c = a % b;
        return gcd(b,c);
    }
}

int main(){
    int a,b;
    printf("Masukkan nilai a dan b: ");
    scanf("%d %d",&a,&b);
    printf("FPBnya adalah: %d\n",gcd(a,b));
}