/*
 * C progarm to find mode in an array
 */
#include <stdio.h>
 
int main(){
    long long int i, j, sum = 0, n, t, k = 0, c = 1, max = 0, mode, rept;
    scanf("%lld",&t);
    for (rept = 0;rept<t;rept++){
        scanf("%lld", &n);
        long long int a[n],b[n];
        for (i = 0; i < n; i++){
            scanf("%lld", &a[i]);
        }
        for (i = 0; i < n - 1; i++){
            mode = 0;
            for (j = i + 1; j < n; j++){
                if (a[i] == a[j]) {
                    mode++;
                }
            }
            if ((mode > max) && (mode != 0)) {
                k = 0;
                max = mode;
                b[k] = a[i];
                k++;
            }
            else if (mode == max) {
                b[k] = a[i];
                k++;
            }
        }
        printf("Case #%lld: %lld\n",rept+1,max);
        for (i = 0; i < n; i++){
            if (a[i] == b[i]) 
                c++;
            }
            if (c == n)
                break;
            else
            {
                for (i = 0; i < k; i++)
                    printf("%lld ",b[i]);
            }
        printf("\n");
        }
    
    return 0;
    }