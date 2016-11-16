#include <stdio.h>

int main()
{
	int n,a;
	int s=0;
	int i=0;
	float avr;
	scanf("%d",&n);
	while(n!=0)
	{
      		i=i+1;
      		a=n%10;
      		s=s+a;
		n=n/10;
	}
	avr=s/i;
	if(avr>=7)
	{
		printf("heavy\n");
	}
	else
	{
		printf("light\n");
	}
	return 0;
}
