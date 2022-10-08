#include<stdio.h>

int other,jo,li,bi,i,sumjolibi,sumother,participants,sumall;

int main(){
    scanf("%d",&other);
    scanf("%d %d %d",&jo,&li,&bi);
    int os[other];
    for (i = 0;i < other;i++){
        scanf("%d",&os[i]);
    }
    sumjolibi = (jo+li+bi);
    for (i = 0;i < other;i++){
        sumother = sumother + os[i];
    }
    participants = 3 + other;
    sumall = (sumjolibi+sumother)/participants;
    if (jo >= sumall){
        printf("Jojo lolos\n");
    }
    else{
        printf("Jojo tidak lolos\n");
    }
    if (li >= sumall){
        printf("Lili lolos\n");
    }
    else{
        printf("Lili tidak lolos\n");
    }
    if (bi >= sumall){
        printf("Bibi lolos\n");
    }
    else{
        printf("Bibi tidak lolos\n");
    }
    return 0;
}