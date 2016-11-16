#include <stdio.h>
#include <math.h>

int is_unique(double* arr, int len, double val);

int main() {
    double arr[64], sum = 0, tmp = 0;
    int count = 0, i = 0;

    while (scanf("%lf", &tmp) != EOF) {
        if (is_unique(arr, i, tmp)) {
            arr[i] = tmp;
            count++;
            i++;
        }
    }

    i = 0;
    while (i < count) {
        sum += fmod(arr[i], count);
        i++;
    }

    printf("%d\n", count);
    printf("%.3lf\n", sum);

    return 0;
}

int is_unique(double* arr, int len, double val) {
    for (int i = 0; i < len; i++) {
        if (arr[i] == val) {
            return 0;
        }
    }
    return 1;
}
