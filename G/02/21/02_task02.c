#include <stdio.h>
#include <stdlib.h>

int main()
{
float a,b,c,max;
scanf("%f", &a);
scanf("%f", &b);
scanf("%f", &c);
max=a;
if(b>a&&b>c)
{ max=b; }
if(c>a&&c>b)
{ max=c; }
printf("\n %.1f", max);
return 0;
}
