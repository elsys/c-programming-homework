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
    for(;n !=0 ;i++)
    {
        a[i]=n%10;
        sum = sum + a[i];
        n = n/10;
    }

     avr = sum/i;
     if (avr >= 7)
     {
         printf("heavy");
     }else
     {
          printf("light");
     }
    return 0;
}
