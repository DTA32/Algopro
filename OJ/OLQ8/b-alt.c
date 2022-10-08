// #include<stdio.h>
// #include<string.h>
// #include<stdbool.h>

// int main(){
//     int t,i;
//     long long int n,m,j,diff,k;
//     scanf("%d",&t);
//     for(i = 0;i < t;i++){
//         diff = 0;
//         scanf("%lld",&n);
//         long long int arr[n];
//         long long int test[n];
//         bool check[100000];
//         j = 0;
//         // memset(test, 0, sizeof(test));
//         for (m = 0;m < n;m++){
//             scanf("%lld",&arr[m]);
//             // test[arr[m]]++;
//             if(!check[arr[m]]){
//                 check[arr[m]] = true;
//                 test[j] = arr[m];
//                 j++;
//             }
//         }
        
//         // for (j = 0; j < n;j++){
//         //     if (test[j] > 0){
//         //         diff++;
//         //     }
//         // }
//         // for (j = 0;j<n;j++){
//         //     for (k = 0;k < j;k++){
//         //         if (arr[j] == arr[k]){
//         //             break;
//         //         }
//         //     }
//         //     if (j == k){
//         //         diff++;
//         //     }
//         // }
//         printf("Case #%d: %lld\n",i+1,j);
//     }
// }

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    int v[100], w[100],n,i;
    bool check[1000001];// set the size to maximum integer you can take as input
    printf("n= ");
    scanf("%d", &n);
    int j=0;    
    for(i=0; i<n; i++)
    {
        printf("v[%d]= ", i);
        scanf("%d", &v[i]);
    if(!check[v[i]])
    {
        check[v[i]]=true;
        w[j]=v[i];
        j++;
    }
    }
    printf("%d",j);          
    printf("the distinct elements are: \n");
    for(i=0; i<j; i++)
        printf("%d\n", w[i]);

    return 0;
}