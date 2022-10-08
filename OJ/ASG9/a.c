#include<stdio.h>
#include<string.h>

int main(){
    int t,i;
    scanf("%d",&t);
    for(i = 0;i < t;i++){
        int n,j;
        scanf("%d ",&n);
        char arr[20][50];
        scanf("%c %c",&arr[0],&arr[1]);
        for(j = 2;j <= n;j++){
            strcpy(arr[j],arr[j-1]);
            strcat(arr[j],arr[j-2]);
        }
        printf("%s\n",arr[n]);
    }
}