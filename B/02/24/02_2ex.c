#include <stdio.h>
int main()
{
	float x,y,z,max;
	scanf("%f",&x);
	scanf("%f",&y);
	scanf("%f",&z);	
	max=x;
	if(y>max)max=y;
	if(z>max)max=z;
	printf("%.1f\n",max);

	return 0;
}
