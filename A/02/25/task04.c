#include <stdio.h>

int main() {

  char a;

  printf("Your character: \n");
  a = getchar();

  printf("%c\n", 'z' - (a - 'a'));

  return 0;
}
