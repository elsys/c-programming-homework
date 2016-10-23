#include <stdio.h>

int main()
{
	int n, a, sum;
	float avg;
	scanf("%d",&n);
	sum = 0;
	avg = 0;

	for(int i = 0;i < n;i++)
	{
		scanf("%d",&a);
		sum += a;
		avg += a;
	}
	avg /= n;
	printf("Sum: %d\n",sum);
	printf("Avg: %.2f",avg);
	
	return 0;
}

