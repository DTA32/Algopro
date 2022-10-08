#include<stdio.h>
#include<stdlib.h>
#include<time.h>

// function declaration
void menu();
void tambahlog();
void displaylog();

// main program
int main(){
    int menu_input = 0;
    while(menu_input != 3){
        menu();
        printf(">> ");
        scanf("%d",&menu_input);
        getchar();
        if (menu_input == 1){
            tambahlog();
        }
        else if (menu_input == 2){
            displaylog();
        }
        else if (menu_input == 3){
            printf("Goodbye!\n");
            exit(0);
        }
        else{
            printf("Wrong input!\n");
        }
    }
}


void tambahlog(){
    time_t raw;
	struct tm * info;
	char datenow[80];
    char log[301];
    printf("Masukkan log anda dibawah ini (maks 300 karakter):\n");
    scanf("%[^\n]",&log);
    time(&raw);
	info = localtime(&raw);
	strftime(datenow,80,"%a, %d-%b-%Y %H:%M",info);
    FILE *logfp = fopen("LogHarian.txt","a");
    fprintf(logfp, "%s\n",datenow);
    fprintf(logfp, "%s\n",log);
    fclose(logfp);
    printf("Log berhasil ditambahkan\n");
}

void displaylog(){
    char datenow[80];
    char log[301];
    FILE *readlog = fopen("LogHarian.txt","r");
    if(readlog == NULL){
        printf("Anda belum membuat log, silahkan buat terlebih dahulu\n");
    }
    else{
        while(!feof(readlog)){
            fscanf(readlog,"%[^\n]\n",&datenow);
            fscanf(readlog,"%[^\n]\n",&log);
            printf("%s\n",datenow);
            printf("%s\n\n",log);
        }
    }
}

void menu(){
    printf("\nLog Harian\n\n");
    printf("1. Tambah Log Baru\n");
    printf("2. Display Log\n");
    printf("3. Exit Program\n");
}