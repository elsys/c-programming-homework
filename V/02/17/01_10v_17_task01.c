#include <stdio.h>

int main() {
	int a;
	printf("\n Input number > ");
	scanf("%d" , &a);
	int m = a;
	a = a*a;
	printf("\n%d" , a);
	a = a*m;
	printf("\n%d\n" , a);
}

