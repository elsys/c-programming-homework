#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int sum = 0;
	int lenght = 0;

	do
	{
		sum += n % 10;		
		n /= 10;
		lenght++;	
	}
	while(n != 0);

	if((float)sum / lenght > 7)
	{
		printf("heavy");
	}
	else
	{
		printf("light");
	}

	return 0;
}
