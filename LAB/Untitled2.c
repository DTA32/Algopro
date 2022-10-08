#include<stdio.h>

int x;

int main(){
    printf("Input your number:\n");
    scanf("%d",x);
    if (x%2==0)
        printf("The number is even");
    else if (x%2!=0)
        printf("The number is odd");
    else if (x==0)
        printf("The number is neither odd nor even");
    return 0;
}
