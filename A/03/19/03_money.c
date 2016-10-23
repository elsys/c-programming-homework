#include <stdio.h>

int main()
{
	int n, m, k, sm=0, i=1;
	scanf("%d", &n);
	scanf("%d", &m);
	scanf("%d", &k);
	for(float p=0.02*m; i<=n; i++)
	{
		sm=m+sm;
		if(i%k==0)m=m-p;
	}
	printf("%d\n", sm);
	return 0;
}
