#include<stdio.h>
int main()
{
	int i=1,n;
	float avg=0,num,sum=0;
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		scanf("%f" , &num);
		sum = sum + num;
	}
	avg = sum / n;
	printf("Sum:%.f\nAvg:%.2f", sum , avg);
	return 0;
}
