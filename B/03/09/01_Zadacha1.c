#include <stdio.h>


int main()
{	
	int i,f;
	float avg,sum,n;
	sum=0;
	scanf("%f", &n);

	for(i=0;i<n;i++)
		{
			scanf("%d", &f);
			sum += f;
		}
		
		avg=sum/n;
		printf("Sum: %.0f", sum);
		printf("\nAvg: %.2f", avg);
return 0;

}
