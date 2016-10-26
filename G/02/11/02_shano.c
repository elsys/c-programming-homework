#include <stdio.h>
int main()
{   float x,y,z;
    scanf("%f",&x);
    scanf("%f",&y);
    scanf("%f",&z);
    if(x>y)if(x>z)printf("%.1f \n", x);
    else printf("%.1f \n", z);
    else if(y>z)printf("%.1f \n", y);
    else printf("%.1f \n", z);
}
