#include <stdio.h>
int main() {
	int n, m, k;
	int sum = 0;
	int i;
	scanf("%d",&n);	
	scanf("%d",&m);
	scanf("%d",&k);
	for(i = 0; i < n; i++)
     {
		sum += m-(i / k * (2 * m / 100));
	}
	printf("%d\n",sum);
	return 0;
}
