#include <stdio.h>
int main()
{
	char c,r;
	c=getchar();
	r='z'-(c-'a');
	printf("%c\n",r);

	return 0;	
}
