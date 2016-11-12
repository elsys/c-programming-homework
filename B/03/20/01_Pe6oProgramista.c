#include<stdio.h>
int main()
{
	int n,i,num;
	float avg=0,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&num);
		sum+=num;
	}
	avg=sum/n;
	printf("Sum: %.f \n",sum);
	printf("Avg: %.2f \n",avg);
}
