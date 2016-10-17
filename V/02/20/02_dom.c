#include <stdio.h>
int main() {
float g, a, y;
scanf ("%f" ,&g);
scanf ("%f" ,&a);
scanf ("%f" ,&y);
if(y<a)
{
if(g<a)
printf("%.1f\n" , a);
else printf("%.1f\n"  ,g);
}
else
{
if(y<g)
{
printf ("%.1f\n"  , g);
}
else
printf("%.1f\n" , y);
}
return 0;
}
