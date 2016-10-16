#include<stdio.h>
int main(){
	char l;
	int n, p;
	scanf("%c", &l);
	n = l - 96;
	p = 27 - n;
	printf("%c", p+96);
	return 0;
}
