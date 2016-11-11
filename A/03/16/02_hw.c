#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,sum=0,i;
    scanf("%d",&a);
    for (i=0;a>0;i++)
    {
        sum += a%10;
        a = a/10;
    }
    i = sum/i;
    if (i>7)
    {
        printf("heavy");
    }
    else
    {
        printf("light");
    }
    return 0;
}
