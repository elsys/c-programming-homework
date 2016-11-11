#include <stdio.h>

int main()
{
        int n, m, k, i,sum;
        scanf("%d", &n);
        scanf("%d", &m);
        scanf("%d", &k);
	sum = 0;
        for(i = 1; ; i++)
        {
		sum = sum + m;
        	if(i % k == 0)
        	{
        		m = m * 0.98;
        	}
		if (i == n) break;
        }
        printf("%d", sum);

        return 0;
}
