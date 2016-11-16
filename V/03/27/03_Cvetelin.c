#include <stdio.h>

int main()
{
    int n, m, k, money, i, sum = 0;
    int p = 0;
    scanf("%d", &n);
    scanf("%d", &m);
    scanf("%d", &k);
    money = m;
    while(n > 0)
    {
        for(i = k; i > 0; i--)
        {
            sum += money;
        }
        p += 2;
        money = m - (m * p / 100);
        n -= k;
    }
    printf("%d", sum);
    return 0;
}
