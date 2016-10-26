#include <stdio.h>

int main()
{
	int treeHeight = 0;
	while (treeHeight <= 0)
	{
		scanf("%d", &treeHeight);
	}

	int symbolCount = 0;
	int i;
	for (i = 1; i < treeHeight - 1; i++)
	{
		symbolCount += (i * 2) - 1;
	}

	printf("%d\n", symbolCount);

	int rowMaxSymbols = treeHeight * 2 - 1;
	int currentRowSpaces;
	int currentRowSymbols;
	int j;

	for (i = 0; i < treeHeight; i++)
	{
		currentRowSymbols = i * 2 + 1;
		currentRowSpaces = (rowMaxSymbols - currentRowSymbols) / 2;
		for (j = 0; j < currentRowSpaces; j++)
		{
			printf(" ");
		}
		for (j = 0; j < currentRowSymbols; j++)
		{
			if ((j == 0) || (j == currentRowSymbols - 1) || (i == treeHeight - 1))
			{
				printf("*");
			}
			else
			{
				printf("#");
			}
		}
		currentRowSpaces = (rowMaxSymbols - currentRowSymbols) / 2;
		for (j = 0; j < currentRowSpaces; j++)
		{
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}
