#include <stdio.h>


int main () {
    int total;
    scanf("%d", &total);

    int array[total];

    for (int i = 0; i < total; i++) {
        scanf("%d", &array[i]);
    }

    for (int i = total - 1; i >= 0; i--) {
        printf("%d\n", array[i]);
    }
}
