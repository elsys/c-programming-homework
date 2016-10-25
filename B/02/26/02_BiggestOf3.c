#include<stdio.h>

int main()
{
	float a,b,c;
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("%.1f",a);
		}else
		{
			printf("%.1f",c);
		}
	}else if(b>c)
	{
		printf("%.1f",b);
	}else
	{
		printf("%.1f",c);
	}
	return 0;
}
