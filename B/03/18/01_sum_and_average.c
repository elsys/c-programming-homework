#include <stdio.h>
int main ()
{
	int n,a,i;
	float sum,avg;
	sum=0;
	avg=0;
	i=0;
	scanf("%d",&n);
	while(i<n)
	{
		scanf("%d",&a);
		sum=sum+a;
		i++;
	}
	printf ("Sum: %.f\n",sum);
	avg=sum/n;
	printf ("Avg: %.2f\n",avg);
	return 0;
}
