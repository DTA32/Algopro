#include<stdio.h>
#include<stdlib.h>

int main(){
    long long int count;
	long long int input[100000];
	long long int i;
	long long int sum;
	double mean;
	count = 0;
	sum = 0;
	do{
		scanf("%lld",&input[count]);
		if (input[0] == 0){
			printf("Error\n");
			exit(0);
		}
		count++;
	}
	while(input[count-1]!=0);
	for (i = 0;i<count;i++){
		sum = sum + input[i];
	}
	mean = ((double)sum) / ((double) count - 1);
	printf("%.1lf\n",mean);
    return 0;
}