#include<stdio.h>

int i;
double x, z, y;

int main(){
    scanf("%lf %lf",&x,&y);
    for (i = 1; i < 4; ++i){
        x = (x+(x*(y/100)));
    }
    printf("%.2lf\n",x);
    return 0;
}