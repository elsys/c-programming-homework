#include <stdio.h>

float PERCENTAGE_INCREASE = 0.02f;

int main() {
    int n, m, k;

    scanf("%d", &n);
    scanf("%d", &m);
    scanf("%d", &k);

    float percentage_discount = 0.0f;
    int price, total_price = 0, x = k;

    for(int i = 0; i < n; i++) {
        if(i == k) {
            percentage_discount += PERCENTAGE_INCREASE;
            k += x;
        }

        price = m - (percentage_discount * m);

        total_price += price;
    }

    printf("%d\n", total_price);

    return 0;
}
