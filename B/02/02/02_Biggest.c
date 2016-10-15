#include <stdio.h>

int main()
{
	float a, b, c;
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);

	if(b > c)
	{
		if(b > a) printf("%f",b);
		else printf("%f",a);
	}
	else
	{
		if(c > a) printf("%f",c);
		else printf("%f",a);
	}
return 0;
}
