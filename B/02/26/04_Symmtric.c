#include<stdio.h>

int main()
{
	char lowerCaseLetter, oppositeLetter;
	scanf("%c",&lowerCaseLetter);
	oppositeLetter = 'z' - (lowerCaseLetter - 'a');
	printf("%c",oppositeLetter);
	return 0;
}
