#include <stdio.h>

int main()
{
	int a, i = 0;
	float avr = 0;
	do
	{
	  scanf("%d", &a);
	} while (a <= 0 || a > 9999);
	
	while(a > 0)
	{
	  avr = avr + a % 10;
	  a = a / 10;
	  i++;
	}	
	if(avr / i < 7)
	{
	  printf("light");
	} else { printf("heavy"); }

	return 0;
}
