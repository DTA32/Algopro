#include<stdio.h>

struct problemF{
    long int number;
    char plant[40];
}stru[1000];

int main(){
    int tc,i;
    scanf("%d",&tc);
    for(i=0;i<tc;i++){
        scanf("%d#%s",&stru[i].number,&stru[i].plant);
    }
    for(i=0;i<tc;i++){
        printf("%d %s\n",stru[i].number,stru[i].plant);
    }
}