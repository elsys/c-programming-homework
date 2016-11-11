#include <stdio.h>
int main()
{
 int n,t,s=0, r,i=0;
 float avr;
 scanf("%d", &n);
 t=n;
 while (t != 0)
   {
      i=i+1;
      r=t%10;
      s=s+r;
      t=t/10;
      
   }
 avr=s/i;
if(avr>=7)
{
 printf("heavy");
}
else
{
printf("light");
}
  return 0;
}
