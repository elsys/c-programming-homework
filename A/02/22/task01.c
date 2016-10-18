#include <stdio.h>

int main() {
  int a,b,c;
  scanf("%d", &a);
  b = a*a;
  c = b*a;
  printf("%d^2 = %d\n", a,b);
  printf("%d^3 = %d", a,c);
  return 0;
}
