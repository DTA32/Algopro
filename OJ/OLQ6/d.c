#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    long long int t,i,lengths,j;
    char c[1000];
    scanf("%d",&t);
    for (i=0;i<t;i++){
        scanf("%s",&c);
        getchar();
        lengths = strlen(c);
        printf("Case %d: ",i+1);
        for (j=0;j<lengths;j++){
            printf("%d",c[j]);
            if(j<lengths-1){
                printf("-");
            }
        }
        printf("\n");
    }

    return 0;
}

