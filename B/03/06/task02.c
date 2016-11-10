#include<stdio.h>

int main()
{
    int a,i;
    float sum,avr;

    sum=0;
    avr=0;

    scanf("%d",&a);

    while(a>=1 && a<=9999){
        for(i=0; a>=1; i++){
           sum = sum + a%10;
           a=a/10;
           avr = sum;
        }
	
	avr=sum/i;

      if(avr>7)	printf("heavy");
      else printf("light");
    };


    return 0;
}
