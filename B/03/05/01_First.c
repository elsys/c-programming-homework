#include <stdio.h>


int main()
{
    int amount,n,i;
    float avg,sum;
    sum=0;
    i=0;
    scanf("%d", &amount);
    do{

        scanf("%d", &n);
        sum=sum+n;
        i++;

    }while(i<amount);
    avg=sum/amount;
    printf("Sum: %.0f\n", sum);
    printf("Avg: %.2f", avg);
}
