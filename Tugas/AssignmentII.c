#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// struct info pelanggan
struct pel
{
    int noPel;
    char nama[26];
    char nohp[14];
    char alamat[51];
} member[50];

// fitur utama
void tambahAlamat();
void hapusAlamat();
void cetakPenerima();
void editPelanggan();

// fitur tambahan
void mainMenu();
void tambahPelanggan();
void invalidInput()
{
    printf("Input yang anda masukkan salah!\n");
}
int confirm()
{
    char conf;
    scanf("%c",&conf);
    getchar();
    if(conf == 'Y' || conf == 'y'){
        return 1;
    }
    else if(conf == 'N' || conf == 'n'){
        return 0;
    }
    else{
        invalidInput();
        confirm();
    }
}

// main function
int main()
{
    system("cls");
    printf("Aplikasi Pengiriman SasukeEkspress\n");
    mainMenu();
}

void mainMenu()
{
    int choice;
    printf("\nMain Menu\n");
    printf("1. Tambah pengiriman baru\n");
    printf("2. Tandai selesai pengiriman\n");
    printf("3. Cetak info pengiriman\n");
    printf("4. Tambah informasi pelanggan\n");
    printf("5. Edit informasi pelanggan\n");
    printf("6. Exit program\n");
    printf("Masukkan menu yang diinginkan\n");
    printf(">> ");
    scanf("%d",&choice);
    fflush(stdin);
    switch (choice)
    {
    case 1:
        tambahAlamat();
        break;
    case 2:
        hapusAlamat();
        break;
    case 3:
        cetakPenerima();
        break;
    case 4:
        tambahPelanggan();
        break;
    case 5:
        editPelanggan();
        break;
    case 6:
        printf("Terimakasih sudah menggunakan program ini!\n");
        exit(0);
    default:
        invalidInput();
        mainMenu();
        break;
    }
}

void tambahAlamat(){
    printf("TAMBAH PENGIRIMAN BARU\n");
    printf("Info Pengirim\n");
    printf("Apakah merupakan pelanggan? (Y/N)\n>> ");
    if(confirm() == 1){
        int nopel;
        printf("Masukkan no pelanggan: ");
        scanf("%d",&nopel);
    }
    else if(confirm() == 0){
        tambahPelanggan();
    }
    mainMenu();
}

void hapusAlamat(){
    char confirm;
    printf("TANDAI SELESAI PENGIRIMAN\n");
    printf("Apakah anda yakin? (Y/N)");
    printf(">> ");
    scanf("%c",&confirm);
    if(confirm == 'Y' || confirm == 'y'){

        mainMenu();
    }
    else{
        mainMenu();
    }
    mainMenu();
}

void cetakPenerima(){
    printf("CETAK INFO PENGIRIMAN\n");

    mainMenu();
}

void editPelanggan(){
    printf("EDIT INFO PELANGGAN");
    FILE *fp;
    fp = fopen("infopelanggan.txt","a+");

    mainMenu();
}