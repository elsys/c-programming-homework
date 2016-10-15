#include <stdio.h>

char get_opposite_letter(char);

int main() {
    char c;
    scanf("%c", &c);

    printf("%c\n", get_opposite_letter(c));

    return 0;
}

char get_opposite_letter(char c) {
    char middle = 'a' + (('z' - 'a') / 2); // 'm'
    char letter_distance_from_middle = middle - c;

    middle++; // because the opposite of middle is middle + 1, not middle

    return letter_distance_from_middle + middle;
}
