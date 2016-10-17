#include <stdio.h>

int main()
{
    char c, result;
    scanf("%c", &c);
    result = 'z' - (c - 'a');
    printf("%c", result);
    return 0;
}
