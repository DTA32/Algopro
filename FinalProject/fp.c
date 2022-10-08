#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//variabel declaration
long int ch, nomor = 1;
char uname[100], diary[1000], print, npw[100], cnpw[100], pw[100];

void bikin_akun(){
    int ulang = 0, percobaan = 3;
    printf("Masukkan nama anda: ");
    scanf("%[^\n]", uname);
    FILE *hah = fopen("Diaryku.txt", "w");
    fprintf(hah, "%s\n", uname);
    printf("Masukkan password baru: ");
    scanf("%[^\n]", &npw);
    while(ulang != 1){
        printf("Konfirmasi password : ");
        scanf("%[^\n]", &cnpw);
        if(strcmp(npw,cnpw) == 0){
            strcpy(pw,npw);
            break;
        }
        printf("Password salah, %dx percobaan lagi!\n", percobaan);
        percobaan--;
        if(percobaan == -1){
            printf("Jalankan program kembali!\n");
            return 0;
        }
    }
    fprintf(hah, "%s\n", pw);
    fclose(hah);
    printf("Akun berhasil dibuat!\n");
}
void cocokin_password(){
    int percobaan = 3, ulang = 0;
     while(ulang != 1){
        printf("Masukkan password : ");
        scanf("%ld", &pw);
        if(cpw == pw){
            FILE *hah = fopen("Diaryku.txt", "a");
            fprintf(hah, "Password\t: %ld\n", pw);
            fclose(hah);
            break;
        }
        printf("Password salah, %dx percobaan lagi!\n", percobaan);
        percobaan--;
        if(percobaan == -1){
            printf("Jalankan program kembali!\n");
            exit(0);
        }
    }
    printf("Anda berhasil Login!\n");
   
    return 0;
}
void display_menu(){
    printf("1. Add diary\n");
    printf("2. Show diary\n");
    printf("3. Delete diary\n");
    printf("4. Exit\n");
    printf("Menu yang ingin dipilih : ");
}
void bikin_diary(int no){
    printf("Diary %d\t\t: ", no);
    scanf(" %[^\n]", diary);
    FILE *hah = fopen("Diaryku.txt", "a");
    fprintf(hah, "Diary %d\t\t: ", no);
    fprintf(hah, "%s\n", diary);
    fclose(hah);
}
void show_diary(){
    printf("\n");
    FILE *hah; 
    hah = fopen("Diaryku.txt", "r");
    print = getc(hah);
    while(print != EOF){
        printf("%c", print);
        print = getc(hah);
    }
    fclose(hah);
    printf("\n");
}
void delete_diary(){
    FILE *hah1, *hahdelete;
    char c;
    int delete, t = 1;
    hah1 = fopen("Diaryku.txt", "r");
    c = getc(hah1);
    printf("\n");
    while(c != EOF){
        printf("%c", c);
        c = getc(hah1);
    }
    rewind(hah1);
    printf("\nData yang ingin dihapus: \nDiary ke-");
    scanf("%d", &delete);
    hahdelete = fopen("deletedfile.c", "w");
    c = 'A';
    while(c != EOF){
        c = getc(hah1);
        if(t != delete + 2){
            putc(c, hahdelete);
        }
        if(c == '\n'){
            t++;
        }
    }
    fclose(hah1);
    fclose(hahdelete);
    remove("Diaryku.txt");
    rename("deletedfile.c", "Diaryku.txt");
    printf("Data berasil dihapus!\n");
    printf("\n");
    hah1 = fopen("Diaryku.txt", "r");
    c = getc(hah1);
    while(c != EOF){
        printf("%c", c);
        c = getc(hah1);
    }
    fclose(hah1);
    printf("\n");   
}

// buatan radit
int validasiFile(){
    FILE *cek = fopen("Diaryku.txt", "r");
    if(cek == NULL){
        printf("Nampaknya anda belum mempunyai akun atau data error\n");
        printf("Silahkan buat akun baru\n");
        return 0;
    }
    return 1;
}
// main program
int main(){
    int val = validasiFile();
    if(!val){
        bikin_akun();
    }
    else{
        FILE *hah = fopen("Diaryku.txt", "r");
        fscanf(hah, "%[^\n]", uname);
        fscanf(hah, "%[^\n]", pw);
        printf("Selamat datang kembali %s!\n",uname);
        cocokin_password();
        fclose(hah);
    }
    while(ch != 4){
        display_menu();
        scanf("%ld", &ch);
        if(ch == 1){
            bikin_diary(nomor);
            nomor++;    
        }
        else if(ch == 2){
            show_diary();
        }
        else if(ch == 3){
            delete_diary();
        }
    }
}