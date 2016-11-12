#include <stdio.h>

int main()
{
    int i=1,n,ch;
    float avg,sum=0;
    scanf("%d",&n);
    while(i<=n){
        scanf("%d",&ch);
        sum=sum+ch;
        i++;
    }
    printf("\nSum: %.0f",sum);
    avg=sum/n;
    printf("\nAvg: %.2f",avg);
    return 0;
}
