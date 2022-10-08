#include<stdio.h>
#include<string.h>

struct course{
    char code[8];
    char day[9];
    int time;
};

int main(){
    long long int n,q,i,t,j;
    scanf("%lld",&n);
    struct course list[n];
    for(i = 0;i < n;i++){
        scanf("%s",&list[i].code);
        // sscanf_s("%s", list[i].code, sizeof(list[i].code));
        getchar();
        // fgets(list[i].code, 8, stdin);
        scanf("%s",&list[i].day);
        // sscanf_s("%s", list[i].day, sizeof(list[i].day));
        getchar();
        // fgets(list[i].day, 9, stdin);
        scanf("%d",&list[i].time);
    }
    scanf("%lld",&t);
    for(i = 0;i < t;i++){
        scanf("%lld",&q);
        printf("Query #%d:\n",i+1);
        printf("Code: %s\n",list[q-1].code);
        printf("Day: %s\n",list[q-1].day);
        printf("Time: %d\n",list[q-1].time);
    }
}
