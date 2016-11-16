#include <stdio.h>

int main() {
    int n, i = 0, tmp;
    scanf("%d", &n);
    int arr[n];

    while (i < n) {
        scanf("%d", &tmp);
        if (tmp % 2) {
            arr[i] = tmp;
            i++;
        }
    }

    for (int i = 0; i < (n / 2); i++) {
        printf("%d\n", arr[i] - arr[n - i - 1]);
    }

    if (n % 2) {
        printf("%d\n", arr[n / 2]);
    }

    return 0;
}
