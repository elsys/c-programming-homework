#include <stdio.h>

int main () {
    int count, step;
    float price, discount = 0, total = 0;

    scanf("%d", &count);
    scanf("%f", &price);
    scanf("%d", &step);

    for (int i = 1; i <= count; i++) {
        total += price - (price * discount / 100);
        if (!(i % step)) {
            discount += 2;
        }
    }

    printf("%.0f\n", total);
}
