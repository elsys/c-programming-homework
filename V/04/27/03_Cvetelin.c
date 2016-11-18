#include <stdio.h>
#include <string.h>

int main()
{
    char sentence[1000];
    char letters[26];
    int lettersNum[1000] = {0};
    int i, ch, b = 0;
    char a;
    fgets(sentence, 1000, stdin);
    for(a = 'a'; a <= 'z'; a++)
    {
        ch = 0;
        for(i = 0; sentence[i] != '\0'; i++)
        {
            if(sentence[i] == a || sentence[i] == a - 32)
            {
                letters[b] = a;
                lettersNum[b]++;
                ch = 1;
            }
        }
        if(ch) b++;
    }
    letters[b] = '\0';
    for(i = 0; i < strlen(letters); i++)
    {
        printf("\n%c - %d", letters[i], lettersNum[i]);
    }
    return 0;
}
