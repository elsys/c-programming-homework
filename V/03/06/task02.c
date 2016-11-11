#include <stdio.h>

int main()
{
	int n, sum = 0, a, i=0;
	float avg;
	do
	{
		scanf("%d", &n);
	}while(n<1 && n>9999);
	while(n>0)
	{
		a = n % 10;
		sum += a;
		i++;
		n = n/10;
	}
	avg = (float)sum / i;
	if(avg>7) printf("heavy\n");
	else printf("light\n");

	return 0;
}
