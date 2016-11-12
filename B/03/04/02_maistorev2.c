#include<stdio.h>
int main()
{
	int number,i,sum;
	float avr;
	do
	{
	scanf("%d", &number);
	}while(number <=0 || number >=10000);
	i=0;
	sum=0;
	do{
	
		sum=sum+number%10;
		number= number/10;
		i++;
  	}while(number!= 0);
	avr= sum/i;

	if(avr<7)
	{
		printf("light");
			
	}
	if(avr>7)
	{
		printf("heavy");
	}
	if (avr == 7)
	{
          printf("light");
    }
	
	
return 0;
}
