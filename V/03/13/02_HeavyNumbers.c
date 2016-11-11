#include <stdio.h>

int main()
{
	int num, sum = 0, i = 0;
	float avr = 0;
	scanf("%d", &num);
	while(num != 0)
	{
		sum = sum + num%10;
		num = num / 10;
		i++;
	}
	avr = sum / i;
	if(avr < 7)
	{
		printf("light");
	}
	else
	{
		printf("heavy");
	}
}
