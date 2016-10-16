#include <stdio.h>
int main()
{
	char c;
	scanf("%c", &c);
	
	printf("%c - %c", c, ((122 - c)) + 97 );
}
