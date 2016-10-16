#include <stdio.h>
int main() {
int g, a, y;
scanf ("%d" ,&g);
scanf ("%d" ,&a);
scanf ("%d" ,&y);
if(y<a)
{
if(g<a)
printf("%d\n" , a);
else printf("%d\n"  ,g);
}
else
{
if(y<g)
{
printf ("%d\n"  , g);
}
else
printf("%d\n" , y);
}
return 0;
}
