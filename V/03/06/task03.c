#include <stdio.h>

int main()
{
	int n,m,k,i=0,a,b,c;
	float sum = 0;
	scanf("%d", &n);
	scanf("%d", &m);
	scanf("%d", &k);
	while(i<n)
	{
		a = i/k;
		b = a*2;
		c = m*b/100;
		sum = sum + m - c;
		i++;
	}
	printf("%.f\n", sum);
	return 0;
}
