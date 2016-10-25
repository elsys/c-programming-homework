#include<stdio.h>
int main()
{
	int n,i,m;
	int sum=0;
	float avg=0.00;
	scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&m);
			sum=sum+m;
		}
	avg=sum/n;
	printf("Sum=%d\n",sum);
	printf("Avg=%.2f\n",avg);
}
