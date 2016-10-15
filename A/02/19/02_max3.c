#include <stdio.h>

int main()
{
	float a,b,c,max;
	printf("Input3: ");
	scanf("%f", &a); scanf("%f", &b); scanf("%f", &c);
	max=a;
	if(b>max)max=b;
	if(c>max)max=c;
	printf("%.3f\n", max);
	return 0;
}
