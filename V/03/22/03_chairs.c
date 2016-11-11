#include <stdio.h>

int main(){

	int n, k, i;
	float sum=0, m, discount=1;
	scanf("%d%f%d", &n, &m, &k);
	for(i=0; i<n/k; i++, discount-=0.02)
		sum += m*k*discount;
	printf("%d", (int)sum);
	return 0;
}
