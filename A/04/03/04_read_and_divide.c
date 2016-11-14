#include <stdio.h>
#include <math.h>

int main() {
    float numbers[64];
    int total = 0;

    for (int i = 0; i < 64;) {
        float tmp;
        if (scanf("%f", &tmp) == EOF)
            break;

        int status = 0;
        for (int j = i; j >= 0; j--) {
            if (numbers[j] == tmp) {
                status = 1;
                break;
            }
        }

        if (!status) {
            numbers[i] = tmp;
            total++;
            i++;
        }
    }

    float sum = 0;
    for (int i = 0; i < total; i++){
        sum += fmod(numbers[i], total);
    }

    printf("%d\n%.3f\n", total, sum);
}
