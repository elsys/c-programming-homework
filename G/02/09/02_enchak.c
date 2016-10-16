#include <stdio.h>

int main()
{
float  a,b,c,m;

scanf("%f",&a);
scanf("%f",&b);
scanf("%f",&c);

if(a>b){m=a;}
else{m=b;}

if(m>c){printf("%.1f",m);}
else{printf("%.1f",c);}

return 0;
}
