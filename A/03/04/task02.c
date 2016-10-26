#include <stdio.h>

int main() {
    unsigned int n;
    scanf("%u", &n);

    int last_digit, sum = 0, length = 0;

    while(n > 0) {
        last_digit = n % 10;
        sum += last_digit;

        length++;

        n /= 10;
    }

    float avg = (float)sum / length;

    printf(avg > 7.0 ? "heavy\n" : "light\n");

    return 0;
}
