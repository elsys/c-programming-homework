#include <stdio.h>

void print_elements(int*, int);

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = n - 1; i >= 0; i--) {
        scanf("%d", &arr[i]);
    }

    print_elements(arr, n);

    return 0;
}

void print_elements(int* arr, int len) {
    for(int i = 0; i < len; i++) {
        printf("%d\n", arr[i]);
    }
}
