#include <stdio.h>

int main()
{
float a,b,c=0,i=0,d;
scanf("%f",&a);
while(i<a){
    scanf("%f",&b);
    c=c+b;
    i++;
}
d=c/a;
printf("\nSum: %.f",c);
printf("\nAvg: %.2f",d);
return 0;
}
