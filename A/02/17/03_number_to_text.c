#include <stdio.h>

char *digit_to_word(int n);

int main()
{
    int n = -1;
    scanf("%d", &n);

    printf("%s\n", digit_to_word(n));
    return 0;
}

char *digit_to_word(int n)
{
    switch (n)
    {
    case 0:
        return "zero";
        break;
    case 1:
        return "one";
        break;
    case 2:
        return "two";
        break;
    case 3:
        return "three";
        break;
    case 4:
        return "four";
        break;
    case 5:
        return "five";
        break;
    case 6:
        return "six";
        break;
    case 7:
        return "seven";
        break;
    case 8:
        return "eight";
        break;
    case 9:
        return "nine";
        break;
    default:
        return "";
        break;
    }
}

