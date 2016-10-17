#include <stdio.h>

int main()
{
float a,b,c;

scanf("%f",&a);
scanf("%f",&b);
scanf("%f",&c);

if(a>b && a>c)
{
printf("a");
}
else if(b>a && b>c)
{
printf("b");
}
else if(c>a && c>b)
{
printf("c");
}
}
