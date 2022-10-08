#include<stdio.h>

float human, dog;

int main(){
    printf("Masukkan umur anjing pada tahun manusia: ");
    scanf("%f", &human);
    if (human <= 0 && human >= 'a'-'z' && human >= 'A'-'Z'){
        printf("ERROR");
    }
    else if (human <= 2){
        dog = human * 5.25;
        printf("Umur anjing pada tahun anjing adalah: %.2f",dog);
    }
    else {
        dog = (human - 2) * 4 + 10.5;
        printf("Umur anjing pada tahun anjing adalah: %.1f",dog);
    }

    return 0;
    }
