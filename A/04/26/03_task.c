#include <stdio.h>

int main()
{
    char strg[1000], a;
    int i = 0, n, j;
    int letter[26] = {0};

    fgets(strg, 1000, stdin);

    while (strg[i] != '\n') {

        if (strg[i] >= 'A' && strg[i] <= 'Z')
            strg[i] = strg[i] + 32;

        if(strg[i] >= 'a' && strg[i] <= 'z') {

            for(j = 97; j <= 122; j++) {
                if(strg[i] == j){
                    n = j - 97;
                    letter[n]++;
                    break;
                }
            }
        }
        i++;
    }
    a = 'a';
    for( j = 0; j < 26; j++, a++){
        if(letter[j] != 0) {
        printf("%c - %d\n", a, letter[j]);
        }
    }
    return 0;
}
