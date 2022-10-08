#include<stdio.h>
#include<stdlib.h>
// rev 3: bagi pake .3g, courtesy diganti, exit di x langsung
// minus: x masih belum

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
    char ID1[10];
    system("cls");
    printf("Muhammad Raditya\n2502032144\n\n");
    printf("Kalkulator Sederhana\n\n");
    for(;;){
        printf("Masukkan operasi: ");
        scanf("%s %c %d",&ID1,&OP,&ID2);
        getchar();
        if (ID1[0] == 'n'){
            ID1int = tempatHasil;
        }
        else if (ID1[0] == 'x'){
            printf("Terimakasih telah menggunakan kalkulator ini\n");
            printf("Press ENTER to continue");
            getchar();
            getchar();
            exit(0);
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
            printf("Hasil: %.3g\n\n",bagi(ID1int,ID2));
            tempatHasil = bagi(ID1int,ID2);
        }
    }
}
    

