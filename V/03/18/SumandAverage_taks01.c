#include<stdio.h>

int main()
{
	int n,i,numb;
	float avr,sum;
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%d", &numb);
		sum=sum+numb;
	}
	avr=sum/n;
	printf("\nSum: %.f", sum);
	printf("\nAvg: %.2f", avr);
}
