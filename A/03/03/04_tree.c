#include <stdio.h>


int main () {
    int side, count = 0;

    scanf("%d", &side);

    for (int i = 0; i < (side - 2) * 2; i += 2) {
        for (int j = 0; j <= i; j++) {
            count += 1;
        }
    }
    printf("%d\n", count);

    for (int i = 0, k = 0; i < side * 2; i += 2, k++) {
        for (int j = 0; j < side - k - 1; j++) {
            printf(" ");
        }
        char to_print;
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i || k == side - 1)
                to_print = '*';
            else {
                to_print = '#';
            }
            printf("%c", to_print);
        }

        printf("\n");
    }
}
