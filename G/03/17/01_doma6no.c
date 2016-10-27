#include <stdio.h>
int main()
{
int n,i,a,sum;
float avr;
i=0;
sum=0;
scanf("%d", &n);
do{
scanf("%d", &a);
sum=a+sum;
i++;
}while(i<n);
avr=(float)sum/n;
printf("Sum: %d", sum);
printf("\nAvg: %.2f", avr);
return 0;
}
