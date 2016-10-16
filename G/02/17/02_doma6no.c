#include <stdio.h>
int main()
{
float l,a,g;
scanf("%f", &l);
scanf("%f", &a);
scanf("%f", &g);
if(l>a && l>g)
printf("\n%f", l); 
if(a>l && a>g)
printf("\n%f", a);
if(g>a && g>l)
printf("\n%f", g);
return 0;
}

