#include <stdio.h>
int main()
{ float z,j,h;
scanf("%f",&z);
scanf("%f",&j);
scanf("%f",&h);
if(z>j)if(z>h)printf("%.1f \n", z);
else printf("%.1f \n", h);
else if(j>h)printf("%.1f \n", j);
else printf("%.1f \n", h);
}
