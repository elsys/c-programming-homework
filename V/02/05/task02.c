#include <stdio.h>

int main()
{
	float a,b,c;
	
	scanf("%f %f %f",&a,&b,&c);
	
	if(a>b)
	{
		if(a>c)
		printf("\n%.1f",a);
		else
		printf("\n%.1f",c);
	}
	else
		if(b>c)
		printf("\n%.1f",b);
		else
		printf("\n%.1f",c);
	
	
	return 0;

}
