#include<stdio.h>
int main()
{
char letter,b;
printf("\n Input letter :");
scanf("%c",&letter);
b='a'+'z'-letter;
printf("\n%c",b);
}
