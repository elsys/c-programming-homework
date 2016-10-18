#include <stdio.h>

int main()
{
	float a, b, c;
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	
	if(a>c)
	{
		if(a>b)
		{
			printf("%f",a);
		}else
		{
			printf("%f",b);
		}
	}else if(c>b)
	{
		printf("%f",c);
	}else
	{
		printf("%f",b);
	}
	
	return 0 ;
}
