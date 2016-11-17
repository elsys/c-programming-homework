#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int numbers[n];
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &numbers[i]);
	}

	for(int i = n - 1; i >= 0; i--)
	{
		printf("%d\n", numbers[i]);
	}

	return 0;
}
