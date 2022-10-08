#include<stdio.h>

unsigned fpb(unsigned a, unsigned b);

int main(){
    unsigned a,b;
    scanf("%u %u",&a,&b);
    printf("%u\n",fpb(a,b));
}

unsigned fpb(unsigned a, unsigned b){
    unsigned c;
    if(b == 0){
        return a;
    }
    else{
        c = a % b;
        return fpb(b,c);
    }
}