#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    int n,i,lengths,j;
    char s[1000];
    scanf("%d",&n);
    for (i=0;i<n;i++){
        scanf("%s",&s);
        getchar();
        lengths = strlen(s);
        printf("Case #%d : ",i+1);
        for (j=lengths-1;j>=0;j--){
            printf("%c",s[j]);
        }
        printf("\n");
    }
    return 0;
}