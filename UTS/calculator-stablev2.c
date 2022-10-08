#include<stdio.h>
#include<stdlib.h>
// rev 2: n works! x not yet

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
    int OP,ID2,tempatHasil,ID1int;
    char ID1[1000000];
    system("cls");
    printf("Kalkulator Sederhana\n");
    printf("Pencipta: M Raditya\n\n");
    for(;;){
        printf("Masukkan operasi: ");
        scanf("%s %c %d",&ID1,&OP,&ID2);
        getchar();
        if (ID1[0] == 'n'){
            ID1int = tempatHasil;
        }
        else if (ID1[0] == 'x'){
            break;
        }
        else{
            ID1int = atoi(ID1);
        }
        if(OP == '+'){
            printf("Hasil: %d\n\n",tambah(ID1int,ID2));
            tempatHasil = tambah(ID1int,ID2);
        }
        else if (OP == '-'){
            printf("Hasil: %d\n\n",kurang(ID1int,ID2));
            tempatHasil = kurang(ID1int,ID2);
        }
        else if (OP == '*'){
            printf("Hasil: %d\n\n",kali(ID1int,ID2));
            tempatHasil = kali(ID1int,ID2);
        }
        else if (OP == '/'){
            printf("Hasil: %.2f\n\n",bagi(ID1int,ID2));
            tempatHasil = bagi(ID1int,ID2);
        }
    }
    printf("Terimakasih telah menggunakan kalkulator ini\n");
    printf("Press any key to continue");
}
    

