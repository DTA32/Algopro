#include<stdio.h>
#include<string.h>

struct problemA{
    char name[40];
    char plant[40];
};
struct problemA problem[100];

struct test{
    char name[40];
};
struct test testcase[100];

int main(){
    int rec,i,tc,j;
    char name[40];
    char plant[40];
    FILE *fp;
    fp = fopen("testdata.in","r");
    fscanf(fp,"%d",&rec);
    for(i = 0;i<rec;i++){
        fscanf(fp,"%s",&name);
        fscanf(fp,"#%[^\n]",&plant);
        strcpy(problem[i].name,name);
        strcpy(problem[i].plant,plant);
        printf("%s %s\n",problem[i].name,problem[i].plant);
    }
    fscanf(fp,"%d",&tc);
    printf("%d",tc);
    for(i = 0;i<tc;i++){
        fscanf(fp,"%[^\n]",&testcase[i].name);
    }
    fclose(fp);
    for(i = 0;i<tc;i++){
        printf("Case #%d: ",i+1);
        for(j = 0;j<rec;j++){
            if(strcmp(problem[i].name,testcase[i].name)==0){
                printf("%s\n",problem[j].plant);
            }
            else{
                printf("N/A\n");
            }
        }
    }
}