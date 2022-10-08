#include<stdio.h>

unsigned int binarySearch(int std[], unsigned key, unsigned high){
    unsigned int mid = 0;
    unsigned int left = 0;
    unsigned int right = high-1;
    while(left <= right){
        mid = (left + right) / 2;
        if(std[mid] > key){
            right = mid - 1;
        }
        else if(std[mid] < key){
            left = mid + 1;
        }
        else{
            return mid;
        }
    }
    return -1;
}

int main(){
    unsigned n,m,i,searchresult;
    scanf("%u %u",&n,&m);
    unsigned nlist[n],mlist[m];
    for(i = 0;i<n;i++){
        scanf("%u",&nlist[i]);
    }
    for(i = 0;i<m;i++){
        scanf("%u",&mlist[i]);
        searchresult = binarySearch(nlist,mlist[i],n);
        if(searchresult != -1){
            printf("%u",searchresult+1);
        }
        else{
            printf("-1");
        }
        if(i < m-1){
            printf("\n");
        }
    }
    // for(i = 0;i<m;i++){
    //     searchresult = binarySearch(nlist,mlist[i],n);
    //     if(searchresult != -1){
    //         printf("%u",searchresult+1);
    //     }
    //     else{
    //         printf("-1");
    //     }
    //     if(i < m-1){
    //         printf("\n");
    //     }
    // }
    
}