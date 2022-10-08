/*******************
      UNUSED
PLEASE REFER TO COPY
********************/

#include<stdio.h>
#include<stdlib.h>
// bug invalid input ttp ngeluarin hasil
void invalid_input();

int hex2int(char input){
    int result = 0;
    if (input >= 48 && input <= 57){
        result = input - '0';
    }
    else if (input == 'A' || input == 'a'){
        result = 10;
    }
    else if (input == 'B' || input == 'b'){
        result = 11;
    }
    else if (input == 'C' || input == 'c'){
        result = 12;
    }
    else if (input == 'D' || input == 'd'){
        result = 13;
    }
    else if (input == 'E' || input == 'e'){
        result = 14;
    }
    else if (input == 'F' || input == 'f'){
        result = 15;
    }
    else{
        invalid_input();
    }
    return result;
}

char int2hex(int input){
    char result;
    if (input >= 0 && input <= 9){
        result = input + '0';
    }
    else if (input == 10){
        result = 'A';
    }
    else if (input == 11){
        result = 'B';
    }
    else if (input == 12){
        result = 'C';
    }
    else if (input == 13){
        result = 'D';
    }
    else if (input == 14){
        result = 'E';
    }
    else if (input == 15){
        result = 'F';
    }    
    else{
        invalid_input();
    }
    return result;
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
    // inputmenu = getchar();
    fflush(stdin);
    if (inputmenu == '1'){
        printf("Masukkan hexadecimal: ");
        scanf("%c",&input_hex2int);
        fflush(stdin);
        printf("Hasil: %d\n",hex2int(input_hex2int));
        menu();
    }
    else if(inputmenu == '2'){
        printf("Masukkan integer: ");
        scanf("%d",&input_int2hex);
        fflush(stdin);
        printf("Hasil: %c\n",int2hex(input_int2hex));
        menu();
    }
    else if(inputmenu == '3'){
        printf("Selamat tinggal!\n");
        exit(0);
    }
    else{
        invalid_input();
        menu();
    }
    // switch (inputmenu){
    // case '1':
    //     printf("Masukkan hexadecimal: ");
    //     scanf("%c",&input_hex2int);
    //     printf("Hasil: %d\n",hex2int(input_hex2int));
    //     menu();
    //     break;
    // case '2':
    //     printf("Masukkan integer: ");
    //     scanf("%d",&input_int2hex);
    //     printf("Hasil: %c\n",int2hex(input_int2hex));
    //     menu();
    //     break;
    // case '3':
    //     printf("Selamat tinggal!\n");
    //     exit(0);
    //     break;
    // default:
    //     invalid_input();
    //     menu();
    // }
}

void invalid_input(){
    printf("\nInput yang anda masukkan salah\n");
    printf("Anda akan dikembalikan ke menu\n");
}

void intro(){
    printf("Selamat datang di program konversi hexadecimal\n");
    printf("Program by Muhammad Raditya - 2502032144\n");
}

void main(){
    intro();
    menu();
}