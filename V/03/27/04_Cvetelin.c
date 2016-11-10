#include <stdio.h>

int main()
{
    int height, i, j, symbols, c, heightCopy, n = 1, sum = 1;
    symbols = 3;
    scanf("%d", &height);
    heightCopy = height - 1;
    for(i = 3; i < height; i++)
    {
        n = n + 2;
        sum += n;
    }
    printf("%d\n", sum);
    for(i = 0; i < heightCopy; i++)
    {
        printf(" ");
    }
    printf("*\n");
    for(i = 1; i < height - 1; i++)
    {
        heightCopy--;
        for(c = 0; c < heightCopy; c++)
        {
            printf(" ");
        }
        for(j = 1; j <= symbols; j++)
        {
            if(j == 1 || j == symbols)
            {
                printf("*");
            }
            else
            {
                printf("#");
            }
        }
        printf("\n");
        symbols += 2;
    }
    for(c = 1; c < heightCopy; c++)
    {
        printf(" ");
    }
    for(i = 1; i <= j + 1; i++)
    {
        printf("*");
    }
    return 0;
}
