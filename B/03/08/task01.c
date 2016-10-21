#include <stdio.h>
int main() 
{ 
int i,a;
float avg,n,sum;
scanf("%f",&n);
sum=0;
i=1;
do
{
scanf("%d",&a);
sum=sum+a;
i++;
}while(i<=n);
avg=sum/n;
printf("Sum: %.0f\n",sum);
printf("Avg: %.2f\n",avg);
return 0;
} 
