#include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

int main(){
    // int t; scanf("%d", &t);
    // while(t--){
    //     long long int x, count = 0, z;
    //     long long int binary[33]; memset(binary, 0, sizeof(binary));
    //     scanf("%lld %lld", &x, &z);
    //     if(x == 0){
    //         long long int binary[33] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 , 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    //         count = 1;
    //     }
    //     for(int i = 0; x > 0; i++){
    //         if(x == 0) break;
    //         binary[i] = x % 2;
    //         x = x / 2;
    //         count++;
    //     }
    //     printf("%lld", binary[z]);
    //     // for(int i  = 0; i < count; i++){
    //     //     printf("%lld", binary[i]);
    //     // }
    //     printf("\n");
    // int c;
    // c = 5/2;
    // printf("%d",c);
    int n,m,i;
    scanf("%d %d",&n,&m);
    for(i = n;i < n+m;i++){
        printf("%d\n",i);
    }
}