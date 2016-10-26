#include<stdio.h>
int main()
{
	int n, k;
	float m, sum = 0, discount = 0.0;
	scanf("%d", &n);
	scanf("%f", &m);
	scanf("%d", &k);

	for(int i = 0; i < n; i += k)
	{
		sum += k * m * (1 - discount);
		discount += 0.02;  
	}
	printf("%.f", sum);
	
	return 0;
}
