#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;
    int a;
    float sum=0;
    float avg;
    int i;
    scanf("%d", & n);
    for(i=1; i<=n; i++)
        { scanf("%d", &a);
            sum=sum+a; }
            avg=sum/n;
  printf("Sum: %.0f\n", sum);
  printf("Avg: %.2f", avg);
  return 0;


}
