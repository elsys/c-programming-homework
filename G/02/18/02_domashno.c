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
if(c<a)if(b<a)printf("\n %.1f",a);
else printf("\n %.1f",b);
else if(b<c)printf("\n %.1f",c);
else printf("\n %.1f",b);
return 0;
}
