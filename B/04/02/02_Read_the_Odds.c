#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);

	int arr[n];
	for(int i = 0;i < n;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i] % 2 == 0)i--;
	}

	for(int i = 0;i < n / 2;i++)
	{
		printf("%d\n",arr[i] - arr[(n - 1) - i]);
	}
	if(n % 2 == 1)
	{
		printf("%d",arr[(n / 2) + 1]);
	}	

	return 0;
}
