#include <stdio.h>
#include <stdlib.h>

int main()
{
	int y;
	char bukva;
	do{
	scanf("%c",&bukva);
	}while(bukva<'a' || bukva>'z');
	y='a'+'z'-bukva;
	printf("%c\n",y);
	return 0;
}

