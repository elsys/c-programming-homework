#include <stdio.h>

int main()
{
    int sum = 0, a, i;
    float avg, n;

    scanf("%f", &n);

        for (i = 1; i<=n; i++){
            scanf("%d", &a);
            sum += a;
        }

    avg = sum / n;

    printf("Sum: %d \n", sum);
    printf("Avg: %.2f \n", avg);
}
