#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    long long int i;
    char word[10001];
    char upperWord[10001];
    scanf("%[^\n]s",&word);
    long long int length;
    length = strlen(word);
    for (i=0;i<length;i++){
        upperWord[i] = toupper(word[i]);
        if(upperWord[i] == 'I'){
            printf("1");
        }
        else if(upperWord[i] == 'R'){
            printf("2");
        }
        else if(upperWord[i] == 'E'){
            printf("3");
        }
        else if(upperWord[i] == 'A'){
            printf("4");
        }
        else if(upperWord[i] == 'S'){
            printf("5");
        }
        else if(upperWord[i] == 'G'){
            printf("6");
        }
        else if(upperWord[i] == 'T'){
            printf("7");
        }
        else if(upperWord[i] == 'B'){
            printf("8");
        }
        else if(upperWord[i] == 'P'){
            printf("9");
        }
        else if(upperWord[i] == 'O'){
            printf("0");
        }
        else{
            printf("%c",upperWord[i]);
        }
    }
    printf("\n");
    
    return 0;
}