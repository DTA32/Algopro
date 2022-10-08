#include<stdio.h>
#include<string.h>

void main(){
    int t,i;
    long long int j,k,n,diff;
    scanf("%d",&t);
    for (i = 0; i < t; i++){
        diff = 0;
        char arr[100000];
        scanf("%s",&arr);
        n = strlen(arr);
        for (j = 0;j<n;j++){
            for (k = 0;k < j;k++){
                if (arr[j] == arr[k]){
                    break;
                }
            }
            if (j == k){
                diff++;
            }
        }
        printf("Case #%lld: ",i+1);
        if (diff % 2 == 0){
            printf("Breakable\n");
        }
        else{
            printf("Unbreakable\n");
        }
    }
}