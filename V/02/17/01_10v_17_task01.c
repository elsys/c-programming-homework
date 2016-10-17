#include <stdio.h>

int main() {
	int a;
	scanf("%d" , &a);
	int m = a;
	a = a*a;
	m = a*m;
	printf("\n%d" , a);
	printf("\n%d" , m);
	return 0;
}

