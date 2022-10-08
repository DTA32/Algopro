#include<stdio.h>
#include<string.h>

int main(){
    int t,i;
    int list[101];
    scanf("%d",&t);
    for(i = 0;i<t;i++){
        long long int n,j,mode;
        scanf("%lld",&n);
        long long int arr[n];
        mode = 0;
        memset(list,0,sizeof(list));
        for(j = 0;j<n;j++){
            scanf("%lld",&arr[j]);
            list[arr[j]]++;
            if(arr[j] > mode){
                mode = arr[j];
            }
        }
        printf("Case #%d: %lld\n",i+1,list[mode]);
    }
}