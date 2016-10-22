#include<stdio.h>

int main()
{
        int n,i=0;
        float avr,sum=0;
        scanf("%d",&n);
        while(n!=0)
        {
                sum=sum+n%10;
                n=n/10;
                i++;
        }
        avr=sum/i;
        if(avr<=7)
        {
                printf("light");
        }
        else
        {
                printf("heavy");
        }
}
