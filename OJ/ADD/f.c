#include<stdio.h>

int t,i,rows,j;

int main(){
    scanf("%d",&t);
    for (i=0;i<t;i++){
        scanf("%d",&rows);
        printf("Case #%d:\n",i+1);
        for (i = rows; i>= 1; i--){
            for (j = 1; j<= rows; j++){
                if (j<i){
                    printf(" ");
                }
                else{
                    printf("*");
                }
            }
            printf("\n");
        }
    }
    return 0;
}