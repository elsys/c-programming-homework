#include <stdio.h>
int main() 
{ 
int n,sum,i,a;
float avg;
scanf("%d",&n);
sum=0;
i=1;
do
{
scanf("%d",&a);
sum=sum+a;
i++;
}while(i<=n);
avg=sum/n;
printf(" %d \n",sum);
printf(" %.2f \n",avg);
return 0;
} 
