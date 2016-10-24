#include<stdio.h>

int main()
{
	float m,a;
	int i=1;

	scanf("%f", &a);	
	m=a;
	do
	{
	scanf("%f", &a);
	i++;
	if(m<a)
	m=a;
	}
	while(i<=2);	
	printf("%.1f\n",m);
return 0;

}
