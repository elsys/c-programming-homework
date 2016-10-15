#include <stdio.h>

int main()
{
float  a,b,c,m;
printf("integer first number");
scanf("%f",&a);
printf("integer second number");
scanf("%f",&b);
printf("integer third number");
scanf("%f",&c);

if(a>b){m=a;}
else{m=b;}

if(m>c){printf("%f",m);}
else{printf("%f",c);}

return 0;
}
