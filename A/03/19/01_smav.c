#include <stdio.h>

int main()
{
	int n, a, i, sm=0;
	float av;
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		scanf("%d", &a);
		sm=sm+a;
	}
	av=(float)sm/n;
	printf("Sum: %d\n", sm);
	printf("Avg: %.2f\n", av);
	return 0;
}

