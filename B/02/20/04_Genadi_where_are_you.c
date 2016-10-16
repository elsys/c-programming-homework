#include<stdio.h>
int main()
{
	char c,n;
	int i;
	do{
		printf("input letter:");
		scanf("%c",&c);
	}while(c<'a' || c>'z');
	for(i=0,n='a'-1;n!=c;i++)
	{
		n++;
		if(n==c) printf("%c \n",'z'-i);
	}
}
