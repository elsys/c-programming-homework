#include<stdio.h>

int main()
{
	float m,a;
	int i=1;

	printf("\n%d.Number",i);
	scanf("%f", &a);	
	m=a;
	do
	{
	printf("\n%d.Number",i+1);
	scanf("%f", &a);
	i++;
	if(m<a)
	m=a;
	}
	while(i<=2);	
	printf("MAX=%.2f\n",m);
return 0;

}
