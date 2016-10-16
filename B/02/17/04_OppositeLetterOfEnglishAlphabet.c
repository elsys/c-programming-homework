#include <stdio.h>

int main()
{
	char letter;
	scanf("%c", &letter);
	printf("%c\n", 'a' + ('z' - letter));
} 
