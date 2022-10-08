#include<stdio.h>
#include<stdlib.h>

// Nama: Muhammad Raditya
// NIM : 2502032144

void main(){
    int OP,ID2,tempatHasil,ID1int;
    char ID1[10];
    system("cls"); 
    printf("Muhammad Raditya\n2502032144\n\n");
    printf("Kalkulator Sederhana\n\n");
    for(;;){ 
        printf("Masukkan operasi: ");
        scanf("%s",ID1);
        if (ID1[0] == 'x'){ 
            printf("\nTerimakasih telah menggunakan kalkulator ini\n");
            printf("Press ENTER to continue");
            getchar();
            getchar();
            exit(0);
        }
        else if (ID1[0] == 'n'){
            ID1int = tempatHasil;
        }
        else{
            ID1int = atoi(ID1);
        }
        scanf(" %c %d",&OP,&ID2);
        getchar();
        if(OP == '+'){
            printf("Hasil: %d\n\n",(ID1int + ID2));
            tempatHasil = (ID1int + ID2);
        }
        else if (OP == '-'){
            printf("Hasil: %d\n\n",(ID1int - ID2));
            tempatHasil = (ID1int - ID2);
        }
        else if (OP == '*'){
            printf("Hasil: %d\n\n",(ID1int * ID2));
            tempatHasil = (ID1int * ID2);
        }
        else if (OP == '/'){
            printf("Hasil: %.3g\n\n",((float)ID1int / (float)ID2));
            tempatHasil = ((float)ID1int / (float)ID2);
        }
    }
}
    

