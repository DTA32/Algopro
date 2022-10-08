#include <stdio.h>

void binary(long i) {
    char out[16];
    if(0 <= i && i <= 255) {
        for(int j = 0; j < 16; j++) {
            if (i % 2 == 0) {
                out[j] = '0';
            } 
            else {
                out[j] = '1';
            }
            i = i / 2;
        }
    }
    for(int x = 15; x >= 0; x--){
       printf("%c", out[x]);
    }
    printf("\n");
}

int main() {
    long input;
    scanf("%ld", &input);
    binary(input);
}