#include <stdio.h>

int main ()
{
	float n,m,k,result,count,t;
	scanf ("%f",&n);
	scanf ("%f",&m);
	scanf ("%f",&k);

	count=0;
	result=0;
	t=m*0.02;
	while(n>0)
	{
		if(count==k)
		{
			m=m-t;
			count=0;
		}
		result=result+m;
		n--;
		count++;
	}
	printf ("%.f",result);
	return 0;
}
