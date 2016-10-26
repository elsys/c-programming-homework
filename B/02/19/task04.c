#include <stdio.h>
char opposite_char(char);
int main()
{
 char c;
 scanf("%c", &c);
 printf("%c\n", opposite_char(c));

 return 0;
}
char opposite_char(char c)
{
  if((c >= 'a') && (c <= 'z'))
  {
    int middle = ('a' +(('z' - 'a')/2));
    char opposite = middle - c + middle + 1;
    return opposite;
  }

  if((c >= 'A') && (c <= 'Z'))
  {
    int middle = ('A' +(('Z' - 'A')/2));
    char opposite = middle - c + middle + 1;
    return opposite;
  }
  return 0;
}
