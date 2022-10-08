#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    long long int t,i,lengths,j,k;
    char word[1001];
    long long int charASCII[1001];
    scanf("%lld",&t);
    for (i = 0;i < t;i++){
        scanf("%s",&word);
        getchar();
        lengths = strlen(word);
        strrev(word);
        for (j = 0;j<lengths;j++){
            charASCII[j] = (int)(word[j]);
            charASCII[j] = (charASCII[j]%2);
        }
        printf("Case #%lld: ",i+1);
        for (k = 0;k<lengths;k++){
            printf("%lld",charASCII[k]);
        }
        printf("\n");
    }

    return 0;
}