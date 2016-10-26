#include <stdio.h>


int main () {
    int number, sum = 0, total = 0;

    scanf("%d", &number);

    for (;number > 0; number /= 10, total += 1) {
        sum += number % 10;
    }

    if ((float)sum / total < 7)
        printf("light\n");
    else
        printf("heavy\n");
}
