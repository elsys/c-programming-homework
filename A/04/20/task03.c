#include <stdio.h>

int main()
{
    char sentence[500];
    int times[26] = {0}, i;

    fgets(sentence, 500, stdin);

    for(i = 0; sentence[i] != '\0'; i++){
        if(sentence[i] >= 'A' && sentence[i] <= 'Z')
            sentence[i] += 32;
    }

    for(i=0; sentence[i] != '\0'; i++){
        if(sentence[i] >= 'a' && sentence[i] <= 'z')
            times[sentence[i] - 'a'] += 1;
    }

    for(i = 0; i < 26; i++){
        if (times[i] != 0)
            printf("\n %c - %d", i + 'a', times[i]);
    }
}
