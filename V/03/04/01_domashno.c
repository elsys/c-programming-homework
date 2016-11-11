#include <stdio.h>

int main()
{

int n,p,i=0;

scanf("%d",&n);
float sum=0;

for(i=0;i<n;i++)
    {
    scanf("%d",&p);
    sum=sum+p;
    
    }
float avg;
    
avg=sum/n;

printf("\nSum: %.f",sum);
printf("\nAvg: %.2f",avg);

return 0;
}
