#include <stdio.h>

int main()
{
	int numCount;
	int arr[1024];
	int readNum;
	int i=0;

	while ((numCount <= 0) || (numCount > 1024))
	{

		scanf("%d", &numCount);
	}


	for ( i = 0; i < numCount; i++)
	{
		scanf("%d", &readNum);
		if (readNum % 2 == 0)
		{
			i--;
		}
		else
		{
			arr[i] = readNum;
		}
	}


	for ( i = 0; i < (numCount + 1) / 2; i++)
	{
		if (arr[i] == arr[(numCount - 1) - i])
		{
			printf("%d\n", arr[i]);
		}
		else
		{
			printf("%d\n", arr[i] - arr[(numCount - 1) - i]);
		}
	}

	return 0;
}
