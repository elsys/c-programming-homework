#include <stdio.h>
int main() {
  char a,b;
  printf("Give a char:\n");
  scanf("%c", &a);
  b = ('z' - (a - 'a'));
  printf("The opposite is %c\n", b);
  return 0;
}
