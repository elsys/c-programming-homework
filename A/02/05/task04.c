#include <stdio.h>
#include <stdlib.h>

int main()
{
   char a,b;
   scanf("%c",&a);
   a=a-'a';
   b='z'-a;
   printf("%c",b);
}
