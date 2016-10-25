#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);

    int square = n * n;
    int cube = n * square;

    printf("%d\n%d\n", square, cube);
    return 0;
}

