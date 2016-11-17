#include <stdio.h>

int main ()
{
	int n, a, count, i, n2;
	scanf("%d", &n);
	int arr[n];
	count = 0;
	while(count != n)
	{
		scanf("%d", &a);
		if (a % 2 != 0)
		{
			arr[count] = a;
			count ++;
		}
	}
	n2 = n / 2;
	for (i = 0;i < n2; i++)
	{
		printf("%d\n", arr[i] - arr[n - (i + 1)]);
	}
	if (n % 2 != 0)
	{
		printf("%d", arr[n / 2]);
	}
}
