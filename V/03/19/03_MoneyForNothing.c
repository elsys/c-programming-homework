#include<stdio.h>

int main()
{
	int n, br, m, k,dis = 0, total = 0;
	scanf("%d%d%d", &n, &m, &k);
	br = 0;
	while(br < n)
	{ 
		dis = m - (br/k * (2 * m/100));
		total = total + dis;
		br++;
	}
	printf("%d\n", total);
	return 0;
}
