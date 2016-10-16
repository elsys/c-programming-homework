#include <stdio.h>
int main()
{
	float a,b,c;
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	if(a>b){
		if(a>c)
			printf("%f \n",a);
		else printf("%f \n", c);}
	else if(b>c)
		printf("%f \n",b);
		else printf("%f \n",c);
	
	return 0;
}
