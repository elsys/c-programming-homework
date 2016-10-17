#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,max;
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    max=a;
    if(b>a)max=b;
    if(c>max)max=c;
    printf("\n%f",max);
    return 0;
}
