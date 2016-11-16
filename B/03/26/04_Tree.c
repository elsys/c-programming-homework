#include<stdio.h>

void printing(char symbol, int howMany)
{
	for(int i = 0; i < howMany; i++)
	{
		printf("%c",symbol);

	}
}

int main()
{
	int height;
	scanf("%d",&height);
	char outline = '*', bg = ' ', filling = '#';
	printf("%d\n", (height - 2)*(height - 2));
	
	printing(bg, height - 1); printf("*"); printing(bg, height - 1);

	printf("\n");
	
	for(int i = 0; i < height - 2; i++)
	{
		printing(bg, height - 2 - i);

		printf("*");
		printing(filling, 2 * i + 1);
		printf("*");

		printing(bg, height - 2 - i);
		printf("\n");
	}
	
	printing(outline, height * 2 - 1);
	return 0;	
}
