#include <stdio.h>

float get_biggest_of_three(float a, float b, float c);

int main()
{
    float a = 0, b = 0, c = 0;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    float result = get_biggest_of_three(a, b, c);

    printf("%.1f\n", result);
    return 0;
}

float get_biggest_of_three(float a, float b, float c)
{
    if ((a > b) && (a > c))
    {
        return a;
    }
    else if ((b > a) && (b > c))
    {
        return b;
    }
    else
    {
        return c;
    }
}

