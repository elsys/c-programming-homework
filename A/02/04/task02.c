#include <stdio.h>

float get_biggest(float, float, float);

int main() {
    float a, b, c;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    printf("%.1f\n", get_biggest(a, b, c));

    return 0;
}

float get_biggest(float a, float b, float c) {
    if(a > b && a > c) {
        return a;
    }
    else if(b > a && b > c) {
        return b;
    }

    return c;
}
