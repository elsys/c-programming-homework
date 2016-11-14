#include <stdio.h>

int main() {
    char str[1000];
    int occurences[26] = {0}, i = 0;

    fgets(str, 1000, stdin);

    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32;
        }

        i++;
    }

    i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            occurences[str[i] - 'a']++;
        }

        i++;
    }

    for (i = 0; i < 26; i++) {
        if (occurences[i] != 0) {
            printf("%c - %d\n", i + 'a',occurences[i]);
        }
    }
    return 0;
}
