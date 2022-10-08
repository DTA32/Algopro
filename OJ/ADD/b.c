#include<stdio.h>

long long int d,s,t;

int main(){
    scanf("%lld %lld %lld",&d,&s,&t);
    if (d>s && s>t){
        printf("Daging\nSayur\nTelur\n");
    }
    else if (d>t && t>s){
        printf("Daging\nTelur\nSayur\n");
    }
    else if (t>d && d>s){
        printf("Telur\nDaging\nSayur\n");
    }
    else if (t>s && s>d){
        printf("Telur\nSayur\nDaging\n");
    }
    else if (s>d && d>t){
        printf("Sayur\nDaging\nTelur\n");
    }
    else{
        printf("Sayur\nTelur\nDaging\n");
    }
    
    return 0;
}