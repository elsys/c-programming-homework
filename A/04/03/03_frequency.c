#include <stdio.h>


void normalise (char *string) {
    for (int i = 0; string[i] != '\0'; i++) {
        char smb = string[i];
        if (smb >= 'A' && smb <= 'Z' )
            string[i] += ' ';
        else if (smb < 'a' || smb > 'z')
            string[i] = '{';
    }
}

int main () {
    char string[1001];
    int frequency[27] = {0};

    fgets(string, 1000, stdin);
    normalise(string);

    for (int i = 0; string[i] != '\0'; i++) {
        frequency[string[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
        if (frequency[i])
            printf("%c - %d\n", i + 'a', frequency[i]);
}
