#include <stdio.h>
#include <stdlib.h>
int main()
{
int number, res;
scanf("%d", &number);
res = number * number;
printf("%d", res);
res = res * number;
printf("\n%d", res);
return 0;
}
