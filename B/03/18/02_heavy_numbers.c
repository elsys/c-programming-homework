#include <stdio.h>
int main ()
{
	int n,i;
	float sum;
	sum=0;
	i=0;
	scanf("%d",&n);
	
	do
	{
		sum=n%10+sum;
		n=n/10;
		i++;
	}while(n>0);
	
	sum=sum/i;
	if(sum>7) printf("heavy\n");
	else printf("light\n");
	return 0;
}
