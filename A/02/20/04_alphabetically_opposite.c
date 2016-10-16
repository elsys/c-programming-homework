#include <stdio.h>

int main(){
  char a, b;
  a = getchar();
  b = a - 97;
  b = 122 - b;
  printf ("%c", b);
}
