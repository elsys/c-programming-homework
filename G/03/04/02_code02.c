#include<stdio.h>
#include<stdlib.h>
int main()
{
int number,sum=0,i=0;
float avarage;
scanf("%d",&number);
do
{
sum=sum+number%10;
i++;
number=number/10;
}while(number>0);
avarage=(float)sum/i;
if(avarage>7){printf("\n heavy");}
else{printf("\n light");}
return 0;
}
