#include <stdio.h>

float foodprice, tax, service, total;

int main(){
    printf("Input your food price:\n$");
    scanf("%f",&foodprice);
    float tax = foodprice * 0.1;
    float service = foodprice * 0.05;
    float total = foodprice + tax + service;
    printf("Your tax charge is: $%.2f\n", tax);
    printf("Your service charge is: $%.2f\n", service);
    printf("Your total is: $%.2f\n",total);
    return 0;
}
