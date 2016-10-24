#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a,sum=0,i;
    float avg;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&a);
        sum += a;
    }
    avg= (float)sum/n;
    printf("Sum: %d \n",sum);
    printf("Avg: %.2f", avg);
    return 0;
}
