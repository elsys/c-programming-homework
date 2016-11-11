#include <stdio.h>

int main()

{ int n, i,  v;
float  avr, sum;

scanf("%d", &n);

for(i=1; i<=n; i++)
 {
 scanf("%d",& v);
 sum=sum+v;

 }
avr=sum/n;

printf("Sum: %.0f", sum);
printf("\nAvg: %.2f", avr);
return 0;
}
