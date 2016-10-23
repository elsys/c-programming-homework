#include <stdio.h>

int main()
{
	int n, counter = 0;
	scanf("%d",&n);
	
	for(int i = 0;i < n - 2;i++)
	{
		counter += 1 + i * 2;
	}
	printf("%d\n",counter);
	
	for(int i = 0;i < n - 1;i++)
	{
		printf(" ");
	}
	if(n != 1)printf("*\n");
	
	for(int i = 1;i < n;i++)
	{
		for(int j = 0;j < (n - 1) - i;j++)
		{
			printf(" ");
			if(j == (n - 2) - i)
			{
				printf("*");
				for(int k = 0;k < (i * 2) - 1;k++)
				{
					printf("#");
				}
				printf("*\n");
			}
		}
	}
	for(int i = 0;i < (n * 2) - 1;i ++)
	{
		printf("*");
	}	
	return 0;
}

