#include <stdio.h>

int main(){

	int i, n, a, sum=0;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &a);
		sum += a;
	}
	printf("%d", sum);
	printf("\n%.2f", (float)sum/n);
	return 0;
}
