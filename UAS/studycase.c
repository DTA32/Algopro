#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//variable declaration
int filenotfound = 0;
unsigned long totalkredit = 0, totaldebit = 0;
long long int selisih = 0;

//function declaration
void menu();
void tambah();
void lihat();
void cari();
void readfile();

// struct declaration
struct trx{
    int banyak_trx;
    struct tr{
        int jenis_trx;
        unsigned nilai_trx;
        char ket_trx[50];
    }detail[50];
}transaksi[32];

//main program
int main(){
    readfile();
    int menu_input = 0;
    while(menu_input != 4){
        system("cls");
        menu();
        printf(">> ");
        scanf("%d",&menu_input);
        getchar();
        if(menu_input == 1){
            tambah();
        }
        else if(menu_input == 2){
            lihat();
        }
        else if(menu_input == 3){
            cari();
        }
        else if(menu_input == 4){
            printf("Goodbye!\n");
            exit(0);
        }
        else{
            printf("Wrong Input!\n");
        }
    }
}

// functions
void menu(){
    printf("Catatan Transaksi Pribadi\n\n");
    printf("Menu\n");
    printf("1. Tambah Transaksi Baru\n");
    printf("2. Lihat Semua Transaksi\n");
    printf("3. Cari Transaksi\n");
    printf("4. Exit program\n");
}

void readfile(){
    int cek = 0;
    int tgl;
    FILE *readff = fopen("CatTrxPri.txt","r");
    while(cek < 32){
        transaksi[cek].banyak_trx = 0;
        cek++;
    }
    if(readff == NULL){
        filenotfound = 1;
    }
    else{
        while(!feof(readff)){
            fscanf(readff,"%d ",&tgl);
            if(tgl == 0){
                break;
            }
            fscanf(readff,"%d ",&transaksi[tgl].detail[transaksi[tgl].banyak_trx].jenis_trx);
            fscanf(readff,"%u ",&transaksi[tgl].detail[transaksi[tgl].banyak_trx].nilai_trx);
            fscanf(readff,"%[^\n]\n",&transaksi[tgl].detail[transaksi[tgl].banyak_trx].ket_trx);
            transaksi[tgl].banyak_trx++;
        }
    }
    fclose(readff);
}

void tambah(){
    int tgl;
    unsigned nilai;
    char jenis, kettrx[50];
    FILE *writetr = fopen("CatTrxPri.txt","a");
    
    printf("\nTambah transaksi baru\n");
    printf("Masukkan tanggal transaksi: ");
    scanf("%d",&tgl);
    getchar();
    fprintf(writetr,"%d ",tgl);

    for(;;){
        printf("Masukkan jenis transaksi (D/K) : ");
        scanf("%c",&jenis);
        getchar();
        if(jenis == 'D' || jenis == 'd'){
            transaksi[tgl].detail[transaksi[tgl].banyak_trx].jenis_trx = 1;
            fprintf(writetr,"1 ");
            break;
        }
        else if(jenis == 'K' || jenis == 'k'){
            transaksi[tgl].detail[transaksi[tgl].banyak_trx].jenis_trx = 2;
            fprintf(writetr,"2 ");
            break;
        }
        else{
            printf("Input yang anda masukkan salah, silahkan ulangi\n");
        }
    }

    printf("Masukkan nilai transaksi: ");
    scanf("%u",&nilai);
    getchar();
    transaksi[tgl].detail[transaksi[tgl].banyak_trx].nilai_trx = nilai;
    fprintf(writetr,"%u ",nilai);

    printf("Masukkan keterangan transaksi(maks 50 karakter): ");
    scanf("%[^\n]",&kettrx);
    strcpy(transaksi[tgl].detail[transaksi[tgl].banyak_trx].ket_trx, kettrx);
    fprintf(writetr,"%s\n",kettrx);

    transaksi[tgl].banyak_trx++;
    printf("Berhasil ditambahkan!\n");
    fclose(writetr);
    printf("\nPress ENTER to Continue"); getchar(); getchar();
}

void lihat(){
    int cek;
    char urut;
    int urutcek;
    totaldebit = 0; totalkredit = 0;
    printf("\nLihat Semua Transaksi\n");
    for(;;){
        printf("Urutkan secara ascending/descending? (A/D): ");
        scanf("%c",&urut);
        if(urut == 'A' || urut == 'a'){
            urutcek = 1;
            break;
        }
        else if(urut == 'D' || urut == 'd'){
            urutcek = 2;
            break;
        }
        else{
            printf("Input yang anda masukkan salah, silahkan ulangi lagi\n");
        }
    }
    printf("\n\t Daftar Transaksi\n");
    printf("Tanggal\t|  Jenis  | Nilai\t| Keterangan\n");
    printf("---------------------------------------------\n");
    if(urutcek == 1){
        for(cek = 0; cek < 32; cek++){
            if(transaksi[cek].banyak_trx > 0){
                int counter = 0;
                int banyaktgl = transaksi[cek].banyak_trx;
                while(counter < banyaktgl){
                    printf("%d\t|",cek);
                    if(transaksi[cek].detail[counter].jenis_trx == 1){
                        printf("  Debit  |");
                        totaldebit += transaksi[cek].detail[counter].nilai_trx;
                    }
                    else if(transaksi[cek].detail[counter].jenis_trx == 2){
                        printf("  Kredit |");
                        totalkredit += transaksi[cek].detail[counter].nilai_trx;
                    }
                    printf(" %u\t|",transaksi[cek].detail[counter].nilai_trx);
                    printf(" %s\n",transaksi[cek].detail[counter].ket_trx);
                    counter++;
                }
            }
        }
    }
    else if(urutcek == 2){
        for(cek = 31; cek >= 0; cek--){
            if(transaksi[cek].banyak_trx > 0){
                int counter = 0;
                int banyaktgl = transaksi[cek].banyak_trx;
                while(counter < banyaktgl){
                    printf("%d\t|",cek);
                    if(transaksi[cek].detail[counter].jenis_trx == 1){
                        printf("  Debit  |");
                        totaldebit += transaksi[cek].detail[counter].nilai_trx;
                    }
                    else if(transaksi[cek].detail[counter].jenis_trx == 2){
                        printf("  Kredit |");
                        totalkredit += transaksi[cek].detail[counter].nilai_trx;
                    }
                    printf(" %u\t|",transaksi[cek].detail[counter].nilai_trx);
                    printf(" %s\n",transaksi[cek].detail[counter].ket_trx);
                    counter++;
                }
            }
        }
    }
    printf("=============================================\n");
    printf("TOTAL = %lld\n",totaldebit+totalkredit);
    printf("\nTOTAL KREDIT = %lu\n",totalkredit);
    printf("TOTAL DEBIT = %lu\n",totaldebit);
    selisih = totalkredit-totaldebit;
    printf("SELISIH = %lld\n",selisih);
    printf("\nPress ENTER to Continue"); getchar(); getchar();
}

void cari(){
    int tgl, banyaktgl, counter = 0;
    totaldebit = 0; totalkredit = 0;
    printf("\nCari Transaksi\n");
    printf("Masukkan tanggal yang ingin dicari: ");
    scanf("%d",&tgl);
    banyaktgl = transaksi[tgl].banyak_trx;
    if(banyaktgl == 0){
        printf("Transaksi tidak ditemukan\n");
        printf("\nPress ENTER to Continue"); getchar(); getchar();
    }
    else{
        printf("Transaksi pada tanggal %d\n",tgl);
        printf(" Jenis  | Nilai\t| Keterangan\n");
        printf("-------------------------------\n");
        while(counter < banyaktgl){
            if(transaksi[tgl].detail[counter].jenis_trx == 1){
                printf(" Debit  |");
                totaldebit += transaksi[tgl].detail[counter].nilai_trx;
            }
            else if(transaksi[tgl].detail[counter].jenis_trx == 2){
                printf(" Kredit |");
                totalkredit += transaksi[tgl].detail[counter].nilai_trx;
            }
            printf(" %u\t|",transaksi[tgl].detail[counter].nilai_trx);
            printf(" %s\n",transaksi[tgl].detail[counter].ket_trx);
            counter++;
        }
        printf("==============================\n");
        printf("TOTAL = %lld\n",totaldebit+totalkredit);
        printf("\nTOTAL KREDIT = %lu\n",totalkredit);
        printf("TOTAL DEBIT = %lu\n",totaldebit);
        selisih = totalkredit-totaldebit;
        printf("SELISIH = %lld\n",selisih);
        printf("\nPress ENTER to Continue"); getchar(); getchar();
    }
}