#include <stdio.h>
#include <stdlib.h>
int main()
{
char symbol;
int number;
scanf("%c", &symbol);
number = 122 - (symbol - 97);
printf("%c", number);
return 0;
}
