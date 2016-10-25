#include <stdio.h>
int main()
{
  float a, b, c;
  scanf("%f %f %f", &a, &b, &c);

  if(a > b && a > c)
    printf("%.1f\n",a);

    if(b > a && b > c)
      printf("%.1f\n",b);

      if(c > a && c > b)
        printf("%.1f\n",c);

  return 0;
}
