#include<stdio.h>
int main()
{
	char c;
	c=getchar();

	if(c>='a' && c<='z')
		{
		c=((122-c)+97);
		printf("%c\n",c);
		}

return 0;

}
