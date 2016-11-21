#include <stdio.h>
int main()
{
int a,b,n,d,g,so=0,rry=2;
	scanf("%d",&n);
	scanf("%d",&d);
	scanf("%d",&b);
	g=d;
for(a=0;a<n;a++)
{
if(a%b==0 && a>0)
	{
	g=d-(d*rry)/100;
	rry=rry+2;
	}	
	so+=g;
}
printf("%d\n",so);
return 0;
}



