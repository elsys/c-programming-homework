#include <stdio.h>

int main(){

	int n, i;
	scanf("%d", &n);
	int array[n-1];
	for(i=0; i<n; i++) scanf("%d", &array[i]);
	for(i=n; i>0; i--) printf("%d\n", array[i-1]);
	return 0;
}
