#include <stdio.h>

int main()
{
        int n;
        scanf("%d", &n);

        int result[n], i;

        for(i = 1; i <= n; i++)
        {
                scanf("%d", &result[i]);
        }

        for(i = n; i > 0; i--)
        {
                printf("%d\n", result[i]);
        }
        return 0;
}



