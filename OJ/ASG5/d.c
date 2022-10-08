#include<stdio.h>

int t,i,n,k;

int main(){
    scanf("%d",&t);
    for (k=1; k<=t; k++){
        scanf("%d",&n);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == 0 || i == n - 1 ||
                    j == 0 || j == n - 1 ||
                    i == j || i == n - 1 - j)            
                    printf("*");        
     
                else
                    printf(" ");
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}