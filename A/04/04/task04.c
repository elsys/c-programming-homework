#include <stdio.h>

const static int MAX_LEN = 64;

int is_in_array(float, float*, int);
float floatmod(float, float);
float get_sum_of_remainders(float*, int);

int main() {
    float arr[MAX_LEN];

    float num;
    int i = 0;
    while(scanf("%f", &num) != EOF) {
        if(!is_in_array(num, arr, i)) {
            arr[i] = num;
            i++;
        }
    }

    printf("%d\n", i);
    printf("%.3f\n", get_sum_of_remainders(arr, i));

    return 0;
}

int is_in_array(float num, float* arr, int len) {
    for(int i = 0; i < len; i++) {
        if(arr[i] == num) {
            return 1;
        }
    }

    return 0;
}

float floatmod(float a, float b) {
    // Stackoverflow <3
    return (a - b * (int)(a / b));
}

float get_sum_of_remainders(float* arr, int total_count) {
    float result = 0.0f;

    for(int i = 0; i < total_count; i++) {
        result += floatmod(arr[i], total_count);
    }

    return result;
}
