#include <stdio.h>

void menu(){
    printf("1. Add Student\n");
    printf("2. Add Score\n");
    printf("3. Show Data\n");
    printf("4. Exit\n");
}

struct student{
    char nama[50];
    long int nim;
    struct score{
        int ASG;
        int MID;
        int FIN;
    }score;
}student;

int main(){
    int ch; 
    while(ch != 4){
        menu();
        scanf("%d", &ch);
        if(ch == 1){
            struct student student;
            printf("Nim : ");
            scanf("%ld", &student.nim);
            printf("Nama : ");
            scanf("%s", student.nama);
            FILE *fp = fopen("datamahasiswa.txt", "a");
            fprintf(fp, "%ld\n", student.nim);
            fprintf(fp, "%s\n", student.nama);
            fclose(fp);
        }
        else if(ch == 2){

        }
        else if(ch == 3){
            
            FILE *fp = fopen("datamahasiswa.txt", "r");

        }
        else if(ch == 4){    
            break;
        }
        else{
            printf("Error!\n");
        }
    }
    return 0;
}
