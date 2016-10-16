#include <stdio.h>
int main() 
{
float a,b,c;
printf("\n Iclude number1:");
scanf("%f",&a);
printf("\n Iclude number2:");
scanf("%f",&b);
printf("\n Iclude number3:");
scanf("%f",&c);
if(a>b){
 if(a>c){
   printf(" %.1f\n",a);
  }else printf(" %.1f\n",c);
 }else if(b>a)
{ 
 if(b>c) 
 { printf(" %.1f\n",b);
  }else printf(" %.1f \n",c);
}else
{
printf(" %.1f\n",c);
}
}
}
