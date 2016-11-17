#include <stdio.h>
#include <math.h>

int main()
{
	float a[64],b,c=0;
	int i=0,j,d;
<<<<<<< HEAD
	while((scanf("%f",&b))!=EOF)
=======
	while((scanf("%f",&b)!=EOF)
>>>>>>> c25191fd3f62bbff1a44bd88d371c6cb5c225d2b
	{
		d=1;
		for(j=0;j<i;j++)
		{
			if(b==a[j]){d=0;break;}
		}
		if(d!0){a[i]=b;i++;}
	}
	printf("\n%d",i);
	for(j=0;j<i;j++)
	{
		c=c+fmod(a[j],5);
	}
	printf("%.3f",c);
	return 0;
}
