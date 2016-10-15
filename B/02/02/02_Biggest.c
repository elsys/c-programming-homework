#include <stdio.h>

int main()
{
	float a, b, c;
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);

	if(b > c)
	{
		if(b > a) printf("%.1f",b);
		else printf("%.1f",a);
	}
	else
	{
		if(c > a) printf("%.1f",c);
		else printf("%.1f",a);
	}
return 0;
}
