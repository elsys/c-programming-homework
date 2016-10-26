#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,a;
    float avg,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a);
        sum = sum + a;
        }
    avg=sum/n;

printf("Sum: %.0f\nAvg: %.2f\n",sum,avg);
    return 0;
}
