#include <stdio.h>

void print_elements(int*, int);

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    print_elements(arr, n - 1);

    return 0;
}

void print_elements(int* arr, int len) {
    for(int i = len; i >= 0; i--) {
        printf("%d\n", arr[i]);
    }
}
