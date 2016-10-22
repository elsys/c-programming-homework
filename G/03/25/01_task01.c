#include<stdio.h>
#include<stdlib.h>
int main()
{
int n,a,sum=0,i=0;
float avr;
scanf("%d",&n);
while(i<n)
{
scanf("%d",&a);
sum=sum+a;
i++;
}
avr=sum/n;
printf("\nSum:%d",sum);
printf("\nAvr:%.2f",avr);
return 0;
}
