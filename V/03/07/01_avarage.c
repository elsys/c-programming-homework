#include <stdio.h>
#include <stdlib.h>
int main()
{
int n,sum=0,c,i;
float avr=0;
scanf("%d",&n);
for(c=0;c<n;c=c+1){
scanf("%d",&i);
sum=sum+i;
avr=sum;
}
printf("Sum: %d",sum);
printf("\nAvg: %.2f",avr/n);
return 0;

}
