#include <stdio.h>

int main() {
    int n;
    float avg;
    scanf("%d", &n);

    int num, sum = 0,i;
    for(i = 0; i < n; i++) {
        scanf("%d", &num);

        sum += num;
    }

     avg = (float)sum / n;

    printf("Sum: %d\n", sum);
    printf("Avg: %.2f\n", avg);

    return 0;
}
