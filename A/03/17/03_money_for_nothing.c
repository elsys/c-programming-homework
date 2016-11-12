#include <stdio.h>

int main() {
    int n, m, k, j = 0, sum = 0, discount = 0;
    scanf("%d", &n);
    scanf("%d", &m);
    scanf("%d", &k);


    for (int i = 1; i <= n; i++) {
        if (j == k) {
            discount += 2;
            j = 0;
        }
        sum += (m - (m *((float)discount / 100)));
        j++;
    }


    printf("%d\n", sum);
    return 0;
}
