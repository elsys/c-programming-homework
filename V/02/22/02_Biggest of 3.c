#include <stdio.h>

int main(){

	float a, b, c;
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);
	if(a>=b && a>=c)
		printf("%f", a);
	if(b>=a && b>=c)
		printf("%f", b);
	if(c>=a && c>=b)
		printf("%f", c);

	return 0;
}
