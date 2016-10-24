#include<stdio.h>

int main()
{
	int n, i;
	float sum, avg;
	scanf("%d", &n);
	sum = 0;
	while(n = 0)
	{
		sum = sum + n%10;
		n = n/10;
		i++;
	}
	avg = sum/i;
	if(avg < 7) printf("light");
	else printf("heavy");
	return 0;
}
