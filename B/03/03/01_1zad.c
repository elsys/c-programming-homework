#include <stdio.h>

int main()
{
	int n, i, a, sum = 0;
	float avr;
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
	  scanf("%d", &a);
	  sum = sum + a;
	}
	avr = sum / n;
	printf("Sum: %d\n", sum);
	printf("Avg: %.2f", avr);
	return 0;
}
