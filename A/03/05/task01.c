#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, a, sum=0;
    float avg=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    scanf("%d",&a);
    sum=sum+a;
    }
    avg=sum/n;
    printf("Sum: %d\n",sum);
    printf("Avg: %.2f\n",avg);
}
