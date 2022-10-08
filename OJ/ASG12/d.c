#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct stuc{
    char shortt[51];
    char longg[51];
};
struct stuc dictionary[101];


unsigned int binary_search(struct stuc dict[], unsigned size, char *target){
    int bottom = 0;
    int mid;
    int top = size - 1;

    while(bottom <= top){
        mid = (bottom + top)/2;
        if (strcmp(dict[mid].shortt, target) == 0){
            printf("%s", dict[mid+1].longg);
            return mid+1;
        } else if (strcmp(dict[mid].shortt, target) > 0){
            top    = mid - 1;
        } else if (strcmp(dict[mid].shortt, target) < 0){
            bottom = mid + 1;
        }
    }
    return -1;
}

int main(){
    unsigned t,tc,i,indexresult;
    char nyimpentag, input[150], *tes;
    FILE *fp;
    fp = fopen("testdata.in","r");
    fscanf(fp,"%u",&t);
    for(i = 0;i < t;i++){
        fscanf(fp,"%s",&input);
        tes = strtok(input,"#");
        strcpy(dictionary[i].shortt,tes);
        tes = strtok(NULL,"\n");
        strcpy(dictionary[i].longg,tes);
    }
    fscanf(fp,"%u",&tc);
    for(i = 0;i < tc;i++){
        fscanf(fp,"%[^\n]",&input);
        printf("Case #%u:\n",i+1);
        tes = strtok(input," ");
        while(tes != NULL){
            indexresult = binary_search(dictionary, t, tes);
            // if(indexresult != -1){
            //     printf("%s",dictionary[indexresult].longg);
            // }
            // else{
            //     printf("%s",tes);
            // }
            tes = strtok(NULL, " ");
        }
    }
}
