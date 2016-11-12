#include <stdio.h>

int main(){

	int a,j,i;
	float avg,sum;
	avg=0.0;
	sum=0;
	j=0;
	scanf("%d", &i);
	do{
	scanf("%d", &a);
	sum +=a;
	j++;
	}while(j<i);
	printf("\nSum:%0.0f",sum);
	avg=sum/i;
	printf("\nAvg:%0.2f",avg);
return 0;
}
