#include <stdio.h>
int main()
{
 char c;
 do{
 scanf("%c", &c);
 }while(!((c >= 'A' && c <= 'Z') || (c >= 'a' &&  c <= 'z')));
 c = ((char)((int) c + 13));
 printf("%c\n", c);
 return 0;
}
