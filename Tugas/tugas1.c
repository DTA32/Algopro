#include<stdio.h>
/*  Name: Odd or Even Number Identifier
    Author: DTA32
    Was made for Algorithm and Programming Task 1
    :)
    Rev 2
*/
int x;

int main(){
    printf("Input your number:\n");
    scanf("%d",&x);
    if (x==0)
        printf("The number is neither odd nor even");
    else if (x%2==0)
        printf("The number is even");
    else
        printf("The number is odd");
    // else if (x%2==0)
    //     printf("The number is even"); // was used at first
    // else if (x%2!=0)
    //     printf("The number is odd");
    return 0;
}