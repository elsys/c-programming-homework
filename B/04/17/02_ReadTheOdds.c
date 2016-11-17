#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int numbers[n];
	for(int i = 0; i < n;)
	{
		scanf("%d", &numbers[i]);
		if(numbers[i] % 2 == 1)
		{
			i++;
		}
	}
	for(int i = 0; i < n / 2; i++)
	{
		printf("%d\n", numbers[i] - numbers[n - 1 - i]);
	}
	if(n % 2 == 1)
	{
		printf("%d", numbers[n / 2]);
	}
	return 0;
}
