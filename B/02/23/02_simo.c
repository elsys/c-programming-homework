
#include <stdio.h>
int main ()
{
float n,y,h;
scanf ("%f",&n);
scanf ("%f",&y);
scanf ("%f",&h);
if (n>y)
{
if (n>h) printf ("\n %.1f\n",n);
else printf ("\n %.1f\n",h);
}
else
{
if (y>h) printf ("\n %.1f\n",y);
else printf ("\n %.1f",h);
}
return 0;
}


