
#include <stdio.h>
int main()
{
float m,n,b;
printf("\nInput first number:");
scanf("%f",&m);
printf("\nInput first number:");
scanf("%f",&n);
printf("\nInput first number:");
scanf("%f",&b);
if (m>n && m>b)
printf("Biggest number is%f\n",m);
else if(n>m && n>b)
printf("Biggest number is%f\n",n);
else if(b>m && b>n)
printf("Biggest number is%f\n",b);
else if(m==n==b)
printf("NO biggest number, sorry%.19f\n",m);
return 0;
}

