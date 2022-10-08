#include<stdio.h>
#include<string.h>
#include<stdlib.h>
// catatan: udah bener outputnya tapi wrong answer
int main(){
    long long int t,i,length,j;
    int palFalse;
    char s[501];
    scanf("%lld",&t);
    for (i=0;i<t;i++){
        scanf("%s",&s);
        length = strlen(s);
        for (j=0;j<length;j++){
            if(s[j] != s[length-j-1]){
                palFalse = 1;
                break;
            }
        }
        printf("Case #%lld: ",i+1);
        if(palFalse == 1){
            printf("Nah, it's not a palindrome\n");
        }
        else{
            printf("Yay, it's a palindrome\n");
        }
        palFalse = 0;
    }
    return 0;
}