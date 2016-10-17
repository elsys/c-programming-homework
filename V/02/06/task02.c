#include <stdio.h>
#include <stdilib.h>

int main (){
  flaot a, b ,c;
  scanf("%d", a);
  scanf("%d", b);
  scanf("%d", c);
  if(a>=b && a>=c) printf("%.1f\n", a);
  else if (b>=a && b>=c) printf("%.1f", b);
  else printf("%.1f\n", c);
}
