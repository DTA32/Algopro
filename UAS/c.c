#include<stdio.h>
#include<string.h>

void swap(char nama[], int first, int second);

int main(){
    int banyak, i;
    char nama[7][50];
    scanf("%d",&banyak);
    getchar();
    for(i = 0;i < banyak;i++){
        scanf("%s",&nama[i]);
    }
    for(i = 0;i < banyak;i++){
        for(int j = i+1;j < banyak;j++){
            if(strcmp(nama[i], nama[j]) > 0){
                char temp[50];
                strcpy(temp,nama[i]);
                strcpy(nama[i],nama[j]);
                strcpy(nama[j],temp);
            }
        }
    }
    for(i = 0;i < banyak;i++){
        printf("%s\n",nama[i]);
    }
}