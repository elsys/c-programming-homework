#include <stdio.h>

int main()
{
    int n, i, sum = 0, num;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &num);
        sum += num;
    }
    printf("Sum: %d\n", sum);
    printf("Avg: %.2f", (float)sum / n);
    return 0;
}
