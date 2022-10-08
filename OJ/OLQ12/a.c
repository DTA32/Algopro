#include<stdio.h>
#include<stdlib.h>

struct stud
{
    unsigned long long idnum;
    char name[21];
};
struct stud studrec[101];

long int binarySearch(struct stud std[], unsigned long long key, long int high){
    long int mid = 0;
    long int left = 0;
    long int right = high-1;
    while(left <= right){
        mid = (left + right) / 2;
        if(std[mid].idnum > key){
            right = mid - 1;
        }
        else if(std[mid].idnum < key){
            left = mid + 1;
        }
        else{
            return mid;
        }
    }
    return -1;
}

int main()
{
    long int n,i,t;
    unsigned long long key;
    long int searchresult;
    FILE *fp;
    fp = fopen("testdata.in","r");
    fscanf(fp,"%ld",&n);
    for(i = 0;i < n;i++){
        fscanf(fp,"%llu %s",&studrec[i].idnum,&studrec[i].name);
    }
    fscanf(fp,"%ld",&t);
    for(i = 0;i < t;i++){
        fscanf(fp,"%llu",&key);
        printf("Case #%ld: ",i+1);
        searchresult = binarySearch(studrec, key, n);
        if(searchresult != -1){
            printf("%s\n",studrec[searchresult].name);
        }
        else{
            printf("N/A\n");
        }
    }
}

