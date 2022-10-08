#include<stdio.h>

int c = -10;
int f,i;

int main(){
    printf("Celcius to Fahrenheit\n");
    printf("=====================\n");
    for (i = 0; i <=10; i++){
        c = c + 10;
        f = (c*1.8)+32;
        printf("%d C\t ||\t%d F\n",c,f);
    }
    return 0;
}