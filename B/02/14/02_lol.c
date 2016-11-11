#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c, d;

    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);

    if(b>a)
    {
    d=b;
    }
    if(c>d)
    {
    d=c;
    }
    else if(c>a){
    d=c;
    }
    printf("%.1f\n",d);
    return 0;
}
