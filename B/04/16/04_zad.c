#include <stdio.h>
#include <math.h>


int main ()
{
        float x, arr[64], sum, numbers, a;
        int i, k, count, help;
        scanf("%f", &x);
        arr[0] = x;
        numbers = 1;
        sum = 0;
        help = 0;
        for (i = 1; scanf("%f", &x) != EOF; i++)
        {
                if (i == 64) break;
                count = 0;
                for (k = help ; k >= 0; k --)
                {
                        if (x != arr[k])
                        {
                                count++;
                        }
                }
                if (count == help + 1)
                {
                        arr[help + 1] = x;
                        numbers++;
                        help++;
                }
        }

        printf ("%.0f\n", numbers);
        for (i = 0; i < numbers; i++)
        {
                a = fmod(arr[i], numbers);
                sum = sum + a;
        }
        printf("%.3f", sum);
}
