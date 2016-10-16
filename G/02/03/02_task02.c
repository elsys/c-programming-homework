#include <stdio.h>
int main() {
  float a,b,c,max;
  printf("\n vavedi a:");
  scanf("%f",&a);
  printf("\n vavedi b:");
  scanf("%f",&b);
  printf("\n vavedi c:");
  scanf("%f",&c);
if (a>b)max=a;
else max =b;
  if (c>max)max=c;
  printf("%f\n",max);
return 0;
}
