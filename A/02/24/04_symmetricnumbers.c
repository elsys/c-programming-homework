#include<stdio.h>
int main()
{
	char c;
	scanf("%c",&c);
	c='z'-(c-'a');
	printf("%c\n",c);
	return 0;
}
