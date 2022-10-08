#include<stdio.h>
#include<math.h>
// tipe data masih membingungkan
// buat yang rasio mungkin bisa dibalik
int main(){
    int alas,tinggi,luas,rasioLuas;
    float panjangSisi, rasioPanjang;
    printf("Masukkan tinggi segitiga: ");
    scanf("%d",&tinggi);
    printf("Masukkan alas segitiga: ");
    scanf("%d",&alas);
    luas = (alas*tinggi)/2;
    panjangSisi = sqrt((alas*alas)+(tinggi*tinggi));
    rasioLuas = 1;
    rasioPanjang = panjangSisi/luas;
    printf("Luas segitiga adalah: %d\n",luas);
    printf("Panjang sisi segitiga adalah: %.2f\n",panjangSisi);
    printf("Rasio antara luas dan panjang segitiga adalah %d:%.2f\n",rasioLuas,rasioPanjang);
    return 0;
}