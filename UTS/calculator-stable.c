#include<stdio.h>
#include<stdlib.h>
// rev 1: no "n" or "x" yet, only simple calc

// Nama: Muhammad Raditya
// NIM : 2502032144

// function operator
int tambah(int x, int y){
    int hasilTambah;
    hasilTambah = x + y;
    return hasilTambah;
}
int kali(int x, int y){
    int hasilKali;
    hasilKali = x * y;
    return hasilKali;
}
int kurang(int x, int y){
    int hasilKurang;
    hasilKurang = x - y;
    return hasilKurang;
}
float bagi(int x, int y){
    float hasilBagi;
    hasilBagi = (float) x / (float) y;
    return hasilBagi;
}

// main driver
void main(){
    int ID1,OP,ID2,tempatHasil;
    system("cls");
    printf("Kalkulator Sederhana\n");
    printf("Pencipta: M Raditya\n\n");
    for(;;){
        printf("Masukkan operasi: ");
        scanf("%d %c %d",&ID1,&OP,&ID2);
        if(OP == '+'){
            printf("Hasil: %d\n\n",tambah(ID1,ID2));
            tempatHasil = tambah(ID1,ID2);
        }
        else if (OP == '-'){
            printf("Hasil: %d\n\n",kurang(ID1,ID2));
            tempatHasil = kurang(ID1,ID2);
        }
        else if (OP == '*'){
            printf("Hasil: %d\n\n",kali(ID1,ID2));
            tempatHasil = kali(ID1,ID2);
        }
        else if (OP == '/'){
            printf("Hasil: %.2f\n\n",bagi(ID1,ID2));
            tempatHasil = bagi(ID1,ID2);
        }
        else{
            printf("ERROR!");
            break;
        }
    }

}