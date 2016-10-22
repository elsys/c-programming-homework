#include<stdio.h>

int main()
{
	int num, i;
	float n, avg, sum;
	sum = 0;
	i = 1;
	scanf("%d", &num);
	do{
		scanf("%f", &n);
		sum = sum +n;
		i++;
	} while (i <= num);
	
	avg = sum/num;
	
	printf("Sum:%.0f\nAvg: %.2f",sum , avg);
	return 0;
}
