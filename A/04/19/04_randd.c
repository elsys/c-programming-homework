#include <stdio.h>
#include <math.h>

int main()
{
	float a[64], sm, n;
	int j, i=0;
	while((scanf("%f", &n))!=EOF)
	{
		j=0;
		for(int ix=0; ix<i; ix++)if(a[ix]==n){j=1;break;}
		if(!j){a[i]=n; i++;}
	}
	for(int ix=0; ix<i; ix++)
	{
		//sm=sm+a[ix]%5;
		sm=sm+fmod(a[ix],5);
	}
	printf("%d\n%.3f\n", i, sm);
	return 0;
}
