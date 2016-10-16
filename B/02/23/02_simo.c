
#include <stdio.h>
int main()
{
float m,n,b;
scanf("%f",&m);
scanf("%f",&n);
scanf("%f",&b);
if (m>n && m>b)
printf("%f\n",m);
else if(n>m && n>b)
printf("%f\n",n);
else if(b>m && b>n)
printf("%f\n",b);
return 0;
}

