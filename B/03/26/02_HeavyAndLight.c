#include<stdio.h>
int main()
{
	int number, sum = 0, i = 0;
	float avr;
	scanf("%d", &number);
	while(number != 0)
	{
		sum += 	number%10;
		number /= 10;
		i++;
	}
	avr = (float)sum / i;
	if(avr <= 7)
	{
		printf("light");
	}else
	{
		printf("heavy");
	}
	
	return 0;

}
