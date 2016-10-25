#include <stdio.h>

int main()
{
	int  n, k;
	float m;	
	scanf("%d", &n);	
	scanf("%f", &m);
	scanf("%d", &k);
	
	float sum = 0;
	float discount = 0.0;
	for(int i = 0; i < n; i += k)
	{
		sum += k * m * (1 - discount);
		discount += 0.02;  
	}

	printf("%.f", sum);

	return 0;
}
