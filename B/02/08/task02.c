#include <stdio.h>
int main()
{
float a,b,c;
scanf("%f",&a);
scanf("%f",&b);
scanf("%f",&c);
if(a>b)
{
 if(a>c)
  {
   printf(" %.2f\n",a);
  }
  else printf(" %.2f\n",c);
 }
else if(b>a)
{ 
 if(b>c)
  {
   printf(" %.2f\n",b);
  }
 else printf(" %.2f \n",c);
}
else
{
printf(" %.2f\n",c);
}
}
