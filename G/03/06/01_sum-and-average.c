#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,sum=0,i,a;
	float avr;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {    
        scanf("%d",&a);
        sum=sum+a;
    }
    
    printf("Sum: %d\n",sum);
	avr=sum/n;
	printf("Avg: %.2f\n",avr);
    
    return 0;
}
