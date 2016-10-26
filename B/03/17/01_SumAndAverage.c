#include <stdio.h>

int main()
{	
	int n;
	scanf("%d", &n);
	int a;
	int sum = 0;
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a);
		sum += a;
	}
	printf("Sum: %d\nAvg: %.2f", sum, (float)sum / n);
	return 0;
}
