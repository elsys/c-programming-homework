#include <stdio.h>


int main () {
    int n, a, sum = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        sum += a;
    }

    printf("Sum: %d\nAvg: %.2f\n", sum, (float)sum / n);
}
