#include <stdio.h>


int main () {
    int total;
    scanf("%d", &total);

    int array[total];
    int number;

    for (int i = 0; i < total;) {
        scanf("%d", &number);
        if (number % 2) {
            array[i] = number;
            i++;
        }
    }

    int i, j;
    for (i = 0, j = total - 1; j > i; i++, j--) {
        printf("%d\n", array[i] - array[j]);
    }

    if (i == j)
        printf("%d\n", array[i]);

}
