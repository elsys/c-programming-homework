#include <stdio.h>

int main()
{
	int i;
	float avr, a, sum, n;
	sum = 0;
	avr = 0;
	scanf("%f", &n);
	
	for (i = 0; i < n; i ++)
	{
		scanf("%f", &a);
		sum = sum + a;
	}
	avr = sum / n;
	printf("Sum: %.0f\n", sum);
	printf("Avg: %.2f", avr); 
}
