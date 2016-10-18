#include <stdio.h>
int main() {
  char a,b;
  scanf("%c", &a);
  b = ('z' - (a - 'a'));
  printf("%c", b);
  return 0;
}
