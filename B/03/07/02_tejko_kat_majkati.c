#include <stdio.h>
int main()
{
 int radka,s,t,i;
i=0; s=0; 
  float avr;
  scanf("%d", &t);
 while (t != 0)
   {
      i=i+1;
      radka=t%10;
      s=s+radka;
      t=t/10;
      
   }
 avr=s/i;
if(avr<=7)
{
 printf("light");
}
else
{
printf("heavy");
}
  return 0;
}
