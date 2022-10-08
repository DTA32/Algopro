#include<stdio.h>

int t,g,b,i;

int main(){
    scanf("%d",&t);
    for (i=1; i<=t; i++){
        scanf("%d %d",&g,&b);
        if (g > b){
        printf("Case #%d: Go-Jo\n",i);
        }
        else{
        printf("Case #%d: Bi-Pay\n",i);
        }
    }
    return 0;
}