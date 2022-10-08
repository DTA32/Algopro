#include<stdio.h>
// catatan: udah bener outputnya tapi wrong answer
int main (){
    long long int row,col,i,j,temp1,temp2,temp3;
    long long int test,k;
    scanf("%lld%lld",&row,&col);
    long long int garden[row][col];
    for (i = 0;i < row;i++){
        for (j = 0;j < col;j++){
            scanf("%lld",&garden[i][j]);
        }
    }
    scanf("%lld",&test);
    for (k = 0;k < test;k++){
        scanf("%lld%lld%lld",&temp1,&temp2,&temp3);
        garden[temp1-1][temp2-1] = temp3;
    }
    for (i = 0;i < row;i++){
        for (j = 0;j < col;j++){
            printf("%lld",garden[i][j]);
            if (j < col-1){ 
            printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}