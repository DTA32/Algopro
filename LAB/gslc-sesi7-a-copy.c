#include<stdio.h>
#include<stdlib.h>

void invalid_input();
void menu();

void hex2int(){
    char input;
    int result = 0;
    printf("Masukkan hexadecimal: ");
    scanf("%c",&input);
    fflush(stdin);
    if (input >= 48 && input <= 57){
        result = input - '0';
        printf("Hasil: %d\n",result);
    }
    else if (input == 'A' || input == 'a'){
        result = 10;
        printf("Hasil: %d\n",result);
    }
    else if (input == 'B' || input == 'b'){
        result = 11;
        printf("Hasil: %d\n",result);
    }
    else if (input == 'C' || input == 'c'){
        result = 12;
        printf("Hasil: %d\n",result);
    }
    else if (input == 'D' || input == 'd'){
        result = 13;
        printf("Hasil: %d\n",result);
    }
    else if (input == 'E' || input == 'e'){
        result = 14;
        printf("Hasil: %d\n",result);
    }
    else if (input == 'F' || input == 'f'){
        result = 15;
        printf("Hasil: %d\n",result);
    }
    else{
        invalid_input();
    }
    menu();
}

void int2hex(){
    char result;
    int input;
    printf("Masukkan integer: ");
    scanf("%d",&input);
    fflush(stdin);
    if (input >= 0 && input <= 9){
        result = input + '0';
        printf("Hasil: %c\n",result);
    }
    else if (input == 10){
        result = 'A';
        printf("Hasil: %c\n",result);
    }
    else if (input == 11){
        result = 'B';
        printf("Hasil: %c\n",result);
    }
    else if (input == 12){
        result = 'C';
        printf("Hasil: %c\n",result);
    }
    else if (input == 13){
        result = 'D';
        printf("Hasil: %c\n",result);
    }
    else if (input == 14){
        result = 'E';
        printf("Hasil: %c\n",result);
    }
    else if (input == 15){
        result = 'F';
        printf("Hasil: %c\n",result);
    }    
    else{
        invalid_input();
    }
    menu();
}

void menu(){
    char inputmenu;
    int input_int2hex;
    char input_hex2int;
    printf("\n");
    printf("Silahkan pilih konversi yang diinginkan: \n");
    printf("1. Hexadecimal ke Integer\n");
    printf("2. Integer ke Hexadecimal\n");
    printf("3. Exit program\n");
    printf(">> ");
    scanf("%c",&inputmenu);
    fflush(stdin);
    switch (inputmenu){
    case '1':
        hex2int();
        break;
    case '2':
        int2hex();
        break;
    case '3':
        printf("Selamat tinggal!\n");
        exit(0);
    default:
        invalid_input();
        menu();
        break;
    }
}

void invalid_input(){
    printf("\nInput yang anda masukkan salah\n");
    printf("Anda akan dikembalikan ke menu\n");
}

void intro(){
    printf("Selamat datang di program konversi hexadecimal\n");
    printf("Program by Muhammad Raditya - 2502032144\n");
}

int main(){
    intro();
    menu();
}