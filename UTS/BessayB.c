#include<stdio.h>

int main(){
    int jam,menit,awal,durasi,akhirJam,akhirMenit,calc;
    scanf("%d:%d",&jam,&menit);
    scanf("%d",&durasi);
    awal = (jam * 60) + menit; // mengkonversikan input waktu menjadi menit
    calc = awal + durasi; // menambahkan durasi dengan menit input
    akhirJam = calc / 60; // jam akhir dari total menit dibagi 60 menit
    akhirMenit = calc % 60; // menit akhir dari total menit modulus 60 menit
    printf("%d:%d\n",akhirJam,akhirMenit);
    return 0;
}