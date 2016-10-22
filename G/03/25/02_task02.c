#include<stdio.h>
#include<stdlib.h>
int main()
{
int a,sum=0,i=0;
float avr;
scanf("%d",&a);
do
{
sum=sum+a%10;
i++;
a=a/10;
}while(a>0);
avr=(float)sum/i;
if(avr>7){printf("\n heavy");}
else{printf("\n light");}
return 0;
}
