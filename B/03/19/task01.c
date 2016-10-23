#include <stdio.h>

int main()
{
 int n, i, a;
 int sum = 0; 
 float avr;

 scanf("%d",&n);
 for(i = 0; i < n; i++)
 {
  scanf("%d", &a);
  sum += a;
 }
 printf("Sum: %d\nAvr: %.2f",sum ,avr =((float)sum)/n);
 return 0;
}
