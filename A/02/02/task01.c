#include <stdio.h>

int main()
{
    int n, square, cube;

    scanf("%d", &n);

    square = n * n;
    cube = square * n;

    printf("%d\n%d\n", square, cube);

    return 0;
}
