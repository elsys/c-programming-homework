#include <stdio.h>


int main()
{
    int numofx,x,i;
    float avg,sum;
    sum=0;
    i=0;
    scanf("%d", &numofx);
    do{

        scanf("%d", &x);
        sum=sum+x;
        i++;

    }while(i<numofx);
    avg=sum/numofx;
    printf("Sum: %.0f\n", sum);
    printf("Avg: %.2f", avg);
}
