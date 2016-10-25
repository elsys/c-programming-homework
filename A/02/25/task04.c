#include <stdio.h>

int main() {

  char a;

  a = getchar();

  printf("%c\n", 'z' - (a - 'a'));

  return 0;
}
