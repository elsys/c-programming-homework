#include <stdio.h>

void print_reversed(int* arr, int len);

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    print_reversed(arr, n);

    return 0;
}

void print_reversed(int* reversed, int len) {
    for (int i = len - 1; i >= 0; i--) {
        printf("%d\n", reversed[i]);
    }
}
