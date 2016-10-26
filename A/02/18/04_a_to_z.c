#include <stdio.h>
int main()
{
  int a;
  char b;
  b = getchar();
  if(b >= 'a' && b <= 'z'){
    a = 122 - b;
    b = 97 + a;
    }
    printf("%c\n", b);
    return 0;
}
