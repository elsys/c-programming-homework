#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int num, sum = 0;
    for(int i = 0; i < n; i++) {
        scanf("%d", &num);

        sum += num;
    }

    float avg = (float)sum / n;

    printf("Sum: %d\n", sum);
    printf("Avg: %.2f\n", avg);

    return 0;
}
