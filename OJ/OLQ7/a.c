#include<stdio.h>
#include<string.h>
int main(){
    int many = 3,i,n;
    for (i = 0;i < many;i++){
        scanf("%d",&n);
        char word[n];
        scanf("%s",&word);
        printf("%c%c\n",word[strlen(word)-1],word[0]);
        }
    return 0;
}