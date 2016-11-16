#include <stdio.h>
int main ()
{
float e;
int n,i,f;
float k;
scanf("%d", &n);
for (i=1;i<=n;i++)
{
scanf("%d",&f);
e=e+f;
}
k=e/n;
printf("Sum: %.0f\n", e);
printf("Avg: %.2f", k);
return 0;
} 
