#include<stdio.h>
int main()
{
    float a,b,c,max;
    max=0;
scanf("%f\n", &a);
scanf("%f\n", &b);
scanf("%f\n", &c);
    if(a>max)
        max=a;
    if(b>max)
        max=b;
    if(c>max)
        max=c;
    printf("%.1f", max);
}
