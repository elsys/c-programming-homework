#include <stdio.h>

int main()
{
    int n, i = 0;
    scanf("%d", &n);
    int numbers[n];
    while(i < n)
    {
        scanf("%d", &numbers[i]);
        if(numbers[i] % 2 != 0)
        {
            i++;
        }
    }
    for(i = 0; i < n; i++)
    {
        if(i == n - 1)
        {
            printf("\n%d", numbers[i]);
            break;
        }
        printf("\n%d", numbers[i] - numbers[n - 1]);
        n--;
    }
    return 0;
}
