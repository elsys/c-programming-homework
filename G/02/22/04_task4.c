#include<stdio.h>
int main()
{
char letter,b;
printf("Input letter\n:");
scanf("%c",&letter);
b='a'+'z'-letter;
printf("%c",b);
}
