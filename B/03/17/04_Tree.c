#include <stdio.h>

void repeat(char symbol, int times)
{
	for(int i = 0; i < times; i++)
	{
		printf("%c", symbol);
	}
}

int main()
{
	char contour = '*';
	char body = '#';
	char background = ' ';

	int height;
	scanf("%d", &height);

	printf("%d\n", (height - 2)*(height - 2));

	//top line
	repeat(background, height - 1);
	repeat(contour, 1);
	repeat(background, height - 1);
	printf("\n");	
	//middle lines
	for(int i = 0; i < height - 2; i++)
	{
		repeat(background, height - 2 - i);
		repeat(contour, 1);
		repeat(body, 2 * i + 1);
		repeat(contour, 1);
		repeat(background, height - 2 - i);
		printf("\n");
	}
	//last line
	repeat(contour, 2 * height - 1);
	

	
	return 0;
}
