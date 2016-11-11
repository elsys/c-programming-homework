#include<stdio.h>
int main()
{
	float a,b,i=1;
	scanf("%f",&a);
	b=a;
	while(i<3)
	{
	scanf("%f",&a);
	if(a>b) b=a;
	i++;
	}
	printf("%.1f\n",b);
	return 0;
}
