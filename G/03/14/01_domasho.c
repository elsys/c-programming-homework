#include<stdio.h>
int main()
{
int n,a,sum,i;
sum=0;
i=0;
float avr;
scanf("%d",&n);
while(i<n)
{
scanf("%d",&a);
sum=sum+a;
i++;
}
avr=(float)sum/n;
printf("\nSum: %d",sum);
printf("\nAvg: %.2f",avr);
return 0;
}
