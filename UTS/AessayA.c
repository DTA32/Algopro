#include<stdio.h>

int main(){
    char inp;
    scanf("%c",&inp);
    if (inp == 'a'||inp == 'i'||inp == 'u'||inp == 'e'||inp == 'o'){
        printf("Vokal");
    }
    else if(inp == 'y'){
        printf("Bisa Vokal bisa Konsonan");
    }
    else{
        printf("Konsonan");
    }
}