#include<stdio.h>
int main()
{
	int a,sum=0,b,i;
	float avg=0.0;
	scanf("%d",&a);
	for(i=0;a>0;i++)
	{
		b=a%10;
		sum=sum+b;
		a=a/10;
	}
	avg=(float)sum/i;
	if(avg>7)
	{
		printf("\nheavy");
	}
	else
	{
		printf("\nlight");
	}
	return 0;
}
