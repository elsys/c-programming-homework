#include<stdio.h>
int main()
{
int n,sum=0,number,i=0;
float avr;
scanf("%d", &n);
while (n != 0)
{
     	i=i+1; 
     	number=n%10;
     	sum=sum+number;
    	n=n/10;
}
avr=sum/i;
if(avr<7)
{
 	printf("light");
}
else
{
	printf("heavy");
}
return 0;
}
