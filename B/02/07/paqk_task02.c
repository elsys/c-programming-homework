#include<stdio.h>
int main()
{
	
 
 float a,b,c;
 float max;

	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);

max=a;
if(b>max)max=b;
if(c>max)max=c;
printf("%.1f\n",max);

return 0;


}
