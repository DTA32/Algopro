#include<stdio.h>

int n,k,i,j;

int main(){
    scanf("%d %d",&n,&k);
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            printf("#");
        }
        printf("\n");
    }
    printf("\n");
    for (i=1;i<=n;i++){
        if (i%k==0){
            for (j=1;j<=n;j++){
            printf("#");
            }
        }
        else{
            for (j=1;j<=n;j++){
            printf(".");
            }
        }
        printf("\n");
    }
    printf("\n");
    for (i=1;i<=n;i++){
        for (j=1;j<=n;j++){
            if (j%k==0){
                printf("#");
                }
            else{
                printf(".");
                }    
            }
        printf("\n");
    }
    return 0;
}