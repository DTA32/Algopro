#include<stdio.h>
#include<stdlib.h>

void tambah_nilai();
void rekap_nilai();

void invalid_input(){
    printf("\nInput yang anda masukkan salah\n");
    printf("Anda akan dikembalikan ke menu\n");
}

void exitprog(){
    printf("Goodbye!");
    exit(0);
}

void menu(){
    char menuinput;
    printf("\nMenu:\n");
    printf("1. Tambah nilai\n");
    printf("2. Lihat rekap nilai\n");
    printf("3. Exit program\n");
    printf("Masukkan pilihan: ");
    scanf("%c",&menuinput);
    fflush(stdin);
    switch(menuinput){
        case '1':
            tambah_nilai();
            break;
        case '2':
            rekap_nilai();
            break;
        case '3':
            exitprog();
        default:
            invalid_input();
            menu();
            break;
    }
}

void tambah_nilai(){
    // system("cls");
    printf("Tambah nilai\n");
    unsigned long long int nim;
    int asg, mid, fin;
    char nama[20];
    printf("NIM\t: ");
    scanf("%llu",&nim);
    printf("Nama\t: ");
    scanf("%s",&nama);
    getchar();
    fflush(stdin);
    printf("ASG\t: ");
    scanf("%d",&asg);
    printf("MID\t: ");
    scanf("%d",&mid);
    printf("FIN\t: ");
    scanf("%d",&fin);
    FILE *fp;
    fp = fopen("db.ini","a");
    if (fp == NULL){
        printf("Error\n");
        exitprog();
    }
    fprintf(fp,"%llu,%s,%d,%d,%d\n",nim,nama,asg,mid,fin);
    fclose(fp);
    menu();
}

void rekap_nilai(){
    printf("\tRekap nilai\n");
    printf("===================================================\n");
    printf("|   NIM    |        Nama        | ASG | MID | FIN |\n");
    printf("===================================================\n");
    FILE *fp; unsigned long long int nim ; int asg, mid, fin; char nama[20];
    fp = fopen("db.ini","r");
    if (fp == NULL){
        printf("Error\n");
        exitprog();
    }
    while(!feof(fp)){
        fscanf(fp,"%llu,%[^,],%d,%d,%d",&nim,&nama,&asg,&mid,&fin);
        printf("|%llu|%s\t| %d  | %d  | %d  |\n",nim,nama,asg,mid,fin);
    }
    fclose(fp);
    menu();
}

int main(){
    // system("cls");
    printf("Program Database Mahasiswa\n");
    menu();
}