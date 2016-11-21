 #include <stdio.h>
#include <stdlib.h>
#include <math.h>

    int main()
{
    float chisla[64], suma = 0;
    int i , j;

    for(i = 0;i < 64 && scanf("%f", &chisla[i]) != EOF;i++)
    {
        for(j = i - 1; j >= 0; j--)
        {
            if(chisla[i] == chisla[j])
            {
                i--;
                break;
            }
        }
    }
    printf("%d", i);
    j = 0;
    while(j < i)
    {
        suma = fmod(chisla[j], i) + suma;
        j++;
    }
    printf("\n%.3f", suma);
    return 0;
} 
