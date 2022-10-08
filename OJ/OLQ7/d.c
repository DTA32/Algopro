#include<stdio.h>
#include<string.h>

int main(){
    long long int n,m,i,indexTemp,j;
    scanf("%lld %lld",&n,&m);
    char word[n];
    scanf("%s",&word);
    getchar();
    for(i = 0;i < m;i++){
        scanf("%lld",&indexTemp);
        if(word[indexTemp]>='a'&&word[indexTemp]<='z'){
            word[indexTemp] = word[indexTemp]-32;
        }
        else{
            word[indexTemp] = word[indexTemp]+32;
        }
    }
    printf("%s\n",word);
    return 0;
}