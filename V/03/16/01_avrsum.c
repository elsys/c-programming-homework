#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    float sum;
    i = 0;
    sum = 0;
    float avr;
    avr = 0.00;
    float a[80];
    scanf("%d/n",&n);
    for(;n>i;i++)
    {
        scanf("%f/n",&a[i]);
        sum = sum + a[i];
    }

     avr = sum/i;
    printf("Sum: %.0f\n",sum);
    printf("Avg: %.2f",avr);
    return 0;
}
