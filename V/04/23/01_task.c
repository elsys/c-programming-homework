#include <stdio.h>

int main()
{
	int numCount = 0;
    	int i=0;
	int arr[1024];

	while ((numCount <= 0) || (numCount > 1024))
	{
		scanf("%d", &numCount);
	}

	for (i = 0; i < numCount; i++)
	{
		scanf("%d", &(arr[i]));
	}


	for (i = numCount - 1; i >= 0; i--)
	{
		printf("%d\n", arr[i]);
	}

	return 0;
}
