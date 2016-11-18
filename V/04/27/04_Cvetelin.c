#include <stdio.h>
#include <math.h>

int main()
{
    float numbers[64], sum = 0;
    int i = 0, j;
    while(i < 64 && scanf("%f", &numbers[i]) != EOF)
    {
        for(j = i - 1; j >= 0; j--)
        {
            if(numbers[i] == numbers[j])
            {
                i--;
                break;
            }
        }
        i++;
    }
    printf("%d", i);
    for(j = 0; j < i; j++)
    {
        sum += fmod(numbers[j], i);
    }
    printf("\n%.3f", sum);
    return 0;
}
