#include <stdio.h>
 int main() 
{
    int n, m, k, i, sum;
    sum=0;
    i=0;
    scanf("%d", &n);
    scanf("%d", &m);
    scanf("%d", &k);
    for(; i < n; i++)
	{
        sum =sum+m-(i / k * (2 * m / 100));
	}
    printf("\n%d", sum);
    
	return 0;
}
