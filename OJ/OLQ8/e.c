#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    long long int t,i;
    long long int j,k,l,m,n;
    scanf("%lld",&t);
    for (i = 0;i<t;i++){
        char arr[1000];
        char arrRev[1000];
        char temp;
        scanf("%s",&arr);
        // strrev(arr);
        l = strlen(arr);
        n = l-1;
        for (m = 0;m<l;m++){
            arrRev[m] = arr[n];
            n--;
        }
        printf("Case #%lld: ",i+1);
        for (j = 0;j<l;j++){
            temp = arrRev[j];
            if (isupper(temp)){
                temp = tolower(temp);
            }
            else if (islower(temp)){
                temp = toupper(temp);
            }
            // arrRev[j] = temp;
            printf("%c",temp);
        }
        // for(k = 0;k<l;k++){
        //     printf("%c",arrRev[k]);
        // }
        printf("\n");
    }
    return 0;
}