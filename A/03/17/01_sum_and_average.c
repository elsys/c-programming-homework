#include <stdio.h>

int main() {
    int n = 0;
    int sum = 0;
    float avg = 0.0;
    int currentNumber = 0;
    scanf("%d\n", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &currentNumber);
        sum += currentNumber;
    }

    avg = (float)sum / n;

    printf("Sum: %d\n", sum);
    printf("Avg: %.2f\n", avg);
    return 0;
}
