#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    int numbers[n];
    for(i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }
    n--;
    for(;n >= 0; n--)
    {
        printf("\n%d", numbers[n]);
    }
    return 0;
}
