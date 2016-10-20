#include <stdio.h>

int main() {
    int n = 0;
    int sum = 0;
    int counter = 0;
    float avg = 0;
    scanf("%d", &n);

    while (n > 0) {
        sum += (n % 10);
        n /= 10;
        counter += 1;
    }

    printf("%d\n", sum);

    avg = (float)sum / counter;

    printf("%f\n", avg);

    if (avg > 7) {
        printf("heavy\n");
    }
    else {
        printf("light\n");
    }

    return 0;
}
