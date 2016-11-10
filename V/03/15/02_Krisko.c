#include<stdio.h>
int main()
{
	int n,i=0;
	float avg,sum=0;
	scanf("%d", &n);
	while(n!=0)
	{
		sum = sum + n%10;
		n = n/10;
		i++;
	}
	avg = sum / i;
	if ( avg>7)
	{
		printf("heavy");
	}
	else
	{
		printf("light");
	}
	  





    
}
