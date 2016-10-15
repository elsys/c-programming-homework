#include <stdio.h>

char NUMBER_WORDS[10][6] = {
    "zero", "one", "two", "three", "four",
    "five", "six", "seven", "eight", "nine"
};

int main() {
    int n;
    scanf("%d", &n);

    printf("%s\n", NUMBER_WORDS[n]);

    return 0;
}
