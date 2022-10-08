#include<stdio.h>

long int pa,pb,pc,pd,pe,pf,ra,rb,rc;

int main(){
    scanf("%ld + %ld =\n",&pa,&pb);
    scanf("%ld + %ld =\n",&pc,&pd);
    scanf("%ld + %ld =",&pe,&pf);
    ra = pa + pb;
    rb = pc + pd;
    rc = pe + pf;
    printf("%ld\n",ra);
    printf("%ld\n",rb);
    printf("%ld\n",rc);
    return 0;
}