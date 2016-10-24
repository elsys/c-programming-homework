#include <stdio.h>
int main()
{   float g,m,e;
    scanf("%f",&g);
    scanf("%f",&m);
    scanf("%f",&e);
    if(g>m)if(g>e)printf("%.1f \n", g);
           else printf("%.1f \n", e);
    else if(m>e)printf("%.1f \n", m);
         else printf("%.1f \n", e);

return 0;
}
