#include <stdio.h>
int main()
{
int a,b,c=1,g,j,t,n=1,l,p=0;
scanf("%d",&l);
	if(a<3)
	{	
	n=0;
	}
	else
	{
for(b=1;b<=a-2;b++)
{
	l=n;
	while(l>0)
	{
	p++;
	l--;
	}
	n=n+2;
}
	}
	printf("%d\n",p);
	j=a-1;
		for(b=1;b<=a;b++)
		{
		g=c;
		t=j;
		while(t>0)
		{
		printf(" ");
		t--;
		}
		while(g>0)
		{
		if(b!=a)			{
	if(g==c||g==1)
	{
	printf("*");
	}
	else
	{
	printf("#");
	}
	}
	else
	{	
	printf("*");
	}
	g--;
			}
printf("\n");
j--;
c=c+2;
		}
return 0;
}
