#include <stdio.h>
#include <stdlib.h>

int main()
{
int a,b;
printf("Enter a number: ");
scanf("%d",&a);
b=a;
a=a*a;
b=a*b;
printf("Square:%d\n"
       "Cube:%d",
        a,b);

}
