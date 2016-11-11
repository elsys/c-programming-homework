#include <stdio.h>
int main()
{
int q,a;
float avr,n,sum;
q=0;
sum=0;
scanf("%d",&a);
do{
scanf("%f",&n);
q++;
sum=sum+n;
  }
while(a>q);
avr=(float)sum/(float)a;
printf("Sum: %.0f\n", sum);
printf("Avg: %.2f\n", avr);







return 0;
}
