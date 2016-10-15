#include <stdio.h>
#include <stdlib.h>
int main()
{
int b;
char l;

do
{
printf("integer letter");
scanf("%c",&l);
}
while(l<'a' || l>'z');

b='a'+'z'-l;
printf("%c",b);
}
