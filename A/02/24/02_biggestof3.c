#include<stdio.h>
int main()
{
	float a,b,c,max;
	printf("Input first number:");
	scanf("%f",&a);
	printf("Input second number:");
	scanf("%f",&b);
	printf("Input third number:");
	scanf("%f",&c);
	if(a>b)
	{
		if(a>c)max=a;
	}
	else if(b>c)max=b;
	else max=c;
	printf("The biggest number is %f\n",max);
	return 0;
}
