#include <stdio.h>
int main (){
  flaot a, b ,c;
  scanf("%f %f %f", &a, &b, &c);
  if(a>=b && a>=c) printf("%.1f\n", a);
  else if (b>=a && b>=c) printf("%.1f", b);
  else printf("%.1f\n", c);
  return 0;
}
