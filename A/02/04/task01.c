#include <stdio.h>

int math_pow(int, int);

int main() {
    int n;
    scanf("%d", &n);

    printf("%d\n", math_pow(n, 2));
    printf("%d\n", math_pow(n, 3));

    return 0;
}

int math_pow(int number, int power) {
    int result = number;

    for(int i = 0; i < power - 1; i++) {
        result *= number;
    }

    return result;
}
