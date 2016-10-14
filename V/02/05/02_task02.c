#include <stdio.h>

int main()
{
	float a,b,c;
	
	printf("\nEnter three numbers:");
	scanf("%f %f %f",&a,&b,&c);
	
	if(a>b)
	{
		if(a>c)
		printf("\nThe biggest number is:%f",a);
		else
		printf("\nThe biggest number is:%f",c);
	}
	else
		if(b>c)
		printf("\nThe biggest number is:%f",b);
		else
		printf("\nThe biggest number is:%f",c);
	
	
	return 0;

}
