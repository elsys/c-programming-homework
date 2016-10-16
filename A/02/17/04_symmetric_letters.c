#include <stdio.h>
#include <string.h>

char get_symmetric_letter(char input);

int main()
{
    char input_letter = getchar();
    printf("%c\n", get_symmetric_letter(input_letter));
    return 0;
}

char get_symmetric_letter(char input)
{
    const char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
    int index_of_input = 0;
    for (int i = 0; i < strlen(alphabet); i++)
    {
        if (alphabet[i] == input)
        {
            index_of_input = i;
            break;
        }
    }

    return alphabet[26 - 1 - index_of_input];
}


