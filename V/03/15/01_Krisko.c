#include<stdio.h>
int main()
{
	int i=1,n,num;
	float avg=0,sum=0;
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%d" , &num);
		sum = sum + num;
	}
	avg = sum / n;
	printf("Sum: %.f\nAvg: %.2f", sum , avg);
	return 0;
}
