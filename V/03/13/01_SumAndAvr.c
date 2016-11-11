#include <stdio.h>

int main()
{
	float avr, n, num, i = 0, sum = 0;
	scanf("%f", &n);
	while(i < n)
	{
		scanf("%f", &num);
		sum = sum + num;
		i++;
	}
	avr = sum / n;
	printf("Sum: %.0f", sum);
	printf("\nAvg: %.2f", avr);
}
