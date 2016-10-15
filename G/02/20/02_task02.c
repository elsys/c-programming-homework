#include <stdio.h>
void main() {
  float a,b,c,max;
  printf("\n A:>");
  scanf("%f",&a);
  printf("\n B:>");
  scanf("%f",&b);
  printf("\n C:>");
  scanf("%f",&c);
if (a>b)max=a;
else max =b;
  if (c>max)max=c;
  printf("%f\n",max);
}
