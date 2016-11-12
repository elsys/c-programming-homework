#include <stdio.h>
#include <stdlib.h>

int main()
{
		int i=0,n,a;
		float sum=0;
		float avr;
		scanf("%d",&n);
		do{
			scanf("%d",&a);
			sum=sum+a;
			i++;
		}while(i<n);
		avr=sum/n;
		printf("Sum: %.0f",sum);
		printf("\nAvg: %.2f",avr);

return 0;
}
