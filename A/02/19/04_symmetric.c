#include <stdio.h>

int main()
{
	char c;
	do{printf("\nInput: "); scanf("%c", &c);}while(c>122||c<97);
	c=c-97;
	printf("\nOutput: %c\n", 122-c);
	return 0;
}

