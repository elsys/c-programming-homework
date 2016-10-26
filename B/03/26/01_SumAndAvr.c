#include <stdio.h>

int main()
{	
	int n, numbers, sum = 0;
	scanf("%d", &n);

	for(int i = 0; i < n; i++)
	{
		scanf("%d", &numbers);
		sum += numbers;

	}

	printf("Sum: %d\nAvg: %.2f", sum, (float)sum / n);
	return 0;
}
