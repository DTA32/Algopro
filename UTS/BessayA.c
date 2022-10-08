#include<stdio.h>

int main(){
    int input;
    printf("Masukkan jumlah sisi bidang geometri: ");
    scanf("%d",&input);
    if (input == 3){
        printf("Segitiga\n");
    }
    else if(input == 4){
        printf("Segiempat\n");
    }
    else if(input == 5){
        printf("Pentagon\n");
    }
    else if(input == 6){
        printf("Heksagon\n");
    }
    else if(input == 8){
        printf("Oktagon\n");
    }
    else{
        printf("Error\n");
    }
}