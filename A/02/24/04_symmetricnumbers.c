#include<stdio.h>
int main()
{
	char c;
	printf("Enter a letter:");
	scanf("%c",&c);
	c='z'-(c-'a');
	printf("Symmetric letter - %c\n",c);
	return 0;
}
