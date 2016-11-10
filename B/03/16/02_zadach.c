#include <stdio.h>

int main()
{
	int a, i;
	float avr;
	avr = 0;
	i = 0;
	do
	{
	scanf("%d", &a);
	} while (a < 1 || a > 10000);
	while (a != 0)
	{
		avr = avr + (a % 10);
		a = a / 10;
		i++;	
	}
	avr = avr / i;
	if (avr < 7)
	{
		printf("light");
	} else printf("heavy");
}
