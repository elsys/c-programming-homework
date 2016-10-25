#include<stdio.h>
int main()
{
	char c;
	do{
		scanf("%c",&c);
	}while(c<'a' || c>'z');
	printf("%c \n",'z'-(c-'a'));
}
