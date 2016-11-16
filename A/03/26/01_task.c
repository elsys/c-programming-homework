#include <stdio.h>

int main()
{
    int n, i, c, sum=0;
    float avg;
    scanf("%d", &n);
    for(i=0; n>i; i++) {
        scanf("%d", &c);
        sum= sum+c;
    }
    avg=sum;
    avg=avg/i;
    printf("Sum: %d\nAvg: %.2f", sum, avg);
    return 0;
}
