#include<stdio.h>
#include<stdlib.h>

int main(){
    int count = 0,input[10001],i,sum;
	float mean;
	for(;;){ // merupakan alternatif dari dowhile
		scanf("%d",&input[count]);
		if (input[0] == 0){
			printf("Error\n");
			exit(0);
		}
		else if (input[count]==0){
			break;
		}
		count++;
	}
	// do{
	// 	scanf("%d",&input[count]);
	// 	if (input[0] == 0){
	// 		printf("Error\n");
	// 		exit(0);
	// 	}
	// 	count++;
	// }
	// while(input[count-1]!=0);
	for (i = 0;i<count;i++){
		sum = sum + input[i];
	}
	mean = ((float)sum) / ((float) count);
	printf("%.1f\n",mean); // atau .10g
    return 0;
}