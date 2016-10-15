#include<stdio.h>

int main()
{
	char lowerCaseLetter, oppositeLetter;
	scanf("%c",&lowerCaseLetter);
	oppositeLetter = 'z' - ('a' - lowerCaseLetter);
	printf("%c",oppositeLetter);
	return 0;
}
