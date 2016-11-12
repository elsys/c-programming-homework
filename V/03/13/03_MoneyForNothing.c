#include <stdio.h>

int main()
{
	int n, m, k, sum = 0, i = 0,  dsc = 0, m1;
	scanf("%d", &n);	//number of chairs
	scanf("%d", &m);	//price for 1 chair
	scanf("%d", &k);	//2% discount for every k chairs
	m1 = m;
	while(i < n)
	{
		if(i != 0 && i % k == 0)
		{
			dsc = dsc + 2;
			m = m1 - (m1 * dsc / 100);
		}
		sum = sum + m;
		i++;
	}
	printf("%d", sum);
}
