#include<stdio.h>
int main()
{
	int a,n,i,sum=0;
	float avg;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("\n%d",&a);
		sum=sum+a;
	}
	avg=(float)sum/n;
	printf("\nSum: %d\nAvg: %.2f",sum,avg);
	return 0;
}
