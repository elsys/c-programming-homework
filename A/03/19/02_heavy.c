#include <stdio.h>

int main()
{
	int n, i;
	float sm;
	scanf("%d", &n);
	for(i=0;n>0;i++)
	{
		sm=sm+n%10;
		n=n/10;
	}
	sm=sm/i;
	if(sm<7)printf("light\n");
	else printf("heavy\n");
	return 0;
}
