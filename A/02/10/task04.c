#include <stdio.h>

int main()
{
	char n, m;
	printf("Enter a letter: \n");
	scanf("%c",&n);
	
	m = 'z' -(n - 'a');

	printf("\n%c \n", m);
}
