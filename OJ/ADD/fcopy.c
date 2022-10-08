#include<stdio.h>

int t,i,rows,j,k;

int main(){
    scanf("%d",&t);
    for (i=0;i<t;i++){
        scanf("%d",&rows);
        printf("Case #%d:\n",i+1);
        for (k = rows; k>= 1; k--){
            for (j = 1; j<= rows; j++){
                if (j<k){
                    printf(" ");
                }
                else{
                    if(rows%2==0){
                        if(((k+j)%2)==0){
                        printf("#");
                        }
                        else{
                        printf("*");
                        }
                    }
                    else{
                        if(((k+j)%2)==0){
                        printf("*");
                        }
                        else{
                        printf("#");
                        }     
                    } 
                }
            }
            printf("\n");
        }
    }
    return 0;
}