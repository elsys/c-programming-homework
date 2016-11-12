#include <stdio.h>

int main()
{
	int n, k, disc;
	float m, sum;
	scanf("%d",&n);
	scanf("%f",&m);
	scanf("%d",&k);

	sum = 0.0;
	for(int i = 0;i < n;i++)
	{
		disc = i / k;
		sum += m - ((m*(disc*2)) / 100);
	}

	printf("%.f",sum);

	return 0;
}

