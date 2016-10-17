#include <stdio.h>
int main(){
  char c;
  int x;
  c = getchar();
  if(c >= 'a' && c <= 'z'){
    x = 122-c;
    c = 97 + x;
  }
  printf("%c\n", c);
  return 0;
}


