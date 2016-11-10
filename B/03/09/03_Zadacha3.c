#include <stdio.h>


int main()
{

	int n, k, i;
	float l, m, v;
	l=0;
	v=1;

	scanf("%d", &n);
	scanf("%f", &m);
	scanf("%d", &k);

	for(i=0; i<n/k; i++, v-=0.02)
	{	
		l += m*k*v;
	}
	
	printf("%d", (int)l);
	return 0;
}
