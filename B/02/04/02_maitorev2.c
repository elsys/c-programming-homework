#include<stdio.h>
int main()
{
	float m,n,g;
	scanf("%f",&m);
	scanf("%f",&n);
	scanf("%f",&g);
	float max= m;
	if (max >n)
	{ if (max > g)
		printf("%.1f",m);
		else printf("%.1f",g);
	}
	else 
	{	max=n;
	 		if (max> g)
				printf("%.1f",n);
			else printf("%.1f",g);
	} 
}
