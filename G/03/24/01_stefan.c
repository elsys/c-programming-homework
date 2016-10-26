#include <stdio.h>
int main()
{
int a,n,sum=0;
float avr=0;
scanf("%d",&n);
for(int i=0;i<n;i++)
{scanf("%d",&a);
sum = sum +a;
}
printf("Sum: %d\n",sum);
avr=(float)sum/n;
printf("Avg: %.2f\n",avr);
return 0;
}
