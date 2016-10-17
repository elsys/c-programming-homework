#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,max;
    printf("4islo");
    scanf("%f",&a);
    printf("4islo");
    scanf("%f",&b);
    printf("4islo");
    scanf("%f",&c);
    max=a;
    if(b>a)max=b;
    if(c>max)max=c;
    printf("\n%f",max);
    return 0;
}
