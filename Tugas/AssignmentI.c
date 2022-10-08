#include<stdio.h>
#include<stdlib.h>

#define totalmenu 8

static int price[totalmenu] = {25000,27500,27000,22000,25000,18000,25000,25000};

void displayMenu(){
    printf("\tMENU\n");
    printf("=============================\n");
    printf("No \tName\t\tPrice\n");
    printf("1. Croissant Almond\t25000\n");
    printf("2. Smoke Beef Croissant\t27500\n");
    printf("3. Croffle\t\t27000\n");
    printf("4. Apple Puff\t\t22000\n");
    printf("5. Pie Apple\t\t25000\n");
    printf("6. Espresso\t\t18000\n");
    printf("7. Cafe Latte\t\t25000\n");
    printf("8. Cappucino\t\t25000\n");
}

void exitProgram(){
    printf("Thank you for using this program!!\n");
    exit(0);
}

int main(){
    char exitconfirm;
    for(;;){
        system("cls");
        int quantity[totalmenu] = {0,0,0,0,0,0,0,0};
        int subtotal[totalmenu] = {0,0,0,0,0,0,0,0};
        printf("Welcome to simple cashier program\n");
        displayMenu();
        printf("Input 't' to print total\n");
        printf("Input 'q' to exit program\n\n");
        char inputChar = 0;
        int inputInt;
        int i;
        unsigned long total = 0;
        while(inputChar!='t' && inputChar !='q'){
            printf("Enter menu number >> ");
            scanf("%c",&inputChar);
            getchar();
            if(inputChar >= '1' && inputChar <= '8'){
                inputInt = ((int) inputChar) - 48;
                quantity[inputInt-1]++;
            }
            else if(inputChar == 't'){
                for(i = 0;i < totalmenu;i++){
                    if(quantity[i] > 0){
                        subtotal[i] = quantity[i] * price[i];
                    }
                }
                for(i = 0;i < totalmenu;i++){
                    if(subtotal[i] > 0){
                        total += subtotal[i];
                    }
                }
                printf("Total: %lu\n",total);
            }
            else if(inputChar == 'q'){
                exitProgram();
            }
            else{
                printf("Input invalid!!\n");
            }
        }
        printf("Do you want to use this program again? (Y/N)\n");
        printf(">> ");
        scanf("%c",&exitconfirm);
        getchar();
        if(exitconfirm == 'N' || exitconfirm == 'n'){
            exitProgram();
        }
    }
}