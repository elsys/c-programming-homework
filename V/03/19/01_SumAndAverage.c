#include<stdio.h>

int main()
{
	int num, i;
	float n, avg, sum;
	scanf("%d", &num);
	avg = 0;
	sum = 0;
	i = 0;
	while(i < num){
		scanf("%f", &n);
		sum = sum + n;
		i++;
	}
	avg = sum / num;
	printf("Sum: %.0f\nAvg: %.2f", sum, avg);
	return 0;
}
