#include <stdio.h>

int main()
{
	float a, b, c;
	printf("int a:");
	scanf("%f",&a);
        printf("int b:");
	scanf("%f",&b);
        printf("int c:");
	scanf("%f",&c);

	if(a>b)
	{
		if(a>c) 
		printf("%.1f\n",a);
		else 
		printf("%.1f\n",c);
	}
	else
	{
		if(b>c) 
		printf("%.1f\n",b);
		else 
		printf("%.1f\n",c);
	}
return 0;
}
