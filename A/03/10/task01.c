#include<stdio.h>
int main()
{
	int n,i,m,j=0;
	float sum=0;
	float avg=0.00;
	scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&m);
			sum=sum+m;
j++;
		}
	avg=sum/j;
	printf("Sum: %.f\n",sum);
	printf("Avg: %.2f\n",avg);
}
