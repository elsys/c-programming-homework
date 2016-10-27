#include<stdio.h>

int main()
{
int num,i=0,sum=0;
float avr;
    scanf("%d",&num);
    while(num > 0){
        sum=sum+num%10;
        i++;
        num=num/10;}
    avr=(float)sum/i;

if(avr < 7){printf("\n light");}
else{printf("\n heavy");}

return 0;}
