#include<stdio.h>
#include<string.h>

int main(){
    long long int t,i;
    char s[501],sc[501];
    scanf("%lld\n",&t);
    for (i = 0;i < t;i++){
        gets(s);
        strcpy(sc, s);
        strrev(sc);
        printf("Case #%lld: ",i+1);
        if (strcmp(s, sc) == 0){
            printf("Yay, it's a palindrome\n");
        }
        else{
            printf("Nah, it's not a palindrome\n");
        }

    }
    return 0;
}