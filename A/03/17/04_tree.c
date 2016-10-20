#include <stdio.h>

int power(int num, int power);

int main() {
    int n = 0, count = 1;
    scanf("%d", &n);

    printf("%d\n", power(n-2, 2));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        if (i == 0) {
            printf("*");
        }
        else if (i == n - 1) {
            for (int j = 0; j < (2 * n) - 1; j++) {
                printf("*");
            }
        }
        else {
            printf("*");
            for (int j = 0; j < count; j++) {
                printf("#");
            }
            count += 2;
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

int power(int num, int power) {
    int result = 1;
    for (int i = 0; i < power; i++) {
        result *= num;
    }

    return result;
}
