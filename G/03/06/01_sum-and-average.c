#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,a;
    float  avr=0,sum=0;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        scanf("%d",&a);
        sum=sum+a;
    }

    printf("Sum: %.0f\n",sum);
        avr=sum/n;
        printf("Avg: %.2f\n",avr);

    return 0;
}

