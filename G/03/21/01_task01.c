#include <stdio.h>
#include <stdlib.h>

int main()
{ 
int n,i=0,a,sum=0;
float avr;
scanf("%d", &n);
while(i<n)
{ scanf("%d", &a);
  sum=sum+a;
  i++;
}
avr=(float)sum/n;
printf("\n Sum: %d", sum);
printf("\n Avg: %.2f", avr);
return 0;
}
