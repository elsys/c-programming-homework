#include <stdio.h>

int main()
{
    int i, j = 0, number, sum = 0;
    do
    {
        scanf("%d", &number);
    }
    while(number < 1 || number > 9999);
    while(number > 0)
    {
        i = number % 10;
        sum += i;
        number /= 10;
        j++;
    }
    if(sum / j >= 7)
    {
        printf("heavy");
    }
    else
    {
        printf("light");
    }
    return 0;
}
