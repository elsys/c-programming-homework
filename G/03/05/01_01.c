#include <stdio.h>

int main()
{
    int kolko,i=0,n;
    float avg,sum=0;

    scanf("%d", &kolko);
  while(i<kolko){
        scanf("%d", &n);
        sum=sum+n;
        i++;
                }
    avg=sum/kolko;
    printf("Sum: %.0f\n", sum);
    printf("Avg: %.2f", avg);
}
